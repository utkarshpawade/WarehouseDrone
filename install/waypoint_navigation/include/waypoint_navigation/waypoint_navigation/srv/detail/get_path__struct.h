// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from waypoint_navigation:srv/GetPath.idl
// generated code does not contain a copyright notice

#ifndef WAYPOINT_NAVIGATION__SRV__DETAIL__GET_PATH__STRUCT_H_
#define WAYPOINT_NAVIGATION__SRV__DETAIL__GET_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start_point'
// Member 'end_point'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/GetPath in the package waypoint_navigation.
typedef struct waypoint_navigation__srv__GetPath_Request
{
  geometry_msgs__msg__Pose start_point;
  geometry_msgs__msg__Pose end_point;
} waypoint_navigation__srv__GetPath_Request;

// Struct for a sequence of waypoint_navigation__srv__GetPath_Request.
typedef struct waypoint_navigation__srv__GetPath_Request__Sequence
{
  waypoint_navigation__srv__GetPath_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation__srv__GetPath_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "geometry_msgs/msg/detail/pose_array__struct.h"

/// Struct defined in srv/GetPath in the package waypoint_navigation.
typedef struct waypoint_navigation__srv__GetPath_Response
{
  geometry_msgs__msg__PoseArray path;
  bool is_on_first_path;
} waypoint_navigation__srv__GetPath_Response;

// Struct for a sequence of waypoint_navigation__srv__GetPath_Response.
typedef struct waypoint_navigation__srv__GetPath_Response__Sequence
{
  waypoint_navigation__srv__GetPath_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation__srv__GetPath_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAYPOINT_NAVIGATION__SRV__DETAIL__GET_PATH__STRUCT_H_
