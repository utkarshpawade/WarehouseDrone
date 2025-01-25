#!/usr/bin/env python3
'''
# Team ID:          2061
# Theme:            WAREHOUSE DRONE
# Author List:      Utkarsh Pawade,Prakshit Suthar,Ayush Kumar,Harsh Kaldoke
# Filename:         pico_server_2c.py
# Functions:        __init__, update_path, send_request, handle_service_response, listener_callback, 
#                   send_goal, goal_response_callback, get_result_callback, feedback_callback, main
# Global variables: None
'''
import time
import math
from tf_transformations import euler_from_quaternion

import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor

#import the action
from waypoint_navigation.action import NavToWaypoint

#pico control specific libraries
from swift_msgs.msg import SwiftMsgs
from geometry_msgs.msg import PoseArray , Pose
from pid_msg.msg import PIDTune, PIDError
from nav_msgs.msg import Odometry
from std_msgs.msg import Int32MultiArray


def pixel_to_whycon(imgx, imgy):
    goal_x= 0.02537*imgx - 12.66
    goal_y= 0.02534*imgy - 12.57
    goal_z= 27.0
    goal_w = 0
    goal = [goal_x, goal_y, goal_z,goal_w]
    return goal


class WareHouseServer(Node):

    def __init__(self):
        super().__init__('path_server_warehouse') 

        self.pid_callback_group = ReentrantCallbackGroup()
        self.action_callback_group = ReentrantCallbackGroup()

        self.time_inside_sphere = 0
        self.max_time_inside_sphere = 0
        self.point_in_sphere_start_time = None
        self.duration = 0
        self.one_point = Pose() 
        self.two_point = Pose() 
        self.three_point = Pose() 
        
        self.drone_position = [0.0,0.0,0.0,0.0]
        self.setpoint = pixel_to_whycon(500,500) # (0.025,0.1,27)
        self.dtime = 0

        self.done = False
        self.hover = False
        self.goal_one = []
        self.goal_two = []
        self.goal_three = []

        self.create_subscription(Odometry, '/rotors/odometry', self.odometry_callback, 10)
        self.cmd = SwiftMsgs()
        self.cmd.rc_roll = 1500
        self.cmd.rc_pitch = 1500
        self.cmd.rc_yaw = 1500
        self.cmd.rc_throttle = 1500

        #Kp, Ki and Kd values here
        self.Kp = [5, 5, 20, 0]
        self.Ki = [0.0, 0.0, 0.02, 0.0]
        self.Kd = [200,200,295,0]


        self.received_points = []  # List to store received points
        self.max_points = 3       # Expecting three points
        

        #variables for storing different kinds of errors
        self.error = [0,0,0,0]
        self.sum_error = [0,0,0,0]  
        self.diff_error = [0,0,0,0]
        self.prev_error = [0,0,0,0]
        
        self.pid_error = PIDError()

        self.sample_time = 0.060

        self.command_pub = self.create_publisher(SwiftMsgs, '/drone_command', 10)
        self.pid_error_pub = self.create_publisher(PIDError, '/pid_error', 10)

        self.create_subscription(PoseArray, '/whycon/poses', self.whycon_callback, 1)
        self.create_subscription(PIDTune, "/throttle_pid", self.altitude_set_pid, 1)
        self.create_subscription(PIDTune, "/pitch_pid", self.pitch_set_pid, 1)
        self.create_subscription(PIDTune, "/roll_pid", self.roll_set_pid, 1)


        self.rand_sub = self.create_subscription(Int32MultiArray,'/package_loc',self.listener_callback,10)
        #Add other sunscribers here

        self.create_subscription(Odometry, '/rotors/odometry', self.odometry_callback, 10)

        #create an action server for the action 'NavToWaypoint'. Refer to Writing an action server and client (Python) in ROS 2 tutorials
        #action name should 'waypoint_navigation'.
        #include the action_callback_group in the action server. Refer to executors in ROS 2 concepts


        self._action_server = ActionServer(
            self,
            NavToWaypoint,
            'path_planning_warehouse',
            self.execute_callback,
            callback_group=self.action_callback_group
        )

        
        self.arm()

        self.timer = self.create_timer(self.sample_time, self.pid, callback_group=self.pid_callback_group)


    def listener_callback(self, msg):
        # Extract point data from the message
        point = tuple(msg.data[:2])  # Assuming msg.data contains [x, y]
        
        # Add the new point to the list if it's not already there
        if len(self.received_points) < self.max_points and point not in self.received_points:
            self.received_points.append(point)
            self.get_logger().info(f"Received point {len(self.received_points)}: {point}")

        # Check if all points have been received
        if len(self.received_points) == self.max_points and not self.done:
            self.get_logger().info("All points received.")
            p_1 = self.received_points[0]
            p_2 = self.received_points[1]
            p_3 = self.received_points[2]

            self.goal_one = pixel_to_whycon(p_1[0],p_1[1])
            self.goal_two = pixel_to_whycon(p_2[0],p_2[1])
            self.goal_three = pixel_to_whycon(p_3[0],p_3[1])

            # Set the start and end points
    
                # First point is start_point
            self.one_point = Pose()
            self.one_point.position.x = self.goal_one[0]
            self.one_point.position.y = self.goal_one[1]
            self.one_point.position.z = self.goal_one[2]  
            # self.get_logger().info(f"Received start point: {self.start_point.position.x}, {self.start_point.position.y}, {self.start_point.position.z}")
                # Second point is end_point
            self.two_point = Pose()
            self.two_point.position.x = self.goal_two[0]
            self.two_point.position.y = self.goal_two[1]
            self.two_point.position.z = self.goal_two[2] 
            
            self.three_point = Pose()
            self.three_point.position.x = self.goal_three[0]
            self.three_point.position.y = self.goal_three[1]
            self.three_point.position.z = self.goal_three[2] 

            self.done = True

    
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
        #Set the remaining co-ordinates of the drone from msg
        self.drone_position[1] = msg.poses[0].position.y
        self.drone_position[2] = msg.poses[0].position.z+1
        self.dtime = msg.header.stamp.sec

    def altitude_set_pid(self, alt):
        self.Kp[2] = alt.kp * 1
        self.Ki[2] = alt.ki * 0.001
        self.Kd[2] = alt.kd * 1

    #Define callback function like altitide_set_pid to tune pitch, roll
    def pitch_set_pid(self,alt):
        self.Kp[1] = alt.kp * 1.0 
        self.Ki[1] = alt.ki * 0.001
        self.Kd[1] = alt.kd * 1.0
    def roll_set_pid(self,alt):
        self.Kp[0] = alt.kp * 1.0 
        self.Ki[0] = alt.ki * 0.001
        self.Kd[0] = alt.kd * 1.0
    
    def odometry_callback(self, msg):
        orientation_q = msg.pose.pose.orientation
        orientation_list = [orientation_q.x, orientation_q.y, orientation_q.z, orientation_q.w]
        roll, pitch, yaw = euler_from_quaternion(orientation_list)

        self.roll_deg = math.degrees(roll)
        self.pitch_deg = math.degrees(pitch)
        self.yaw_deg = math.degrees(yaw)
        self.drone_position[3] = self.yaw_deg	

    def pid(self):

        #write your PID algorithm here. This time write equations for throttle, pitch, roll and yaw. 
        #Follow the steps from task 1b.
        for i in range(4):
            self.error[i] =self.drone_position[i]-self.setpoint[i]
            self.sum_error[i] += self.error[i]
            self.diff_error[i] = self.error[i]-self.prev_error[i]
            self.prev_error[i] = self.error[i]
            

        self.pid_error.throttle_error = self.error[2]
        self.pid_error.pitch_error = self.error[1]
        self.pid_error.roll_error = self.error[0]
        self.pid_error.yaw_error = self.error[3]
        
        
        self.throttle = (self.Kp[2] * self.error[2] + 
						self.Ki[2] * self.sum_error[2] + 
						self.Kd[2] * self.diff_error[2])
		
		

        self.roll =  (self.Kp[0] * self.error[0] + 
					self.Ki[0] * self.sum_error[0] + 
					self.Kd[0] * self.diff_error[0])
					 
		
        
        self.pitch = (self.Kp[1] * self.error[1] + 
					self.Ki[1] * self.sum_error[1] + 
					self.Kd[1] * self.diff_error[1])
        
        self.yaw = (self.Kp[3] * self.error[3] + 
					self.Ki[3] * self.sum_error[3] + 
					self.Kd[3] * self.diff_error[3])
        


        self.cmd.rc_throttle = int(1500 + self.throttle)



        if self.cmd.rc_throttle > 2000:
              self.cmd.rc_throttle = 2000
        elif self.cmd.rc_throttle < 1000:
            self.cmd.rc_throttle = 1000
   
	
        self.cmd.rc_roll = int(1500 - self.roll)



        if self.cmd.rc_roll > 2000:
            self.cmd.rc_roll = 2000
        elif self.cmd.rc_roll < 1000:
            self.cmd.rc_roll = 1000


        self.cmd.rc_pitch= int(1500 + self.pitch)



        if self.cmd.rc_pitch > 2000:
            self.cmd.rc_pitch= 2000
        elif self.cmd.rc_pitch< 1000:
             self.cmd.rc_pitch = 1000

        
        self.cmd.rc_yaw= int(1500 + self.yaw)



        if self.cmd.rc_yaw > 2000:
            self.cmd.rc_yaw= 2000
        elif self.cmd.rc_yaw< 1000:
             self.cmd.rc_yaw = 1000


 
        self.command_pub.publish(self.cmd)
        self.pid_error_pub.publish(self.pid_error)

    def execute_callback(self, goal_handle):

        self.get_logger().info('Executing goal...')
        self.setpoint[0] = goal_handle.request.waypoint.position.x
        self.setpoint[1] = goal_handle.request.waypoint.position.y
        self.setpoint[2] = goal_handle.request.waypoint.position.z
        self.get_logger().warn(f'The goal one is {self.goal_one}')
        self.get_logger().warn(f'The goal two is {self.goal_two}')
        if (self.setpoint == self.goal_one) or (self.setpoint == self.goal_two) or (self.setpoint == self.goal_three):
            self.get_logger().warn('The SetPoint Will Hover Now ---------------')
            self.hover = True


        self.get_logger().info(f'New Waypoint Set: {self.setpoint}')
        self.max_time_inside_sphere = 0
        self.point_in_sphere_start_time = None
        self.time_inside_sphere = 0
        self.duration = self.dtime
        

        #create a NavToWaypoint feedback object. Refer to Writing an action server and client (Python) in ROS 2 tutorials.
        feedback_msg = NavToWaypoint.Feedback()
        #--------The script given below checks whether you are hovering at each of the waypoints(goals) for max of 3s---------#
        # This will help you to analyse the drone behaviour and help you to tune the PID better.
        # self.drone_position[0] == self.start_point[0] and self.drone_position[1] == self.start_point[1]) or (self.drone_position[0] == self.end_point[0] and self.drone_position[1] == self.end_point[1])
        # (self.drone_position[0] == self.start_point[0] and self.drone_position[1] == self.start_point[1]) or (self.drone_position[0] == self.end_point[0] and self.drone_position[1] == self.end_point[1])
        while True:
            feedback_msg.current_waypoint.pose.position.x = self.drone_position[0]
            feedback_msg.current_waypoint.pose.position.y = self.drone_position[1]
            feedback_msg.current_waypoint.pose.position.z = self.drone_position[2]
            feedback_msg.current_waypoint.header.stamp.sec = self.max_time_inside_sphere

            goal_handle.publish_feedback(feedback_msg)
            
            drone_is_in_sphere = self.is_drone_in_sphere(self.drone_position, goal_handle, 0.6) #the value '0.4' is the error range in the whycon coordinates that will be used for grading. 
            #You can use greater values initially and then move towards the value '0.4'. This will help you to check whether your waypoint navigation is working properly. 

            if not drone_is_in_sphere and self.point_in_sphere_start_time is None:
                        pass
            
            elif drone_is_in_sphere and self.point_in_sphere_start_time is None:
                        self.point_in_sphere_start_time = self.dtime
                        self.get_logger().info('Drone in sphere for 1st time')                        #you can choose to comment this out to get a better look at other logs

            elif drone_is_in_sphere and self.point_in_sphere_start_time is not None:
                        self.time_inside_sphere = self.dtime - self.point_in_sphere_start_time
                        self.get_logger().info('Drone in sphere')                                     #you can choose to comment this out to get a better look at other logs
                            
            elif not drone_is_in_sphere and self.point_in_sphere_start_time is not None:
                        self.get_logger().info('Drone out of sphere')                                 #you can choose to comment this out to get a better look at other logs
                        self.point_in_sphere_start_time = None

            if self.time_inside_sphere > self.max_time_inside_sphere:
                self.max_time_inside_sphere = self.time_inside_sphere

            # if self.max_time_inside_sphere >= 3  and not self.hover:
            #     break

            if self.hover :
                if self.max_time_inside_sphere >= 3 :
                    self.hover = False
                    break
            
            else :
                break
            
                        

        goal_handle.succeed()

        #create a NavToWaypoint result object. Refer to Writing an action server and client (Python) in ROS 2 tutorials
        result = NavToWaypoint.Result()
        result.hov_time = self.dtime - self.duration #this is the total time taken by the drone in trying to stabilize at a point
        return result

    def is_drone_in_sphere(self, drone_pos, sphere_center, radius):
        return (
            (drone_pos[0] - sphere_center.request.waypoint.position.x) ** 2
            + (drone_pos[1] - sphere_center.request.waypoint.position.y) ** 2
            + (drone_pos[2] - sphere_center.request.waypoint.position.z) ** 2
        ) <= radius**2


def main(args=None):
    rclpy.init(args=args)

    waypoint_server = WareHouseServer()
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

