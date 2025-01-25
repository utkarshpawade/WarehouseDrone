// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from swift_msgs:msg/SwiftMsgs.idl
// generated code does not contain a copyright notice

#ifndef SWIFT_MSGS__MSG__DETAIL__SWIFT_MSGS__FUNCTIONS_H_
#define SWIFT_MSGS__MSG__DETAIL__SWIFT_MSGS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "swift_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "swift_msgs/msg/detail/swift_msgs__struct.h"

/// Initialize msg/SwiftMsgs message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * swift_msgs__msg__SwiftMsgs
 * )) before or use
 * swift_msgs__msg__SwiftMsgs__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_swift_msgs
bool
swift_msgs__msg__SwiftMsgs__init(swift_msgs__msg__SwiftMsgs * msg);

/// Finalize msg/SwiftMsgs message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_swift_msgs
void
swift_msgs__msg__SwiftMsgs__fini(swift_msgs__msg__SwiftMsgs * msg);

/// Create msg/SwiftMsgs message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * swift_msgs__msg__SwiftMsgs__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_swift_msgs
swift_msgs__msg__SwiftMsgs *
swift_msgs__msg__SwiftMsgs__create();

/// Destroy msg/SwiftMsgs message.
/**
 * It calls
 * swift_msgs__msg__SwiftMsgs__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_swift_msgs
void
swift_msgs__msg__SwiftMsgs__destroy(swift_msgs__msg__SwiftMsgs * msg);

/// Check for msg/SwiftMsgs message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_swift_msgs
bool
swift_msgs__msg__SwiftMsgs__are_equal(const swift_msgs__msg__SwiftMsgs * lhs, const swift_msgs__msg__SwiftMsgs * rhs);

/// Copy a msg/SwiftMsgs message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_swift_msgs
bool
swift_msgs__msg__SwiftMsgs__copy(
  const swift_msgs__msg__SwiftMsgs * input,
  swift_msgs__msg__SwiftMsgs * output);

/// Initialize array of msg/SwiftMsgs messages.
/**
 * It allocates the memory for the number of elements and calls
 * swift_msgs__msg__SwiftMsgs__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_swift_msgs
bool
swift_msgs__msg__SwiftMsgs__Sequence__init(swift_msgs__msg__SwiftMsgs__Sequence * array, size_t size);

/// Finalize array of msg/SwiftMsgs messages.
/**
 * It calls
 * swift_msgs__msg__SwiftMsgs__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_swift_msgs
void
swift_msgs__msg__SwiftMsgs__Sequence__fini(swift_msgs__msg__SwiftMsgs__Sequence * array);

/// Create array of msg/SwiftMsgs messages.
/**
 * It allocates the memory for the array and calls
 * swift_msgs__msg__SwiftMsgs__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_swift_msgs
swift_msgs__msg__SwiftMsgs__Sequence *
swift_msgs__msg__SwiftMsgs__Sequence__create(size_t size);

/// Destroy array of msg/SwiftMsgs messages.
/**
 * It calls
 * swift_msgs__msg__SwiftMsgs__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_swift_msgs
void
swift_msgs__msg__SwiftMsgs__Sequence__destroy(swift_msgs__msg__SwiftMsgs__Sequence * array);

/// Check for msg/SwiftMsgs message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_swift_msgs
bool
swift_msgs__msg__SwiftMsgs__Sequence__are_equal(const swift_msgs__msg__SwiftMsgs__Sequence * lhs, const swift_msgs__msg__SwiftMsgs__Sequence * rhs);

/// Copy an array of msg/SwiftMsgs messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_swift_msgs
bool
swift_msgs__msg__SwiftMsgs__Sequence__copy(
  const swift_msgs__msg__SwiftMsgs__Sequence * input,
  swift_msgs__msg__SwiftMsgs__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SWIFT_MSGS__MSG__DETAIL__SWIFT_MSGS__FUNCTIONS_H_
