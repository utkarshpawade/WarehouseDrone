// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from swift_msgs:msg/SwiftMsgs.idl
// generated code does not contain a copyright notice
#include "swift_msgs/msg/detail/swift_msgs__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
swift_msgs__msg__SwiftMsgs__init(swift_msgs__msg__SwiftMsgs * msg)
{
  if (!msg) {
    return false;
  }
  // rc_roll
  // rc_pitch
  // rc_yaw
  // rc_throttle
  // rc_aux1
  // rc_aux2
  // rc_aux3
  // rc_aux4
  // drone_index
  return true;
}

void
swift_msgs__msg__SwiftMsgs__fini(swift_msgs__msg__SwiftMsgs * msg)
{
  if (!msg) {
    return;
  }
  // rc_roll
  // rc_pitch
  // rc_yaw
  // rc_throttle
  // rc_aux1
  // rc_aux2
  // rc_aux3
  // rc_aux4
  // drone_index
}

bool
swift_msgs__msg__SwiftMsgs__are_equal(const swift_msgs__msg__SwiftMsgs * lhs, const swift_msgs__msg__SwiftMsgs * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rc_roll
  if (lhs->rc_roll != rhs->rc_roll) {
    return false;
  }
  // rc_pitch
  if (lhs->rc_pitch != rhs->rc_pitch) {
    return false;
  }
  // rc_yaw
  if (lhs->rc_yaw != rhs->rc_yaw) {
    return false;
  }
  // rc_throttle
  if (lhs->rc_throttle != rhs->rc_throttle) {
    return false;
  }
  // rc_aux1
  if (lhs->rc_aux1 != rhs->rc_aux1) {
    return false;
  }
  // rc_aux2
  if (lhs->rc_aux2 != rhs->rc_aux2) {
    return false;
  }
  // rc_aux3
  if (lhs->rc_aux3 != rhs->rc_aux3) {
    return false;
  }
  // rc_aux4
  if (lhs->rc_aux4 != rhs->rc_aux4) {
    return false;
  }
  // drone_index
  if (lhs->drone_index != rhs->drone_index) {
    return false;
  }
  return true;
}

bool
swift_msgs__msg__SwiftMsgs__copy(
  const swift_msgs__msg__SwiftMsgs * input,
  swift_msgs__msg__SwiftMsgs * output)
{
  if (!input || !output) {
    return false;
  }
  // rc_roll
  output->rc_roll = input->rc_roll;
  // rc_pitch
  output->rc_pitch = input->rc_pitch;
  // rc_yaw
  output->rc_yaw = input->rc_yaw;
  // rc_throttle
  output->rc_throttle = input->rc_throttle;
  // rc_aux1
  output->rc_aux1 = input->rc_aux1;
  // rc_aux2
  output->rc_aux2 = input->rc_aux2;
  // rc_aux3
  output->rc_aux3 = input->rc_aux3;
  // rc_aux4
  output->rc_aux4 = input->rc_aux4;
  // drone_index
  output->drone_index = input->drone_index;
  return true;
}

swift_msgs__msg__SwiftMsgs *
swift_msgs__msg__SwiftMsgs__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swift_msgs__msg__SwiftMsgs * msg = (swift_msgs__msg__SwiftMsgs *)allocator.allocate(sizeof(swift_msgs__msg__SwiftMsgs), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swift_msgs__msg__SwiftMsgs));
  bool success = swift_msgs__msg__SwiftMsgs__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swift_msgs__msg__SwiftMsgs__destroy(swift_msgs__msg__SwiftMsgs * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swift_msgs__msg__SwiftMsgs__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swift_msgs__msg__SwiftMsgs__Sequence__init(swift_msgs__msg__SwiftMsgs__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swift_msgs__msg__SwiftMsgs * data = NULL;

  if (size) {
    data = (swift_msgs__msg__SwiftMsgs *)allocator.zero_allocate(size, sizeof(swift_msgs__msg__SwiftMsgs), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swift_msgs__msg__SwiftMsgs__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swift_msgs__msg__SwiftMsgs__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
swift_msgs__msg__SwiftMsgs__Sequence__fini(swift_msgs__msg__SwiftMsgs__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      swift_msgs__msg__SwiftMsgs__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

swift_msgs__msg__SwiftMsgs__Sequence *
swift_msgs__msg__SwiftMsgs__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swift_msgs__msg__SwiftMsgs__Sequence * array = (swift_msgs__msg__SwiftMsgs__Sequence *)allocator.allocate(sizeof(swift_msgs__msg__SwiftMsgs__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swift_msgs__msg__SwiftMsgs__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swift_msgs__msg__SwiftMsgs__Sequence__destroy(swift_msgs__msg__SwiftMsgs__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swift_msgs__msg__SwiftMsgs__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swift_msgs__msg__SwiftMsgs__Sequence__are_equal(const swift_msgs__msg__SwiftMsgs__Sequence * lhs, const swift_msgs__msg__SwiftMsgs__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swift_msgs__msg__SwiftMsgs__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swift_msgs__msg__SwiftMsgs__Sequence__copy(
  const swift_msgs__msg__SwiftMsgs__Sequence * input,
  swift_msgs__msg__SwiftMsgs__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(swift_msgs__msg__SwiftMsgs);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swift_msgs__msg__SwiftMsgs * data =
      (swift_msgs__msg__SwiftMsgs *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swift_msgs__msg__SwiftMsgs__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swift_msgs__msg__SwiftMsgs__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swift_msgs__msg__SwiftMsgs__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
