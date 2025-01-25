// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mav_system_msgs:msg/ProcessInfo.idl
// generated code does not contain a copyright notice

#ifndef MAV_SYSTEM_MSGS__MSG__DETAIL__PROCESS_INFO__STRUCT_H_
#define MAV_SYSTEM_MSGS__MSG__DETAIL__PROCESS_INFO__STRUCT_H_

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
// Member 'username'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ProcessInfo in the package mav_system_msgs.
/**
  * Miscellaneous information about process status.
  * Written by Marco Tranzatto (see: https://github.com/ethz-asl/mav_eurathlon/blob/master/mav_eurathlon_msgs/msg/ProcessInfo.msg)
 */
typedef struct mav_system_msgs__msg__ProcessInfo
{
  /// Process PID
  uint32_t pid;
  /// Process name
  rosidl_runtime_c__String name;
  /// Name of the user that owns the process
  rosidl_runtime_c__String username;
  /// Process CPU utilization as a percentage
  float cpu_percent;
} mav_system_msgs__msg__ProcessInfo;

// Struct for a sequence of mav_system_msgs__msg__ProcessInfo.
typedef struct mav_system_msgs__msg__ProcessInfo__Sequence
{
  mav_system_msgs__msg__ProcessInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mav_system_msgs__msg__ProcessInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAV_SYSTEM_MSGS__MSG__DETAIL__PROCESS_INFO__STRUCT_H_
