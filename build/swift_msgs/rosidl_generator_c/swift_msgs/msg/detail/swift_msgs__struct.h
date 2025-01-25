// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swift_msgs:msg/SwiftMsgs.idl
// generated code does not contain a copyright notice

#ifndef SWIFT_MSGS__MSG__DETAIL__SWIFT_MSGS__STRUCT_H_
#define SWIFT_MSGS__MSG__DETAIL__SWIFT_MSGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SwiftMsgs in the package swift_msgs.
typedef struct swift_msgs__msg__SwiftMsgs
{
  int64_t rc_roll;
  int64_t rc_pitch;
  int64_t rc_yaw;
  int64_t rc_throttle;
  int64_t rc_aux1;
  int64_t rc_aux2;
  int64_t rc_aux3;
  int64_t rc_aux4;
  int64_t drone_index;
} swift_msgs__msg__SwiftMsgs;

// Struct for a sequence of swift_msgs__msg__SwiftMsgs.
typedef struct swift_msgs__msg__SwiftMsgs__Sequence
{
  swift_msgs__msg__SwiftMsgs * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swift_msgs__msg__SwiftMsgs__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWIFT_MSGS__MSG__DETAIL__SWIFT_MSGS__STRUCT_H_
