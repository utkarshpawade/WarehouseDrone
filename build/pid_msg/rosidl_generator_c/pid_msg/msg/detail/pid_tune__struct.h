// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pid_msg:msg/PIDTune.idl
// generated code does not contain a copyright notice

#ifndef PID_MSG__MSG__DETAIL__PID_TUNE__STRUCT_H_
#define PID_MSG__MSG__DETAIL__PID_TUNE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PIDTune in the package pid_msg.
typedef struct pid_msg__msg__PIDTune
{
  int16_t kp;
  int16_t ki;
  int16_t kd;
} pid_msg__msg__PIDTune;

// Struct for a sequence of pid_msg__msg__PIDTune.
typedef struct pid_msg__msg__PIDTune__Sequence
{
  pid_msg__msg__PIDTune * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pid_msg__msg__PIDTune__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PID_MSG__MSG__DETAIL__PID_TUNE__STRUCT_H_
