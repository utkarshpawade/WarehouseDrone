#!/usr/bin/env python3

'''
# Team ID:          2061
# Theme:            WAREHOUSE DRONE
# Author List:      Prakshit Suthar, Ayush Kumar, Harsh Kaldoke, Utkarsh Pawade
# Filename:         pico_client_2c.py
# Functions:        __init__, update_path, send_request, handle_service_response, listener_callback, 
#                   send_goal, goal_response_callback, get_result_callback, feedback_callback, main
# Global variables: None
'''
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from waypoint_navigation.action import NavToWaypoint
from waypoint_navigation.srv import GetPath
from std_msgs.msg import Int32MultiArray
from geometry_msgs.msg import Pose


class WareHouseClient(Node):
    def __init__(self):
        super().__init__('path_client_warehouse')
        self.goals = []
        self.goal_index = 0
        self.path_received = False
        self.request_sent = False
        self.done = False

        # Action client for NavToWaypoint
        self.action_client = ActionClient(self, NavToWaypoint, 'path_planning_warehouse')

        # Service client for GetPath
        self.cli = self.create_client(GetPath, 'plan_path_warehouse')

        # Subscription to random points
        self.rand_sub = self.create_subscription(Int32MultiArray, '/package_loc', self.listener_callback, 10)

        # Wait for the service to be available
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for "plan_path" service to become available...')

        self.request = GetPath.Request()
        self.one_point = Pose()
        self.two_point = Pose()
        self.three_point = Pose()

        self.received_points = []  # List to store received points
        self.max_points = 3       # Expecting three points
        # Timer to periodically check and send requests
        self.timer = self.create_timer(2.0, self.update_path)

    def update_path(self):
        """
        Timer callback to periodically send a path request.
        Only sends a request if a path is not yet received.
        """
        self.get_logger().warn('FInding path ---------------------------- finding')
        if not self.path_received and not self.request_sent:
            self.get_logger().info('Sending a new path request...')
            future = self.send_request()
            if future:
                self.request_sent = True  # Prevent multiple simultaneous requests
                future.add_done_callback(self.handle_service_response)
            else:
                self.get_logger().warn('Failed to send path request.')

    def send_request(self):
        """
        Sends a service request to the "plan_path" service.
        """
        self.get_logger().info('Preparing to send request...')
        return self.cli.call_async(self.request)

    def handle_service_response(self, future):
        """
        Callback for handling the response from the service.
        """
        try:
            response = future.result()
            self.get_logger().info('Service response received.')
            if response and response.path.poses:
                self.get_logger().info('Path successfully received from service.')
                self.goals = [[pose.position.x, pose.position.y, pose.position.z] for pose in response.path.poses]
                for waypoint in self.goals:
                    self.get_logger().info(f'Waypoint: {waypoint}')
                
                self.path_received = True
                self.request_sent = False
                self.goal_index = 0
                self.timer.cancel()  # Stop the timer after receiving the path
                self.send_goal(self.goals[0])
            else:
                self.get_logger().warn('Received an empty path or no response from service.')
        except Exception as e:
            self.get_logger().error(f'Error in service response: {e}')
            self.request_sent = False



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
                self.one_point.position.x = float(p_1[0])
                self.one_point.position.y = float(p_1[1])
                self.one_point.position.z = 27.0
                self.two_point.position.x = float(p_2[0])
                self.two_point.position.y = float(p_2[1])
                self.two_point.position.z = 27.0
                self.three_point.position.x = float(p_3[0])
                self.three_point.position.y = float(p_3[1])
                self.three_point.position.z = 27.0

                self.done = True

    def send_goal(self, waypoint):
        """
        Sends an action goal to navigate to a waypoint.
        """
        goal_msg = NavToWaypoint.Goal()
        goal_msg.waypoint.position.x = waypoint[0]
        goal_msg.waypoint.position.y = waypoint[1]
        goal_msg.waypoint.position.z = waypoint[2]

        self.action_client.wait_for_server()
        self.send_goal_future = self.action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        self.send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        """
        Callback for action goal response.
        """
        try:
            response = future.result()
            self.get_logger().info('Goal accepted, waiting for result...')
            self.get_result_future = response.get_result_async()
            self.get_result_future.add_done_callback(self.get_result_callback)
        except Exception as e:
            self.get_logger().error(f'Error while sending goal: {e}')

    def get_result_callback(self, future):
        """
        Callback for action goal result.
        """
        result = future.result().result
        self.get_logger().info(f'Result received: {result.hov_time}')
        self.goal_index += 1

        if self.goal_index < len(self.goals):
            self.send_goal(self.goals[self.goal_index])
        else:
            self.get_logger().info('All waypoints reached successfully.')

    def feedback_callback(self, feedback_msg):
        """
        Callback for feedback during action execution.
        """
        feedback = feedback_msg.feedback
        self.get_logger().info(f'Received feedback: Position ({feedback.current_waypoint.pose.position.x}, '
                               f'{feedback.current_waypoint.pose.position.y}, '
                               f'{feedback.current_waypoint.pose.position.z}).')


def main(args=None):
    rclpy.init(args=args)
    waypoint_client = WareHouseClient()
    try:
        rclpy.spin(waypoint_client)
    except KeyboardInterrupt:
        waypoint_client.get_logger().info('Shutting down...')
    finally:
        waypoint_client.destroy_node()
        rclpy.shutdown()
    
    # rclpy.shutdown()



if __name__ == '__main__':
    main()
        




