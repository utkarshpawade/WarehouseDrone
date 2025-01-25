// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mav_planning_msgs:srv/PolygonService.idl
// generated code does not contain a copyright notice

#ifndef MAV_PLANNING_MSGS__SRV__DETAIL__POLYGON_SERVICE__STRUCT_H_
#define MAV_PLANNING_MSGS__SRV__DETAIL__POLYGON_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'polygon'
#include "mav_planning_msgs/msg/detail/polygon_with_holes_stamped__struct.h"

/// Struct defined in srv/PolygonService in the package mav_planning_msgs.
typedef struct mav_planning_msgs__srv__PolygonService_Request
{
  /// The new polygon.
  mav_planning_msgs__msg__PolygonWithHolesStamped polygon;
} mav_planning_msgs__srv__PolygonService_Request;

// Struct for a sequence of mav_planning_msgs__srv__PolygonService_Request.
typedef struct mav_planning_msgs__srv__PolygonService_Request__Sequence
{
  mav_planning_msgs__srv__PolygonService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mav_planning_msgs__srv__PolygonService_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/PolygonService in the package mav_planning_msgs.
typedef struct mav_planning_msgs__srv__PolygonService_Response
{
  /// True on success, false on polygon error.
  bool success;
} mav_planning_msgs__srv__PolygonService_Response;

// Struct for a sequence of mav_planning_msgs__srv__PolygonService_Response.
typedef struct mav_planning_msgs__srv__PolygonService_Response__Sequence
{
  mav_planning_msgs__srv__PolygonService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mav_planning_msgs__srv__PolygonService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAV_PLANNING_MSGS__SRV__DETAIL__POLYGON_SERVICE__STRUCT_H_
