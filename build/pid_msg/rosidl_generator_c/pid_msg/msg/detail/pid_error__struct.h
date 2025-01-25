// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pid_msg:msg/PIDError.idl
// generated code does not contain a copyright notice

#ifndef PID_MSG__MSG__DETAIL__PID_ERROR__STRUCT_H_
#define PID_MSG__MSG__DETAIL__PID_ERROR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PIDError in the package pid_msg.
typedef struct pid_msg__msg__PIDError
{
  float roll_error;
  float pitch_error;
  float throttle_error;
  float yaw_error;
} pid_msg__msg__PIDError;

// Struct for a sequence of pid_msg__msg__PIDError.
typedef struct pid_msg__msg__PIDError__Sequence
{
  pid_msg__msg__PIDError * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pid_msg__msg__PIDError__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PID_MSG__MSG__DETAIL__PID_ERROR__STRUCT_H_
