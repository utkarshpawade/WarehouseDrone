#!/usr/bin/env python3

import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from waypoint_navigation.action import NavToWaypoint
from waypoint_navigation.srv import GetPath
from std_msgs.msg import Int32MultiArray
from geometry_msgs.msg import Pose


class PathPlanningClient(Node):
    def __init__(self):
        super().__init__('path_client')
        self.goals = []
        self.goal_index = 0
        self.path_received = False
        self.request_sent = False
        self.done = False

        # Action client for NavToWaypoint
        self.action_client = ActionClient(self, NavToWaypoint, 'path_planning')

        # Service client for GetPath
        self.cli = self.create_client(GetPath, 'plan_path')

        # Subscription to random points
        self.rand_sub = self.create_subscription(Int32MultiArray, '/random_points', self.listener_callback, 10)

        # Wait for the service to be available
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for "plan_path" service to become available...')

        self.request = GetPath.Request()
        self.start_point = Pose()
        self.end_point = Pose()

        # Timer to periodically check and send requests
        self.timer = self.create_timer(2.0, self.update_path)

    def update_path(self):
        """
        Timer callback to periodically send a path request.
        Only sends a request if a path is not yet received.
        """
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
        self.request.start_point = self.start_point
        self.request.end_point = self.end_point
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
        """
        Callback for the /random_points topic to set start and end points.
        """
        if len(msg.data) >= 4 and not self.done:
            self.get_logger().info('Received random points for path planning.')
            x_start, y_start, x_end, y_end = msg.data[:4]
            self.start_point.position.x = float(x_start)
            self.start_point.position.y = float(y_start)
            self.start_point.position.z = 27.0
            self.end_point.position.x = float(x_end)
            self.end_point.position.y = float(y_end)
            self.end_point.position.z = 27.0
            self.path_received = False  # Reset path status for new request
            self.request_sent = False
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
    waypoint_client = PathPlanningClient()
    try:
        rclpy.spin(waypoint_client)
    except KeyboardInterrupt:
        waypoint_client.get_logger().info('Shutting down...')
    finally:
        waypoint_client.destroy_node()
        rclpy.shutdown()
    
    rclpy.shutdown()















# #!/usr/bin/env python3

# import time
# import rclpy
# from rclpy.action import ActionClient
# from rclpy.node import Node
# from waypoint_navigation.action import NavToWaypoint
# from waypoint_navigation.srv import GetPath
# from std_msgs.msg import Int32MultiArray
# from geometry_msgs.msg import Pose

# class PathPlanningClient(Node):

#     def __init__(self):
#         super().__init__('path_client')
#         self.goals = []
#         self.goal_index = 0
#         # Action client for NavToWaypoint
#         self.action_client = ActionClient(self, NavToWaypoint, 'path_planning')

#         # Service client for GetPath
#         self.cli = self.create_client(GetPath, 'plan_path')
#         self.rand_sub = self.create_subscription(Int32MultiArray, '/random_points', self.listener_callback, 10)

#         # Wait for service availability
#         while not self.cli.wait_for_service(timeout_sec=1.0):
#             self.get_logger().info('Service not available, waiting again...')

#         self.request = GetPath.Request()
#         self.start_point = Pose()
#         self.end_point = Pose()

#         self.path_received = False
#         self.request_sent = False
#         # self.path_request_in_progress = False

#         self.timer = self.create_timer(2.0, self.update_path)
   
#     def update_path(self):
#         if not self.path_received :  # Only request path if not yet received
#             self.get_logger().info(f'the path is received : {self.path_received}')
#             future = self.send_request()

#             if future:
#                 # self.request_sent = True
#                 self.get_logger().info('Reached in future')
#                 future.add_done_callback(self.handle_service_response)
#             else:
#                 self.get_logger().warn("Failed to send path request.")

#     # def pixel_to_whycon(imgx, imgy):
#     #     goal_x= 0.02537*imgx - 12.66
#     #     goal_y= 0.02534*imgy - 12.57
#     #     goal_z= 27.0
#     #     goal = [goal_x, goal_y, goal_z]
#     #     return goal


#     def send_request(self):
#         if not self.request_sent :
#             self.request.start_point = self.start_point
#             self.request.end_point = self.end_point
#             return self.cli.call_async(self.request)

#     def send_goal(self, waypoint):
#         goal_msg = NavToWaypoint.Goal()
#         goal_msg.waypoint.position.x = waypoint[0]
#         goal_msg.waypoint.position.y = waypoint[1]
#         goal_msg.waypoint.position.z = waypoint[2]

#         self.action_client.wait_for_server()
#         self.send_goal_future = self.action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
#         self.send_goal_future.add_done_callback(self.goal_response_callback)

#     def goal_response_callback(self, future):
#         try:
#             response = future.result()
#             self.get_logger().info('Goal accepted, waiting for result...')
#             self.get_result_future = response.get_result_async()
#             self.get_result_future.add_done_callback(self.get_result_callback)
#         except Exception as e:
#             self.get_logger().error(f'Exception while sending goal: {e}')

#     def listener_callback(self, msg):
#         if len(msg.data) >= 4:
#             x_start, y_start, x_end, y_end = msg.data[0], msg.data[1], msg.data[2], msg.data[3]
#             # goal_one = self.pixel_to_whycon(x_start,y_start)
#             # goal_two = self.pixel_to_whycon(x_end,y_end)
#             # self.start_point = Pose()
#             self.start_point.position.x = float(x_start)
#             self.start_point.position.y = float(y_start)
#             self.start_point.position.z = 27.0  # Set z to 27
#             # self.end_point = Pose()
#             self.end_point.position.x = float(x_end)
#             self.end_point.position.y = float(y_end)
#             self.end_point.position.z = 27.0  # Set z to 27
#             self.send_request()

#     def get_result_callback(self, future):
#         result = future.result().result
#         self.get_logger().info(f'Result: {result.hov_time}')
#         self.goal_index += 1

#         if self.goal_index < len(self.goals):
#             self.send_goal(self.goals[self.goal_index])
#         else:
#             self.get_logger().info('All waypoints have been reached successfully')

#     def feedback_callback(self, feedback_msg):
#         feedback = feedback_msg.feedback
#         x = feedback.current_waypoint.pose.position.x
#         y = feedback.current_waypoint.pose.position.y
#         z = feedback.current_waypoint.pose.position.z
#         t = feedback.current_waypoint.header.stamp.sec
#         self.get_logger().info(f'Received feedback! The current position is: {x}, {y}, {z}')
#         self.get_logger().info(f'Max time inside sphere: {t}')

#     # def receive_goals(self):
#     #     future = self.send_request()
#     #     rclpy.spin_until_future_complete(self, future)
#     #     response = future.result()
#     #     self.get_logger().info('Waypoints received by the action client')

#     #     for pose in response.path.poses:
#     #         waypoints = [pose.position.x, pose.position.y, pose.position.z]
#     #         self.goals.append(waypoints)
#     #         self.get_logger().info(f'Waypoints: {waypoints}')

#     #     if self.goals:
#     #         self.send_goal(self.goals[0])
#     #     else:
#     #         self.get_logger().warn("Received an empty path; no waypoints to navigate.")

#     def handle_service_response(self, future):
#         # self.path_request_in_progress = False ]
#         self.get_logger().info(f"Called Handle Service")
#         response = future.result()
#         if response and response.path.poses:
#             self.get_logger().info("Path received from service")
#             self.goals.clear()  # Clear previous goals

#             for pose in response.path.poses:
#                 waypoints = [pose.position.x, pose.position.y, pose.position.z]
#                 self.goals.append(waypoints)
#                 self.get_logger().info(f'Waypoint: {waypoints}')
            
#             if self.goals:
#                 self.path_received = True  # Set path status to received
#                 self.goal_index = 0
#                 self.timer.cancel()
#                 self.send_goal(self.goals[0])
#             else:
#                 self.get_logger().warn("Received an empty path; no waypoints to navigate.")
#         else:
#             self.get_logger().warn("No path received from service.")




# def main(args=None):
#     rclpy.init(args=args)
#     waypoint_client = PathPlanningClient()
#     # waypoint_client.receive_goals()

#     try:
#         rclpy.spin(waypoint_client)
#     except KeyboardInterrupt:
#         waypoint_client.get_logger().info('KeyboardInterrupt, shutting down.\n')
#     finally:
#         waypoint_client.destroy_node()
#         rclpy.shutdown()














# #!/usr/bin/env python3

# import time
# import rclpy
# from rclpy.action import ActionClient
# from rclpy.node import Node

# #import the action and service
# from waypoint_navigation.action import NavToWaypoint
# from waypoint_navigation.srv import GetPath
# from std_msgs.msg import Int32MultiArray
# from geometry_msgs.msg import Pose



# class PathPlanningClient(Node):

#     def __init__(self):
#         super().__init__('path_client')
#         self.goals = []
#         self.goal_index = 0
#         #create an action client for the action 'NavToWaypoint'. Refer to Writing an action server and client (Python) in ROS 2 tutorials
#         #action name should 'waypoint_navigation'.
#         self.action_client = ActionClient(self, NavToWaypoint, 'path_planning')
        
        
#         #create a client for the service 'GetPath'. Refer to Writing a simple service and client (Python) in ROS 2 tutorials
#         #service name should be 'waypoints'
#         self.cli = self.create_client(GetPath, 'plan_path')

#         self.rand_sub = self.create_subscription(Int32MultiArray,'/random_points',self.listener_callback,10)

#         self.start = None
#         self.end = None
        
#         while not self.cli.wait_for_service(timeout_sec=1.0):
#             self.get_logger().info('service not available, waiting again...')

#         #create a request object for GetPath service.
#         self.request = GetPath.Request()

#     def send_request(self):
#         #  complete send_request method, which will send the request and return a future
#         # request = GetPath.Request()
#         self.request.start_point = self.start_point
#         self.request.end_point = self.end_point
#         return self.cli.call_async(self.request)
    
#     ###action client functions

#     def send_goal(self, waypoint):

#         #create a NavToWaypoint goal object.
#         goal_msg = NavToWaypoint.Goal()
        
#         goal_msg.waypoint.position.x = waypoint[0]
#         goal_msg.waypoint.position.y = waypoint[1]
#         goal_msg.waypoint.position.z = waypoint[2]

#         #create a method waits for the action server to be available.
#         self.action_client.wait_for_server()

#         self.send_goal_future = self.action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)    
#         self.send_goal_future.add_done_callback(self.goal_response_callback)

#     def goal_response_callback(self, future):

#         #complete the goal_response_callback. Refer to Writing an action server and client (Python) in ROS 2 tutorials
#         try:
#             response = future.result()
#             self.get_logger().info('Goal accepted, waiting for result...')
#             self.get_result_future = response.get_result_async() 
#             self.get_result_future.add_done_callback(self.get_result_callback)
#         except Exception as e :
#             self.get_logger().error(f'Exception while sending goal: {e}')
            
#     def listener_callback(self,msg):
#         if len(msg.data) >= 2:
#             self.get_logger().info(f"Length of msg data {len(msg.data)}")
#             x_start = msg.data[0]
#             y_start = msg.data[1]

#             x_end = msg.data[2]
#             y_end = msg.data[3]
#             # Set the start and end points
    
#                 # First point is start_point
#             self.start_point = Pose()
#             self.start_point.position.x = float(x_start)
#             self.start_point.position.y = float(y_start)
#             self.start_point.position.z = 27.0  # Set z to 27
#             self.get_logger().info(f"Received start point: {self.start_point.position.x}, {self.start_point.position.y}, {self.start_point.position.z}")
#                 # Second point is end_point
#             self.end_point = Pose()
#             self.end_point.position.x = float(x_end)
#             self.end_point.position.y = float(y_end)
#             self.end_point.position.z = 27.0  # Set z to 27
#             self.get_logger().info(f"Received end point: {self.end_point.position.x}, {self.end_point.position.y}, {self.end_point.position.z}")
            
#             self.send_request() 
        

#     def get_result_callback(self, future):

#         #complete the missing line
#         result = future.result().result
        
#         self.get_logger().info('Result: {0}'.format(result.hov_time))

#         self.goal_index += 1

#         if self.goal_index < len(self.goals):
#             self.send_goal(self.goals[self.goal_index])
#         else:
#             self.get_logger().info('All waypoints have been reached successfully')      

#     def feedback_callback(self, feedback_msg):

#         #complete the missing line
#         feedback = feedback_msg.feedback 
#         x = feedback.current_waypoint.pose.position.x
#         y = feedback.current_waypoint.pose.position.y
#         z = feedback.current_waypoint.pose.position.z
#         t = feedback.current_waypoint.header.stamp.sec
#         self.get_logger().info(f'Received feedback! The current whycon position is: {x}, {y}, {z}')
#         self.get_logger().info(f'Max time inside sphere: {t}')


#     #service client functions
        
#     def receive_goals(self):
#         future = self.send_request()
#         #write a statement to execute the service until the future is complete
#         rclpy.spin_until_future_complete(self,future)
        
#         response = future.result()
#         self.get_logger().info('Waypoints received by the action client')

#         for pose in response.waypoints.poses:
#             waypoints = [pose.position.x, pose.position.y, pose.position.z]
#             self.goals.append(waypoints)
#             self.get_logger().info(f'Waypoints: {waypoints}')

#         self.send_goal(self.goals[0])


#     def callback_response(self, future):
#         response = future.result()
#         if response:
#             self.get_logger().info(f"Received planned path: {response.path}")
#         else:
#             self.get_logger().error('Service call failed.')

        
# def main(args=None):
#     rclpy.init(args=args)
#     waypoint_client = PathPlanningClient()
#     waypoint_client.receive_goals()

#     try:
#         rclpy.spin(waypoint_client)
#     except KeyboardInterrupt:
#         waypoint_client.get_logger().info('KeyboardInterrupt, shutting down.\n')
#     finally:
#         waypoint_client.destroy_node()
#         rclpy.shutdown()
    


# def main(args=None):
#     rclpy.init(args=args)

#     waypoint_client = PathPlanningClient()
#     waypoint_client.receive_goals()

#     try:
#         rclpy.spin(waypoint_client)
#     except KeyboardInterrupt:
#         waypoint_client.get_logger().info('KeyboardInterrupt, shutting down.\n')
#     finally:
#         waypoint_client.destroy_node()
#         rclpy.shutdown()
    
#     rclpy.shutdown()


if __name__ == '__main__':
    main()
        



























# #!/usr/bin/env python3
# import rclpy
# from rclpy.node import Node
# from waypoint_navigation.srv import GetPath
# from  geometry_msgs.msg import Pose
# from std_msgs.msg  import Int32MultiArray

# class PathPlanningClient(Node):
#     def __init__(self):
#         super().__init__('path_planning_client')
#         self.client = self.create_client(GetPath, 'plan_path')
#         self.client.wait_for_service()

        # self.rand_sub = self.create_subscription(Int32MultiArray,'/random_points',self.listener_callback,10)

        # self.start = None
        # self.end = None

        
#     # def send_request(self, start_point, end_point):
#     #     request = GetPath.Request()
#     #     request.start_point = start_point
#     #     request.end_point = end_point
#     #     future = self.client.call_async(request)
#     #     return future
    
    # def listener_callback(self,msg):
    #     if len(msg.data) >= 2:
    #         self.get_logger().info(f"Length of msg data {len(msg.data)}")
    #         x_start = msg.data[0]
    #         y_start = msg.data[1]

    #         x_end = msg.data[2]
    #         y_end = msg.data[3]
    #         # Set the start and end points
    
    #             # First point is start_point
    #         self.start_point = Pose()
    #         self.start_point.position.x = float(x_start)
    #         self.start_point.position.y = float(y_start)
    #         self.start_point.position.z = 27.0  # Set z to 27
    #         self.get_logger().info(f"Received start point: {self.start_point.position.x}, {self.start_point.position.y}, {self.start_point.position.z}")
    #             # Second point is end_point
    #         self.end_point = Pose()
    #         self.end_point.position.x = float(x_end)
    #         self.end_point.position.y = float(y_end)
    #         self.end_point.position.z = 27.0  # Set z to 27
    #         self.get_logger().info(f"Received end point: {self.end_point.position.x}, {self.end_point.position.y}, {self.end_point.position.z}")
            
    #         self.send_request()


#     def send_request(self):
        # request = GetPath.Request()
        # request.start_point = self.start_point
        # request.end_point = self.end_point
        
#         # Call the service and handle the response asynchronously
#         future = self.client.call_async(request)
#         future.add_done_callback(self.callback_response)

    # def callback_response(self, future):
    #     response = future.result()
    #     if response:
    #         self.get_logger().info(f"Received planned path: {response.path}")
    #     else:
    #         self.get_logger().error('Service call failed.')



# def main(args=None):
#     rclpy.init(args=args)
#     client = PathPlanningClient()
    
#     # Spin until the client finishes receiving a response from the service
#     rclpy.spin(client)
    
# if __name__ == '__main__':
#     main()