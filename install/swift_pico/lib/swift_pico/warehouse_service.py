#!/usr/bin/env python3
import heapq
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Pose
from waypoint_navigation.srv import GetPath # Assuming the service is defined here
import numpy as np
import cv2
from std_msgs.msg import Int32MultiArray
import random
import math

# Define helper functions

def pixel_to_whycon(imgx, imgy):
    goal_x= 0.02537*imgx - 12.66
    goal_y= 0.02534*imgy - 12.57
    goal_z= 27.0
    goal = [goal_x, goal_y, goal_z]
    return goal

def distance(p1, p2):
    return math.sqrt((p1[0] - p2[0]) ** 2 + (p1[1] - p2[1]) ** 2)

def is_in_obstacle(point, img):
    x, y = point
    return img[y, x] == 0  # Check if the point is in an obstacle (black pixel)

def steer(from_node, to_node, extend_length):
    angle = math.atan2(to_node[1] - from_node[1], to_node[0] - from_node[0])
    new_node = (int(from_node[0] + extend_length * math.cos(angle)), 
                int(from_node[1] + extend_length * math.sin(angle)))
    
    return new_node



class AStar:
    def __init__(self, start, goal, obstacle_img):
        self.start = start
        self.goal = goal
        self.obstacle_img = obstacle_img
        self.final_path = []

    def plan(self):
        open_set = []
        heapq.heappush(open_set, (0, self.start))
        came_from = {}
        g_score = {self.start: 0}
        f_score = {self.start: distance(self.start, self.goal)}

        while open_set:
            _, current = heapq.heappop(open_set)

            if current == self.goal:
                self.reconstruct_path(came_from, current)
                return self.final_path_to_pose()

            for neighbor in self.get_neighbors(current):
                tentative_g_score = g_score[current] + distance(current, neighbor)
                if tentative_g_score < g_score.get(neighbor, float('inf')):
                    came_from[neighbor] = current
                    g_score[neighbor] = tentative_g_score
                    f_score[neighbor] = tentative_g_score + distance(neighbor, self.goal)
                    if neighbor not in [i[1] for i in open_set]:
                        heapq.heappush(open_set, (f_score[neighbor], neighbor))
        
        return None  # Return None if no path is found

    def get_neighbors(self, node):
        neighbors = [
            (node[0] + dx, node[1] + dy)
            for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1), (-1, -1), (1, 1), (-1, 1), (1, -1)]
        ]
        valid_neighbors = [
            n for n in neighbors
            if 0 <= n[0] < self.obstacle_img.shape[1]
            and 0 <= n[1] < self.obstacle_img.shape[0]
            and not is_in_obstacle(n, self.obstacle_img)
        ]
        return valid_neighbors

    def reconstruct_path(self, came_from, current):
        path = [current]
        while current in came_from:
            current = came_from[current]
            path.append(current)
        path.reverse()
        self.final_path = path

    def final_path_to_pose(self):
        poses = []
        for point in self.final_path:
            goal = pixel_to_whycon(point[0], point[1])
            pose = Pose()
            pose.position.x = goal[0]
            pose.position.y = goal[1]
            pose.position.z = goal[2]
            poses.append(pose)
        return poses

class WareHouseService(Node):
    def __init__(self):
        super().__init__('warehouse_service')
        self.srv = self.create_service(GetPath, 'plan_path_warehouse', self.handle_plan_path)
        self.create_subscription(Int32MultiArray , '/package_loc' , self.listener_callback,10)
        self.obstacle_img = cv2.imread('2D_bit_map.png', cv2.IMREAD_GRAYSCALE)
        self.final_path = []
        self.location_one = ()
        self.location_two = ()
        self.location_three = ()

        self.received_points = []  # List to store received points
        self.max_points = 3       # Expecting three points

        self.got_points = False

    # def listener_callback(self,msg) :
    #     if not self.got_points :
    #         self.location_one = tuple(msg.data[0:2])
    #         self.location_two = tuple(msg.data[2:4])
    #         self.location_three = tuple(msg.data[4:6])

    #         if self.location_one and self.location_two and self.location_three :
    #             self.got_points = True

    def listener_callback(self, msg):
        # Extract point data from the message
        point = tuple(msg.data[:2])  # Assuming msg.data contains [x, y]
        
        # Add the new point to the list if it's not already there
        if len(self.received_points) < self.max_points and point not in self.received_points:
            self.received_points.append(point)
            self.get_logger().info(f"Received point {len(self.received_points)}: {point}")

        # Check if all points have been received
        if len(self.received_points) == self.max_points:
            self.get_logger().info("All points received.")


    # def handle_plan_path(self, request, response):
        
    #     # start = (int(request.start_point.position.x), int(request.start_point.position.y))
    #     # end = (int(request.end_point.position.x), int(request.end_point.position.y))

    #     self.get_logger().info(f"the starting point is {self.location_one}")
    #     self.get_logger().info(f"the second point is {self.location_two}")
    #     self.get_logger().info(f"the third point is {self.location_three}")

        
    #     # self.rrt_one = RRTStar((500,500),start,self.obstacle_img)
    #     # self.rrt_two = RRTStar(start, end, self.obstacle_img)
    #     self.rrt_one = AStar((500,500),self.location_one,self.obstacle_img)
    #     self.rrt_two = AStar(self.location_one, self.location_two, self.obstacle_img)
    #     self.rrt_three = AStar(self.location_two, self.location_three, self.obstacle_img)
    #     path_one = self.rrt_one.plan()
    #     path_two = self.rrt_two.plan()
    #     path_three = self.rrt_three.plan()
    #     if path_one is None:
    #         self.get_logger().error("Path one not found.")
    #         return response  # Optionally return an empty response or set an error status

    #     if path_two is None:
    #         self.get_logger().error("Path two not found.")
    #         return response  # Optionally return an empty response or set an error status

    #     if path_three is None:
    #         self.get_logger().error("Path three not found.")
    #         return response  # Optionally return an empty response or set an error status

    # # Merge paths without duplicating the last point of path_one
    #     self.final_path = path_one[:-1] + path_two[:-1] + path_three
    #     # if path_one:
    #     #     # response.path_one = path_one0 
    #         # self.get_logger().info("Path planning successful.")
    #     # else:
    #     #     self.get_logger().info("Path not found.")
    #     # if path_two:
    #     #     response.path_two = path_two
    #     #     self.get_logger().info("Path planning successful.")
    #     # else:
    #     #     self.get_logger().info("Path not found.")

    #     if self.final_path :
    #         self.get_logger().info(f"final path length is {len(self.final_path)}")
    #         self.get_logger().info(f"final path is {(self.final_path)}")
    #         response.path.poses = [Pose() for _ in range(len(self.final_path))]
    #         # for i in range(len(self.final_path)):
    #         #     response.path.poses[i].position.x = self.final_path[i][0]
    #         #     response.path.poses[i].position.y = self.final_path[i][1]
    #         #     response.path.poses[i].position.z = self.final_path[i][2]

    #         for i, pose in enumerate(self.final_path):
    #             response.path.poses[i].position.x = pose.position.x
    #             response.path.poses[i].position.y = pose.position.y
    #             response.path.poses[i].position.z = pose.position.z
    #         self.get_logger().info("Path planning successful.")
            
    #     return response

    def handle_plan_path(self, request, response):
        if len(self.received_points) < self.max_points:
            self.get_logger().error("Not all points have been received yet.")
            return response  # Return an empty response or set an error status

        # Assign the points
        self.location_one, self.location_two, self.location_three = self.received_points

        self.get_logger().info(f"The starting point is {self.location_one}")
        self.get_logger().info(f"The second point is {self.location_two}")
        self.get_logger().info(f"The third point is {self.location_three}")

        # Run A* for each segment
        self.rrt_one = AStar((500, 500), self.location_one, self.obstacle_img)
        self.rrt_two = AStar(self.location_one, self.location_two, self.obstacle_img)
        self.rrt_three = AStar(self.location_two, self.location_three, self.obstacle_img)
        path_one = self.rrt_one.plan()
        path_two = self.rrt_two.plan()
        path_three = self.rrt_three.plan()

        if not path_one:
            self.get_logger().error("Path one not found.")
            return response
        if not path_two:
            self.get_logger().error("Path two not found.")
            return response
        if not path_three:
            self.get_logger().error("Path three not found.")
            return response

        # Merge paths
        self.final_path = path_one[:-1] + path_two[:-1] + path_three
        self.get_logger().info(f"Final path length: {len(self.final_path)}")

        # Convert path to PoseArray response
        response.path.poses = [Pose() for _ in range(len(self.final_path))]
        for i, pose in enumerate(self.final_path):
            response.path.poses[i].position.x = pose.position.x
            response.path.poses[i].position.y = pose.position.y
            response.path.poses[i].position.z = pose.position.z

        self.get_logger().info("Path planning successful.")
        return response


def main(args=None):
    rclpy.init(args=args)
    path_planner_service = WareHouseService()

    try:
        rclpy.spin(path_planner_service)
    except KeyboardInterrupt:
        path_planner_service.get_logger().info('KeyboardInterrupt, shutting down.')
    finally:
        path_planner_service.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()



