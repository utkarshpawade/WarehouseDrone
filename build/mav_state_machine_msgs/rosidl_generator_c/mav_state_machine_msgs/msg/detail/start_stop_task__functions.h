// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mav_state_machine_msgs:msg/StartStopTask.idl
// generated code does not contain a copyright notice

#ifndef MAV_STATE_MACHINE_MSGS__MSG__DETAIL__START_STOP_TASK__FUNCTIONS_H_
#define MAV_STATE_MACHINE_MSGS__MSG__DETAIL__START_STOP_TASK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mav_state_machine_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "mav_state_machine_msgs/msg/detail/start_stop_task__struct.h"

/// Initialize msg/StartStopTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mav_state_machine_msgs__msg__StartStopTask
 * )) before or use
 * mav_state_machine_msgs__msg__StartStopTask__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
bool
mav_state_machine_msgs__msg__StartStopTask__init(mav_state_machine_msgs__msg__StartStopTask * msg);

/// Finalize msg/StartStopTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
void
mav_state_machine_msgs__msg__StartStopTask__fini(mav_state_machine_msgs__msg__StartStopTask * msg);

/// Create msg/StartStopTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mav_state_machine_msgs__msg__StartStopTask__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
mav_state_machine_msgs__msg__StartStopTask *
mav_state_machine_msgs__msg__StartStopTask__create();

/// Destroy msg/StartStopTask message.
/**
 * It calls
 * mav_state_machine_msgs__msg__StartStopTask__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
void
mav_state_machine_msgs__msg__StartStopTask__destroy(mav_state_machine_msgs__msg__StartStopTask * msg);

/// Check for msg/StartStopTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
bool
mav_state_machine_msgs__msg__StartStopTask__are_equal(const mav_state_machine_msgs__msg__StartStopTask * lhs, const mav_state_machine_msgs__msg__StartStopTask * rhs);

/// Copy a msg/StartStopTask message.
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
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
bool
mav_state_machine_msgs__msg__StartStopTask__copy(
  const mav_state_machine_msgs__msg__StartStopTask * input,
  mav_state_machine_msgs__msg__StartStopTask * output);

/// Initialize array of msg/StartStopTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * mav_state_machine_msgs__msg__StartStopTask__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
bool
mav_state_machine_msgs__msg__StartStopTask__Sequence__init(mav_state_machine_msgs__msg__StartStopTask__Sequence * array, size_t size);

/// Finalize array of msg/StartStopTask messages.
/**
 * It calls
 * mav_state_machine_msgs__msg__StartStopTask__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
void
mav_state_machine_msgs__msg__StartStopTask__Sequence__fini(mav_state_machine_msgs__msg__StartStopTask__Sequence * array);

/// Create array of msg/StartStopTask messages.
/**
 * It allocates the memory for the array and calls
 * mav_state_machine_msgs__msg__StartStopTask__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
mav_state_machine_msgs__msg__StartStopTask__Sequence *
mav_state_machine_msgs__msg__StartStopTask__Sequence__create(size_t size);

/// Destroy array of msg/StartStopTask messages.
/**
 * It calls
 * mav_state_machine_msgs__msg__StartStopTask__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
void
mav_state_machine_msgs__msg__StartStopTask__Sequence__destroy(mav_state_machine_msgs__msg__StartStopTask__Sequence * array);

/// Check for msg/StartStopTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
bool
mav_state_machine_msgs__msg__StartStopTask__Sequence__are_equal(const mav_state_machine_msgs__msg__StartStopTask__Sequence * lhs, const mav_state_machine_msgs__msg__StartStopTask__Sequence * rhs);

/// Copy an array of msg/StartStopTask messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
bool
mav_state_machine_msgs__msg__StartStopTask__Sequence__copy(
  const mav_state_machine_msgs__msg__StartStopTask__Sequence * input,
  mav_state_machine_msgs__msg__StartStopTask__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MAV_STATE_MACHINE_MSGS__MSG__DETAIL__START_STOP_TASK__FUNCTIONS_H_
