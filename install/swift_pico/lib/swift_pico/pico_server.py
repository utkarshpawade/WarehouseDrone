#!/usr/bin/env python3

import time
import math
from tf_transformations import euler_from_quaternion

import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor

# Import the action
# from swift_msgs.action import NavToWaypoint
from waypoint_navigation.action import NavToWaypoint

# Pico control specific libraries
from swift_msgs.msg import SwiftMsgs
from geometry_msgs.msg import PoseArray, Pose
from pid_msg.msg import PIDTune, PIDError
from nav_msgs.msg import Odometry

class WayPointServer(Node):
   
    
    def __init__(self):
        
        super().__init__('waypoint_server')

        self.pid_callback_group = ReentrantCallbackGroup()
        self.action_callback_group = ReentrantCallbackGroup()

        self.throttle_history = []  # Store past throttle values for moving average
        self.moving_avg_window = 5  # Number of samples for the moving average

        self.time_inside_sphere = 0
        self.max_time_inside_sphere = 0
        self.point_in_sphere_start_time = None
        self.duration = 0

        # Drone position: [yaw, roll, pitch, throttle]
        self.drone_position = [0.0, 0.0, 0.0, 0.0]
        self.setpoint = [0, 0, 27, 0]  # Desired position
        self.dtime = 0

        self.cmd = SwiftMsgs()
        self.cmd.rc_roll = 1500
        self.cmd.rc_pitch = 1500
        self.cmd.rc_yaw = 1500
        self.cmd.rc_throttle = 1500

        # # PID constants for yaw, roll, pitch, throttle
        self.Kp = [5, 5, 14, 0]
        self.Ki = [0, 0, 0.07, 0]
        self.Kd = [200, 200, 312, 0]

        # self.Kp = [5, 5, 14, 0]
        # self.Ki = [0, 0, 0.07, 0]
        # self.Kd = [190, 190, 312, 0]
        # self.Kp = [0, 0, 0, 0]
        # self.Ki = [0, 0, 0, 0]
        # self.Kd = [0, 0, 0, 0]


        # Error variables for PID control
        self.error = [0, 0, 0, 0]
        self.sum_error = [0, 0, 0, 0]
        self.diff_error = [0, 0, 0, 0]
        self.prev_error = [0, 0, 0, 0]

        self.pid_error = PIDError()

        self.sample_time = 0.060

        # Set up publishers and subscribers
        self.command_pub = self.create_publisher(SwiftMsgs, '/drone_command', 10)
        self.pid_error_pub = self.create_publisher(PIDError, '/pid_error', 10)

        self.create_subscription(PoseArray, '/whycon/poses', self.whycon_callback, 1)
        self.create_subscription(PIDTune, "/throttle_pid", self.altitude_set_pid, 1)
        self.create_subscription(PIDTune, "/pitch_pid", self.config_pitch, 1)
        self.create_subscription(PIDTune, "/roll_pid", self.config_roll, 1)
        self.create_subscription(Odometry, '/rotors/odometry', self.odometry_callback, 10)

        # Set up the action server for waypoint navigation
        self._action_server = ActionServer(
            self,
            NavToWaypoint,
            'waypoint_navigation',
            self.execute_callback,
            callback_group=self.action_callback_group
        )

        # Arm the drone
        self.arm()

        # Create a timer for the PID loop
        self.timer = self.create_timer(self.sample_time, self.pid, callback_group=self.pid_callback_group)

    def disarm(self):
        
        self.cmd.rc_roll = 1000
        self.cmd.rc_yaw = 1000
        self.cmd.rc_pitch = 1000
        self.cmd.rc_throttle = 1000
        self.cmd.rc_aux4 = 1000
        self.command_pub.publish(self.cmd)

    def arm(self):
        
        self.disarm()
        self.cmd.rc_roll = 1500
        self.cmd.rc_yaw = 1500
        self.cmd.rc_pitch = 1500
        self.cmd.rc_throttle = 1500
        self.cmd.rc_aux4 = 2000
        self.command_pub.publish(self.cmd)

    def whycon_callback(self, msg):
        
        self.drone_position[0] = msg.poses[0].position.x
        self.drone_position[1] = msg.poses[0].position.y
        self.drone_position[2] = msg.poses[0].position.z
        self.dtime = msg.header.stamp.sec

    def altitude_set_pid(self, alt):
        
        self.Kp[2] = alt.kp * 1.0 
        self.Ki[2] = alt.ki * 0.01
        self.Kd[2] = alt.kd * 1.0

    def config_pitch(self, pitch):
        
        self.Kp[1] = pitch.kp * 1.0  
        self.Ki[1] = pitch.ki * 0.001
        self.Kd[1] = pitch.kd * 1.0

    def config_roll(self, roll):
        
        self.Kp[0] = roll.kp * 1.0  
        self.Ki[0] = roll.ki * 0.001
        self.Kd[0] = roll.kd * 1.0

    def odometry_callback(self, msg):
        
        
        orientation_q = msg.pose.pose.orientation
        orientation_list = [orientation_q.x, orientation_q.y, orientation_q.z, orientation_q.w]
        roll, pitch, yaw = euler_from_quaternion(orientation_list)

        self.roll_deg = math.degrees(roll)
        self.pitch_deg = math.degrees(pitch)
        self.yaw_deg = math.degrees(yaw)
        self.drone_position[3] = self.yaw_deg

    def pid(self):
        
        for i in range(4):
                self.error[i] = self.drone_position[i] - self.setpoint[i]
                self.sum_error[i] += self.error[i]
                self.diff_error[i] = self.error[i] - self.prev_error[i]
                self.prev_error[i] = self.error[i]

        self.pid_error.throttle_error = self.error[2]
        self.pid_error.pitch_error = self.error[1]
        self.pid_error.roll_error = self.error[0]
        self.pid_error.yaw_error = self.error[3]

        # Calculate PID control outputs
        self.throttle = (self.Kp[2] * self.error[2] + 
                         self.Ki[2] * self.sum_error[2] + 
                         self.Kd[2] * self.diff_error[2])

        self.pitch = (self.Kp[1] * self.error[1] + 
                      self.Ki[1] * self.sum_error[1] + 
                      self.Kd[1] * self.diff_error[1])

        self.roll = (self.Kp[0] * self.error[0] + 
                     self.Ki[0] * self.sum_error[0] + 
                     self.Kd[0] * self.diff_error[0])

        self.yaw = (self.Kp[3] * self.error[3] + 
                    self.Ki[3] * self.sum_error[3] + 
                    self.Kd[3] * self.diff_error[3])

        # Apply control outputs to command
        self.cmd.rc_throttle = int(1500 + self.throttle)
        self.cmd.rc_roll = int(1500 - self.roll)
        self.cmd.rc_pitch = int(1500 + self.pitch)
        self.cmd.rc_yaw = int(1500 + self.yaw)

        raw_throttle = (self.Kp[2] * self.error[2] + 
                        self.Ki[2] * self.sum_error[2] + 
                        self.Kd[2] * self.diff_error[2])

        self.throttle_history.append(raw_throttle)
        if len(self.throttle_history) > self.moving_avg_window:
            self.throttle_history.pop(0)  # Maintain a fixed window size

        self.throttle = sum(self.throttle_history) / len(self.throttle_history)

        # Apply safety bounds
        self.cmd.rc_throttle = min(max(self.cmd.rc_throttle, 1000), 2000)
        self.cmd.rc_roll = min(max(self.cmd.rc_roll, 1000), 2000)
        self.cmd.rc_pitch = min(max(self.cmd.rc_pitch, 1000), 2000)
        self.cmd.rc_yaw = min(max(self.cmd.rc_yaw, 1000), 2000)

        # Publish control commands and PID errors
        self.command_pub.publish(self.cmd)
        self.pid_error_pub.publish(self.pid_error)

    def execute_callback(self, goal_handle):
        
        self.get_logger().info('Executing goal...')
        self.setpoint[0] = goal_handle.request.waypoint.position.x
        self.setpoint[1] = goal_handle.request.waypoint.position.y
        self.setpoint[2] = goal_handle.request.waypoint.position.z
        self.get_logger().info(f'New Waypoint Set: {self.setpoint}')

        self.max_time_inside_sphere = 0
        self.point_in_sphere_start_time = None
        self.time_inside_sphere = 0
        self.duration = self.dtime

        # Create feedback message
        feedback_msg = NavToWaypoint.Feedback()

        while True:
            feedback_msg.current_waypoint.pose.position.x = self.drone_position[0]
            feedback_msg.current_waypoint.pose.position.y = self.drone_position[1]
            feedback_msg.current_waypoint.pose.position.z = self.drone_position[2] 
            feedback_msg.current_waypoint.header.stamp.sec = self.max_time_inside_sphere

            goal_handle.publish_feedback(feedback_msg)

            drone_is_in_sphere = self.is_drone_in_sphere(self.drone_position, goal_handle, 0.4)
            if not drone_is_in_sphere and self.point_in_sphere_start_time is None:
                pass
            elif drone_is_in_sphere and self.point_in_sphere_start_time is None:
                self.point_in_sphere_start_time = self.dtime
                self.get_logger().info('Drone in sphere for 1st time')
            elif drone_is_in_sphere and self.point_in_sphere_start_time is not None:
                self.time_inside_sphere = self.dtime - self.point_in_sphere_start_time
                self.get_logger().info('Drone in sphere')
            elif not drone_is_in_sphere and self.point_in_sphere_start_time is not None:
                self.get_logger().info('Drone out of sphere')
                self.point_in_sphere_start_time = None

            if self.time_inside_sphere > self.max_time_inside_sphere:
                self.max_time_inside_sphere = self.time_inside_sphere

            if self.max_time_inside_sphere >= 3:
                break

        goal_handle.succeed()

        result = NavToWaypoint.Result()
        result.hov_time = self.dtime - self.duration
        return result

    def is_drone_in_sphere(self, drone_pos, sphere_center, radius):
        
        return (
            (drone_pos[0] - sphere_center.request.waypoint.position.x) ** 2
            + (drone_pos[1] - sphere_center.request.waypoint.position.y) ** 2
            + (drone_pos[2] - sphere_center.request.waypoint.position.z) ** 2
        ) <= radius**2


def main(args=None):
    
    rclpy.init(args=args)

    waypoint_server = WayPointServer()
    executor = MultiThreadedExecutor()
    executor.add_node(waypoint_server)

    try:
         executor.spin()
    except KeyboardInterrupt:
        waypoint_server.get_logger().info('KeyboardInterrupt, shutting down.\n')
    finally:
         waypoint_server.destroy_node()
         rclpy.shutdown()


if __name__ == '__main__':
    main()