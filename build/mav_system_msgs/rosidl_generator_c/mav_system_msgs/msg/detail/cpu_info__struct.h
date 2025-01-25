// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mav_system_msgs:msg/CpuInfo.idl
// generated code does not contain a copyright notice

#ifndef MAV_SYSTEM_MSGS__MSG__DETAIL__CPU_INFO__STRUCT_H_
#define MAV_SYSTEM_MSGS__MSG__DETAIL__CPU_INFO__STRUCT_H_

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
// Member 'cpu_percent'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'heaviest_processes'
#include "mav_system_msgs/msg/detail/process_info__struct.h"

/// Struct defined in msg/CpuInfo in the package mav_system_msgs.
/**
  * Miscellaneous information about CPU status.
  * Written by Marco Tranzatto (see: https://github.com/ethz-asl/mav_eurathlon/blob/master/mav_eurathlon_msgs/msg/CpuInfo.msg)
 */
typedef struct mav_system_msgs__msg__CpuInfo
{
  std_msgs__msg__Header header;
  /// Current system-wide CPU utilization as a percentage, per CPU.
  rosidl_runtime_c__float__Sequence cpu_percent;
  /// Info about heaviest running processes.
  mav_system_msgs__msg__ProcessInfo__Sequence heaviest_processes;
} mav_system_msgs__msg__CpuInfo;

// Struct for a sequence of mav_system_msgs__msg__CpuInfo.
typedef struct mav_system_msgs__msg__CpuInfo__Sequence
{
  mav_system_msgs__msg__CpuInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mav_system_msgs__msg__CpuInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAV_SYSTEM_MSGS__MSG__DETAIL__CPU_INFO__STRUCT_H_
