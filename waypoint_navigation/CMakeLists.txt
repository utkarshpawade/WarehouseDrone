cmake_minimum_required(VERSION 3.8)
project(waypoint_navigation)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rclpy REQUIRED)
find_package(action_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_srvs REQUIRED)

# Generate interfaces for both the action and service files
rosidl_generate_interfaces(${PROJECT_NAME}
  "action/NavToWaypoint.action"
  "srv/GetWaypoints.srv"
  "srv/GetPath.srv"
  DEPENDENCIES geometry_msgs std_srvs std_msgs
)


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()

