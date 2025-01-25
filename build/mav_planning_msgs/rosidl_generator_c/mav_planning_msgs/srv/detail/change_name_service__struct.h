// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mav_planning_msgs:srv/ChangeNameService.idl
// generated code does not contain a copyright notice

#ifndef MAV_PLANNING_MSGS__SRV__DETAIL__CHANGE_NAME_SERVICE__STRUCT_H_
#define MAV_PLANNING_MSGS__SRV__DETAIL__CHANGE_NAME_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ChangeNameService in the package mav_planning_msgs.
typedef struct mav_planning_msgs__srv__ChangeNameService_Request
{
  rosidl_runtime_c__String name;
} mav_planning_msgs__srv__ChangeNameService_Request;

// Struct for a sequence of mav_planning_msgs__srv__ChangeNameService_Request.
typedef struct mav_planning_msgs__srv__ChangeNameService_Request__Sequence
{
  mav_planning_msgs__srv__ChangeNameService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mav_planning_msgs__srv__ChangeNameService_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ChangeNameService in the package mav_planning_msgs.
typedef struct mav_planning_msgs__srv__ChangeNameService_Response
{
  bool success;
  rosidl_runtime_c__String message;
} mav_planning_msgs__srv__ChangeNameService_Response;

// Struct for a sequence of mav_planning_msgs__srv__ChangeNameService_Response.
typedef struct mav_planning_msgs__srv__ChangeNameService_Response__Sequence
{
  mav_planning_msgs__srv__ChangeNameService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mav_planning_msgs__srv__ChangeNameService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAV_PLANNING_MSGS__SRV__DETAIL__CHANGE_NAME_SERVICE__STRUCT_H_
