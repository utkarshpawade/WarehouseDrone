// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mav_system_msgs:msg/ProcessInfo.idl
// generated code does not contain a copyright notice
#include "mav_system_msgs/msg/detail/process_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `username`
#include "rosidl_runtime_c/string_functions.h"

bool
mav_system_msgs__msg__ProcessInfo__init(mav_system_msgs__msg__ProcessInfo * msg)
{
  if (!msg) {
    return false;
  }
  // pid
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    mav_system_msgs__msg__ProcessInfo__fini(msg);
    return false;
  }
  // username
  if (!rosidl_runtime_c__String__init(&msg->username)) {
    mav_system_msgs__msg__ProcessInfo__fini(msg);
    return false;
  }
  // cpu_percent
  return true;
}

void
mav_system_msgs__msg__ProcessInfo__fini(mav_system_msgs__msg__ProcessInfo * msg)
{
  if (!msg) {
    return;
  }
  // pid
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // username
  rosidl_runtime_c__String__fini(&msg->username);
  // cpu_percent
}

bool
mav_system_msgs__msg__ProcessInfo__are_equal(const mav_system_msgs__msg__ProcessInfo * lhs, const mav_system_msgs__msg__ProcessInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pid
  if (lhs->pid != rhs->pid) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // username
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->username), &(rhs->username)))
  {
    return false;
  }
  // cpu_percent
  if (lhs->cpu_percent != rhs->cpu_percent) {
    return false;
  }
  return true;
}

bool
mav_system_msgs__msg__ProcessInfo__copy(
  const mav_system_msgs__msg__ProcessInfo * input,
  mav_system_msgs__msg__ProcessInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // pid
  output->pid = input->pid;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // username
  if (!rosidl_runtime_c__String__copy(
      &(input->username), &(output->username)))
  {
    return false;
  }
  // cpu_percent
  output->cpu_percent = input->cpu_percent;
  return true;
}

mav_system_msgs__msg__ProcessInfo *
mav_system_msgs__msg__ProcessInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mav_system_msgs__msg__ProcessInfo * msg = (mav_system_msgs__msg__ProcessInfo *)allocator.allocate(sizeof(mav_system_msgs__msg__ProcessInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mav_system_msgs__msg__ProcessInfo));
  bool success = mav_system_msgs__msg__ProcessInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mav_system_msgs__msg__ProcessInfo__destroy(mav_system_msgs__msg__ProcessInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mav_system_msgs__msg__ProcessInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mav_system_msgs__msg__ProcessInfo__Sequence__init(mav_system_msgs__msg__ProcessInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mav_system_msgs__msg__ProcessInfo * data = NULL;

  if (size) {
    data = (mav_system_msgs__msg__ProcessInfo *)allocator.zero_allocate(size, sizeof(mav_system_msgs__msg__ProcessInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mav_system_msgs__msg__ProcessInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mav_system_msgs__msg__ProcessInfo__fini(&data[i - 1]);
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
mav_system_msgs__msg__ProcessInfo__Sequence__fini(mav_system_msgs__msg__ProcessInfo__Sequence * array)
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
      mav_system_msgs__msg__ProcessInfo__fini(&array->data[i]);
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

mav_system_msgs__msg__ProcessInfo__Sequence *
mav_system_msgs__msg__ProcessInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mav_system_msgs__msg__ProcessInfo__Sequence * array = (mav_system_msgs__msg__ProcessInfo__Sequence *)allocator.allocate(sizeof(mav_system_msgs__msg__ProcessInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mav_system_msgs__msg__ProcessInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mav_system_msgs__msg__ProcessInfo__Sequence__destroy(mav_system_msgs__msg__ProcessInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mav_system_msgs__msg__ProcessInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mav_system_msgs__msg__ProcessInfo__Sequence__are_equal(const mav_system_msgs__msg__ProcessInfo__Sequence * lhs, const mav_system_msgs__msg__ProcessInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mav_system_msgs__msg__ProcessInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mav_system_msgs__msg__ProcessInfo__Sequence__copy(
  const mav_system_msgs__msg__ProcessInfo__Sequence * input,
  mav_system_msgs__msg__ProcessInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mav_system_msgs__msg__ProcessInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mav_system_msgs__msg__ProcessInfo * data =
      (mav_system_msgs__msg__ProcessInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mav_system_msgs__msg__ProcessInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mav_system_msgs__msg__ProcessInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mav_system_msgs__msg__ProcessInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
