// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from waypoint_navigation:srv/GetWaypoints.idl
// generated code does not contain a copyright notice

#ifndef WAYPOINT_NAVIGATION__SRV__DETAIL__GET_WAYPOINTS__STRUCT_H_
#define WAYPOINT_NAVIGATION__SRV__DETAIL__GET_WAYPOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetWaypoints in the package waypoint_navigation.
typedef struct waypoint_navigation__srv__GetWaypoints_Request
{
  bool get_waypoints;
} waypoint_navigation__srv__GetWaypoints_Request;

// Struct for a sequence of waypoint_navigation__srv__GetWaypoints_Request.
typedef struct waypoint_navigation__srv__GetWaypoints_Request__Sequence
{
  waypoint_navigation__srv__GetWaypoints_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation__srv__GetWaypoints_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'waypoints'
#include "geometry_msgs/msg/detail/pose_array__struct.h"

/// Struct defined in srv/GetWaypoints in the package waypoint_navigation.
typedef struct waypoint_navigation__srv__GetWaypoints_Response
{
  /// Response contains a PoseArray of waypoints
  geometry_msgs__msg__PoseArray waypoints;
} waypoint_navigation__srv__GetWaypoints_Response;

// Struct for a sequence of waypoint_navigation__srv__GetWaypoints_Response.
typedef struct waypoint_navigation__srv__GetWaypoints_Response__Sequence
{
  waypoint_navigation__srv__GetWaypoints_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation__srv__GetWaypoints_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAYPOINT_NAVIGATION__SRV__DETAIL__GET_WAYPOINTS__STRUCT_H_
