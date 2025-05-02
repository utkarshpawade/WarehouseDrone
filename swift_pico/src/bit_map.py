#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2 as cv
import numpy as np
import cv2.aruco as aruco
class ImageSaver(Node):
    def __init__(self):
        super().__init__('image_saver')
        self.height = 1000
        self.width = 1000
        # Initialize a subscriber for the whycon image topic
        self.subscription = self.create_subscription(
            Image,
            '/arena_display/output',
            self.listener_callback,
            10
        )
        # Initialize CvBridge for ROS image to OpenCV conversion
        self.bridge = CvBridge()
        self.get_logger().info('Image saver node has been started.')

    def listener_callback(self, msg):
        try:
            # Convert ROS Image message to OpenCV format
            cv_image = self.bridge.imgmsg_to_cv2(msg, 'bgr8')
            gray_image = cv.cvtColor(cv_image, cv.COLOR_BGR2GRAY)
            _,thresh_img = cv.threshold(gray_image,125,255,cv.THRESH_BINARY)
            # Save the OpenCV image as a bitmap (.png) file
            gray = cv.cvtColor(cv_image, cv.COLOR_BGR2GRAY)
            aruco_dict = aruco.getPredefinedDictionary(aruco.DICT_4X4_250)  # ArUco dictionary
            parameters = aruco.DetectorParameters()  # Parameters for the detector
            detector = aruco.ArucoDetector(aruco_dict, parameters)  # Create ArUco detector

            corners, ids, rejected = detector.detectMarkers(gray)

            # aruco.drawDetectedMarkers(img, corners, ids)
            # print(corners)
            all_info = []
            marker_dict = {}
            all_marker_corners = []
            for marker_corners, marker_id in zip(corners, ids):
                marker_corners, marker_id in zip(corners, ids, map):
                marker_corners = marker_corners.reshape((4, 2))
                for corner in marker_corners:
                    marker_dict[(float(corner[0]), float(corner[1]))] = int(marker_id[0])

                all_info.append({
                    'marker_id': int(marker_id[0]),  # Convert to Python int
                    'top_left': tuple(map(float, marker_corners[0])),  # Convert to Python float
                    'top_right': tuple(map(float, marker_corners[1])),
                    'bottom_left': tuple(map(float, marker_corners[2])),
                    'bottom_right': tuple(map(float, marker_corners[3]))
                })
                
                all_marker_corners.append(marker_corners[0])
                all_marker_corners.append(marker_corners[1])
                all_marker_corners.append(marker_corners[2])
                all_marker_corners.append(marker_corners[3])

                
                corners1 = [
                np.array([0, 0], dtype=np.float32),
                np.array([1000, 0], dtype=np.float32),
                np.array([1000, 1000], dtype=np.float32),
                np.array([0, 1000], dtype=np.float32)
                ]

                # Function to compute Euclidean distance using numpy
                def euclidean_distance(pt1, pt2):
                    return np.linalg.norm(pt1 - pt2)

                # Find the nearest point for each corner
                closest_points = []
                for corner in corners1:
                    nearest_point = min(all_marker_corners, key=lambda p: euclidean_distance(corner, p))
                    closest_points.append(nearest_point)
                # print('Closest point',closest_points)
            id_order = []
            for i in range(0 , 4) :
                point = tuple(closest_points[i])
                # print('Point',point)
                if point in marker_dict :
                    val = marker_dict[point]
                    id_order.append(val)

            # print('Id order',id_order)
            p1 = []
            p2 = []
            p3 = []
            p4 = []

            for marker_info in all_info:
                if marker_info['marker_id'] == id_order[0]:
                    p1 = list(marker_info['top_left'])
                if marker_info['marker_id'] == id_order[1]:
                    p2 = list(marker_info['top_right'])  
                if marker_info['marker_id'] == id_order[2]:
                    p3 = list(marker_info['bottom_left'])  
                if marker_info['marker_id'] == id_order[3]:
                    p4 = list(marker_info['bottom_right'])

            # print('All Info',all_info)
                
            dst_points = np.array([[0, 0], [self.width, 0], [self.width,self.height], [0,self.height]], dtype="float32")
            src_points = np.array([p1,p2,p3,p4], dtype="float32")
            matrix = cv.getPerspectiveTransform(src_points,dst_points)
            transform = cv.warpPerspective(cv_image,matrix,(self.width,self.height))
            # print(transform.shape)
            gray_trans = cv.cvtColor(transform,cv.COLOR_BGR2GRAY)
            # cv.imshow('Transformed',transform)


            _,binary = cv.threshold(gray_trans,125,255,cv.THRESH_BINARY)

            kernel_size = 15  # Set the kernel size according to how much inflation you need
            kernel = np.ones((kernel_size, kernel_size), np.uint8)
            
            # Invert the image temporarily to make obstacles white for easier inflation
            inverted_binary = cv.bitwise_not(binary)
            
            # Apply dilation to inflate the obstacles
            inflated_inverted = cv.dilate(inverted_binary, kernel, iterations=1)
            
            # Invert back to original binary format (black obstacles on white background)
            inflated_binary = cv.bitwise_not(inflated_inverted)

            cv.imwrite('2D_bit_map.png', inflated_binary)
            cv.waitKey(0)
            
            self.get_logger().info('Image saved as 2D_bit_map.png')
            rclpy.shutdown()
        except Exception as e:
            self.get_logger().error(f'Error processing image: {e}')

def main(args=None):
    rclpy.init(args=args)
    image_saver = ImageSaver()
    try:
        rclpy.spin(image_saver)
    except KeyboardInterrupt:
        image_saver.get_logger().info('Image saver node interrupted by user')
    finally:
        # Cleanup and shutdown
        image_saver.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()






# import rclpy
# from rclpy.node import Node
# from sensor_msgs.msg import Image
# from cv_bridge import CvBridge
# import cv2 as cv
# import numpy as np
# import cv2.aruco as aruco

# class ImageSaver(Node):
#     def __init__(self):
#         super().__init__('image_saver')
#         self.height = 1000
#         self.width = 1000

#         # Initialize a subscriber for the whycon image topic
#         self.subscription = self.create_subscription(
#             Image,
#             '/arena_display/output',
#             self.listener_callback,
#             10
#         )
#         # Initialize CvBridge for ROS image to OpenCV conversion
#         self.bridge = CvBridge()
#         self.get_logger().info('Image saver node has been started.')

#     def listener_callback(self, msg):
#         try:
#             # Convert ROS Image message to OpenCV format
#             cv_image = self.bridge.imgmsg_to_cv2(msg, 'bgr8')
#             gray_image = cv.cvtColor(cv_image, cv.COLOR_BGR2GRAY)

#             # Set up ArUco marker detection
            # aruco_dict = aruco.getPredefinedDictionary(aruco.DICT_4X4_250)
            # parameters = aruco.DetectorParameters_create()
            # corners, ids, _ = aruco.detectMarkers(gray_image, aruco_dict, parameters=parameters)

#             # if ids is None:
#             #     self.get_logger().info("No markers detected.")
#             #     return

#             # Organize marker information
#             marker_dict = {}
#             all_marker_corners = []
#             for marker_corners, marker_id in zip(corners, ids):
#                 marker_corners = marker_corners.reshape((4, 2))
#                 for corner in marker_corners:
#                     marker_dict[(float(corner[0]), float(corner[1]))] = int(marker_id[0])

#                 all_marker_corners.extend(marker_corners)

#             # Define the reference corners
#             reference_corners = [
#                 np.array([0, 0], dtype=np.float32),
#                 np.array([self.width, 0], dtype=np.float32),
#                 np.array([self.width, self.height], dtype=np.float32),
#                 np.array([0, self.height], dtype=np.float32)
#             ]

#             # Function to compute Euclidean distance
#             def euclidean_distance(pt1, pt2):
#                 return np.linalg.norm(pt1 - pt2)

#             # Find the closest marker corner for each reference corner
#             closest_points = []
#             for corner in reference_corners:
#                 nearest_point = min(all_marker_corners, key=lambda p: euclidean_distance(corner, p))
#                 closest_points.append(nearest_point)

#             # Retrieve marker IDs based on the closest points
#             id_order = [marker_dict.get(tuple(point), None) for point in closest_points]

#             # Map marker IDs to respective corner points for perspective transform
#             corner_points = {
#                 id_order[0]: 'top_left',
#                 id_order[1]: 'top_right',
#                 id_order[2]: 'bottom_left',
#                 id_order[3]: 'bottom_right'
#             }

#             # Collect points based on ordered marker IDs
#             src_points = []
#             for corner in corner_points.values():
#                 for marker_info in all_info:
#                     if marker_info['marker_id'] == id_order[corner]:
#                         src_points.append(list(marker_info[corner]))

#             if len(src_points) < 4:
#                 self.get_logger().error("Not enough corners detected for perspective transformation.")
#                 return

#             # Perspective transformation
#             dst_points = np.array(reference_corners, dtype="float32")
#             src_points = np.array(src_points, dtype="float32")
#             matrix = cv.getPerspectiveTransform(src_points, dst_points)
#             transform = cv.warpPerspective(cv_image, matrix, (self.width, self.height))
            
#             # Display the transformed image
#             cv.imshow('Transformed', transform)
#             cv.imwrite('2D_bit_map.png', transform)
#             self.get_logger().info('Image saved as 2D_bit_map.png')
#             rclpy.shutdown()

#         except Exception as e:
#             self.get_logger().error(f'Error processing image: {e}')

# def main(args=None):
#     rclpy.init(args=args)
#     image_saver = ImageSaver()
#     try:
#         rclpy.spin(image_saver)
#     except KeyboardInterrupt:
#         image_saver.get_logger().info('Image saver node interrupted by user')
#     finally:
#         # Cleanup and shutdown
#         image_saver.destroy_node()
#         rclpy.shutdown()

# if __name__ == '__main__':
#     main()
