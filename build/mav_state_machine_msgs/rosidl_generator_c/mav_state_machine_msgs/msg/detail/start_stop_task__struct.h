// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mav_state_machine_msgs:msg/StartStopTask.idl
// generated code does not contain a copyright notice

#ifndef MAV_STATE_MACHINE_MSGS__MSG__DETAIL__START_STOP_TASK__STRUCT_H_
#define MAV_STATE_MACHINE_MSGS__MSG__DETAIL__START_STOP_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'task_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/StartStopTask in the package mav_state_machine_msgs.
typedef struct mav_state_machine_msgs__msg__StartStopTask
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String task_name;
  bool start;
} mav_state_machine_msgs__msg__StartStopTask;

// Struct for a sequence of mav_state_machine_msgs__msg__StartStopTask.
typedef struct mav_state_machine_msgs__msg__StartStopTask__Sequence
{
  mav_state_machine_msgs__msg__StartStopTask * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mav_state_machine_msgs__msg__StartStopTask__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAV_STATE_MACHINE_MSGS__MSG__DETAIL__START_STOP_TASK__STRUCT_H_
