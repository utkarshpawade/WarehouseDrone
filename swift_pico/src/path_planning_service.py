#!/usr/bin/env python3
import heapq
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Pose
from waypoint_navigation.srv import GetPath # Assuming the service is defined here
import numpy as np
import cv2
import random
import math

# Define helper functions
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

def pixel_to_whycon(imgx, imgy):
    goal_x= 0.02537*imgx - 12.66
    goal_y= 0.02534*imgy - 12.57
    goal_z= 27.0
    goal = [goal_x, goal_y, goal_z]
    return goal


# class RRTStar:
#     def __init__(self, start, goal, obstacle_img, max_iter=5000, step_size=8, search_radius=100):
#         self.start = start
#         self.goal = goal
#         self.obstacle_img = obstacle_img
#         self.max_iter = max_iter
#         self.step_size = step_size
#         self.search_radius = search_radius
#         self.tree = {start: None}
#         self.cost = {start: 0}
#         self.final_path = []

#     def plan(self):
#         for _ in range(self.max_iter):
#             rand_node = (random.randint(0, self.obstacle_img.shape[1] - 1),
#                          random.randint(0, self.obstacle_img.shape[0] - 1))
#             nearest_node = self.find_nearest(rand_node)
#             new_node = steer(nearest_node, rand_node, self.step_size)
            
#             if 0 <= new_node[0] < self.obstacle_img.shape[1] and 0 <= new_node[1] < self.obstacle_img.shape[0]:
#                 if is_in_obstacle(new_node, self.obstacle_img) or self.is_path_collision(nearest_node, new_node):
#                     continue
#                 self.tree[new_node] = nearest_node
#                 self.cost[new_node] = self.cost[nearest_node] + distance(nearest_node, new_node)

#                 # Rewire nearby nodes
#                 self.rewire(new_node)
                
#                 if distance(new_node, self.goal) < self.step_size:
#                     self.tree[self.goal] = new_node
#                     self.generate_path()
#                     return self.final_path_to_pose()
#         return None
#     def rewire(self, new_node):
#         nearby_nodes = self.find_nearby_nodes(new_node)
#         for nearby in nearby_nodes:
#             if not self.is_path_collision(new_node, nearby):
#                 new_cost = self.cost[new_node] + distance(new_node, nearby)
#                 if new_cost < self.cost[nearby]:
#                     self.tree[nearby] = new_node
#                     self.cost[nearby] = new_cost 

#     def find_nearest(self, node):
#         return min(self.tree.keys(), key=lambda n: distance(n, node))
#     # finds nearby nodes withtin search_radius
#     def find_nearby_nodes(self, node):
#         return [n for n in self.tree.keys() if distance(n, node) < self.search_radius]
    
#     def is_path_collision(self, node1, node2):
#         steps = max(int(distance(node1, node2) / 5), 1)  # Ensure steps is at least 1
#         for i in range(steps + 1):
#             intermediate_node = (int(node1[0] + i * (node2[0] - node1[0]) / steps),
#                                  int(node1[1] + i * (node2[1] - node1[1]) / steps))
#             if is_in_obstacle(intermediate_node, self.obstacle_img):
#                 return True
#         return False


#     def generate_path(self):
#         node = self.goal
#         path = [self.goal]
#         while node != self.start:
#             node = self.tree[node]
#             path.append(node)
#         path.reverse()
#         self.final_path = path

#     def final_path_to_pose(self):
#         poses = []
#         for point in self.final_path:
#             goal = pixel_to_whycon(point[0],point[1])
#             pose = Pose()
#             pose.position.x = goal[0]
#             pose.position.y = goal[1]
#             pose.position.z = goal[2]  # Assuming a 2D path
#             poses.append(pose)
#         return poses







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

class PathPlannerService(Node):
    def __init__(self):
        super().__init__('path_planner_service')
        self.srv = self.create_service(GetPath, 'plan_path', self.handle_plan_path)
        self.obstacle_img = cv2.imread('2D_bit_map.png', cv2.IMREAD_GRAYSCALE)
        self.final_path = []

    def handle_plan_path(self, request, response):
        
        start = (int(request.start_point.position.x), int(request.start_point.position.y))
        end = (int(request.end_point.position.x), int(request.end_point.position.y))

        self.get_logger().info(f"the starting point is {start}")
        self.get_logger().info(f"the end point is {end}")

        
        # self.rrt_one = RRTStar((500,500),start,self.obstacle_img)
        # self.rrt_two = RRTStar(start, end, self.obstacle_img)
        self.rrt_one = AStar((500,500),start,self.obstacle_img)
        self.rrt_two = AStar(start, end, self.obstacle_img)
        path_one = self.rrt_one.plan()
        path_two = self.rrt_two.plan()
        if path_one is None:
            self.get_logger().error("Path one not found.")
            return response  # Optionally return an empty response or set an error status

        if path_two is None:
            self.get_logger().error("Path two not found.")
            return response  # Optionally return an empty response or set an error status

    # Merge paths without duplicating the last point of path_one
        self.final_path = path_one[:-1] + path_two
        # if path_one:
        #     # response.path_one = path_one0 
            # self.get_logger().info("Path planning successful.")
        # else:
        #     self.get_logger().info("Path not found.")
        # if path_two:
        #     response.path_two = path_two
        #     self.get_logger().info("Path planning successful.")
        # else:
        #     self.get_logger().info("Path not found.")

        if self.final_path :
            self.get_logger().info(f"final path length is {len(self.final_path)}")
            self.get_logger().info(f"final path is {(self.final_path)}")
            response.path.poses = [Pose() for _ in range(len(self.final_path))]
            # for i in range(len(self.final_path)):
            #     response.path.poses[i].position.x = self.final_path[i][0]
            #     response.path.poses[i].position.y = self.final_path[i][1]
            #     response.path.poses[i].position.z = self.final_path[i][2]

            for i, pose in enumerate(self.final_path):
                response.path.poses[i].position.x = pose.position.x
                response.path.poses[i].position.y = pose.position.y
                response.path.poses[i].position.z = pose.position.z
            self.get_logger().info("Path planning successful.")
            
        return response

def main(args=None):
    rclpy.init(args=args)
    path_planner_service = PathPlannerService()

    try:
        rclpy.spin(path_planner_service)
    except KeyboardInterrupt:
        path_planner_service.get_logger().info('KeyboardInterrupt, shutting down.')
    finally:
        path_planner_service.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()










































# import rclpy
# from rclpy.node import Node
# from geometry_msgs.msg import Pose
# from waypoint_navigation.srv import GetPath # Assuming the service is defined here
# import numpy as np
# import cv2
# import random
# import math

# # Define helper functions
# def distance(p1, p2):
#     return math.sqrt((p1[0] - p2[0]) ** 2 + (p1[1] - p2[1]) ** 2)

# def is_in_obstacle(point, img):
#     x, y = point
#     return img[y, x] == 0  # Check if the point is in an obstacle (black pixel)

# def steer(from_node, to_node, extend_length):
#     angle = math.atan2(to_node[1] - from_node[1], to_node[0] - from_node[0])
#     new_node = (int(from_node[0] + extend_length * math.cos(angle)), 
#                 int(from_node[1] + extend_length * math.sin(angle)))
    
#     return new_node

# def pixel_to_whycon(imgx, imgy):
#     goal_x= 0.02537*imgx - 12.66
#     goal_y= 0.02534*imgy - 12.57
#     goal_z= 27.0
#     goal = [goal_x, goal_y, goal_z]
#     return goal


# class RRTStar:
#     def __init__(self, start, goal, obstacle_img, max_iter=5000, step_size=10, search_radius=50):
#         self.start = start
#         self.goal = goal
#         self.obstacle_img = obstacle_img
#         self.max_iter = max_iter
#         self.step_size = step_size
#         self.search_radius = search_radius
#         self.tree = {start: None}
#         self.cost = {start: 0}
#         self.final_path = []

#     def plan(self):
#         for _ in range(self.max_iter):
#             rand_node = (random.randint(0, self.obstacle_img.shape[1] - 1),
#                          random.randint(0, self.obstacle_img.shape[0] - 1))
#             nearest_node = self.find_nearest(rand_node)
#             new_node = steer(nearest_node, rand_node, self.step_size)
            
#             if 0 <= new_node[0] < self.obstacle_img.shape[1] and 0 <= new_node[1] < self.obstacle_img.shape[0]:
#                 if is_in_obstacle(new_node, self.obstacle_img) or self.is_path_collision(nearest_node, new_node):
#                     continue
#                 self.tree[new_node] = nearest_node
#                 self.cost[new_node] = self.cost[nearest_node] + distance(nearest_node, new_node)

#                 # Rewire nearby nodes
#                 self.rewire(new_node)
                
#                 if distance(new_node, self.goal) < self.step_size:
#                     self.tree[self.goal] = new_node
#                     self.generate_path()
#                     return self.final_path_to_pose()
#         return None
#     def rewire(self, new_node):
#         nearby_nodes = self.find_nearby_nodes(new_node)
#         for nearby in nearby_nodes:
#             if not self.is_path_collision(new_node, nearby):
#                 new_cost = self.cost[new_node] + distance(new_node, nearby)
#                 if new_cost < self.cost[nearby]:
#                     self.tree[nearby] = new_node
#                     self.cost[nearby] = new_cost 

#     def find_nearest(self, node):
#         return min(self.tree.keys(), key=lambda n: distance(n, node))
#     # finds nearby nodes withtin search_radius
#     def find_nearby_nodes(self, node):
#         return [n for n in self.tree.keys() if distance(n, node) < self.search_radius]
    
#     def is_path_collision(self, node1, node2):
#         steps = max(int(distance(node1, node2) / 5), 1)  # Ensure steps is at least 1
#         for i in range(steps + 1):
#             intermediate_node = (int(node1[0] + i * (node2[0] - node1[0]) / steps),
#                                  int(node1[1] + i * (node2[1] - node1[1]) / steps))
#             if is_in_obstacle(intermediate_node, self.obstacle_img):
#                 return True
#         return False


#     def generate_path(self):
#         node = self.goal
#         path = [self.goal]
#         while node != self.start:
#             node = self.tree[node]
#             path.append(node)
#         path.reverse()
#         self.final_path = path

#     def final_path_to_pose(self):
#         poses = []
#         for point in self.final_path:
#             goal = pixel_to_whycon(point[0],point[1])
#             pose = Pose()
#             pose.position.x = goal[0]
#             pose.position.y = goal[1]
#             pose.position.z = goal[2]  # Assuming a 2D path
#             poses.append(pose)
#         return poses

# class PathPlannerService(Node):
#     def __init__(self):
#         super().__init__('path_planner_service')
#         self.srv = self.create_service(GetPath, 'plan_path', self.handle_plan_path)
#         self.obstacle_img = cv2.imread('2D_bit_map.png', cv2.IMREAD_GRAYSCALE)
#         self.final_path = []

#     def handle_plan_path(self, request, response):
        
#         start = (int(request.start_point.position.x), int(request.start_point.position.y))
#         end = (int(request.end_point.position.x), int(request.end_point.position.y))

#         self.get_logger().info(f"the starting point is {start}")
#         self.get_logger().info(f"the end point is {end}")

        
#         self.rrt_one = RRTStar((500,500),start,self.obstacle_img)
#         self.rrt_two = RRTStar(start, end, self.obstacle_img)
#         path_one = self.rrt_one.plan()
#         path_two = self.rrt_two.plan()
#         if path_one is None:
#             self.get_logger().error("Path one not found.")
#             return response  # Optionally return an empty response or set an error status

#         if path_two is None:
#             self.get_logger().error("Path two not found.")
#             return response  # Optionally return an empty response or set an error status

#     # Merge paths without duplicating the last point of path_one
#         self.final_path = path_one[:-1] + path_two
#         # if path_one:
#         #     # response.path_one = path_one0 
#             # self.get_logger().info("Path planning successful.")
#         # else:
#         #     self.get_logger().info("Path not found.")
#         # if path_two:
#         #     response.path_two = path_two
#         #     self.get_logger().info("Path planning successful.")
#         # else:
#         #     self.get_logger().info("Path not found.")

#         if self.final_path :
#             self.get_logger().info(f"final path length is {len(self.final_path)}")
#             self.get_logger().info(f"final path is {(self.final_path)}")
#             response.path.poses = [Pose() for _ in range(len(self.final_path))]
#             # for i in range(len(self.final_path)):
#             #     response.path.poses[i].position.x = self.final_path[i][0]
#             #     response.path.poses[i].position.y = self.final_path[i][1]
#             #     response.path.poses[i].position.z = self.final_path[i][2]

#             for i, pose in enumerate(self.final_path):
#                 response.path.poses[i].position.x = pose.position.x
#                 response.path.poses[i].position.y = pose.position.y
#                 response.path.poses[i].position.z = pose.position.z
#             self.get_logger().info("Path planning successful.")
            
#         return response

# def main(args=None):
#     rclpy.init(args=args)
#     path_planner_service = PathPlannerService()

#     try:
#         rclpy.spin(path_planner_service)
#     except KeyboardInterrupt:
#         path_planner_service.get_logger().info('KeyboardInterrupt, shutting down.')
#     finally:
#         path_planner_service.destroy_node()
#         rclpy.shutdown()

# if __name__ == '__main__':
#     main()
