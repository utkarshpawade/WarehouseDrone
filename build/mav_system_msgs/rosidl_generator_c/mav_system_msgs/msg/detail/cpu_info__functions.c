// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mav_system_msgs:msg/CpuInfo.idl
// generated code does not contain a copyright notice
#include "mav_system_msgs/msg/detail/cpu_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `cpu_percent`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `heaviest_processes`
#include "mav_system_msgs/msg/detail/process_info__functions.h"

bool
mav_system_msgs__msg__CpuInfo__init(mav_system_msgs__msg__CpuInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mav_system_msgs__msg__CpuInfo__fini(msg);
    return false;
  }
  // cpu_percent
  if (!rosidl_runtime_c__float__Sequence__init(&msg->cpu_percent, 0)) {
    mav_system_msgs__msg__CpuInfo__fini(msg);
    return false;
  }
  // heaviest_processes
  if (!mav_system_msgs__msg__ProcessInfo__Sequence__init(&msg->heaviest_processes, 0)) {
    mav_system_msgs__msg__CpuInfo__fini(msg);
    return false;
  }
  return true;
}

void
mav_system_msgs__msg__CpuInfo__fini(mav_system_msgs__msg__CpuInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // cpu_percent
  rosidl_runtime_c__float__Sequence__fini(&msg->cpu_percent);
  // heaviest_processes
  mav_system_msgs__msg__ProcessInfo__Sequence__fini(&msg->heaviest_processes);
}

bool
mav_system_msgs__msg__CpuInfo__are_equal(const mav_system_msgs__msg__CpuInfo * lhs, const mav_system_msgs__msg__CpuInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // cpu_percent
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->cpu_percent), &(rhs->cpu_percent)))
  {
    return false;
  }
  // heaviest_processes
  if (!mav_system_msgs__msg__ProcessInfo__Sequence__are_equal(
      &(lhs->heaviest_processes), &(rhs->heaviest_processes)))
  {
    return false;
  }
  return true;
}

bool
mav_system_msgs__msg__CpuInfo__copy(
  const mav_system_msgs__msg__CpuInfo * input,
  mav_system_msgs__msg__CpuInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // cpu_percent
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->cpu_percent), &(output->cpu_percent)))
  {
    return false;
  }
  // heaviest_processes
  if (!mav_system_msgs__msg__ProcessInfo__Sequence__copy(
      &(input->heaviest_processes), &(output->heaviest_processes)))
  {
    return false;
  }
  return true;
}

mav_system_msgs__msg__CpuInfo *
mav_system_msgs__msg__CpuInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mav_system_msgs__msg__CpuInfo * msg = (mav_system_msgs__msg__CpuInfo *)allocator.allocate(sizeof(mav_system_msgs__msg__CpuInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mav_system_msgs__msg__CpuInfo));
  bool success = mav_system_msgs__msg__CpuInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mav_system_msgs__msg__CpuInfo__destroy(mav_system_msgs__msg__CpuInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mav_system_msgs__msg__CpuInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mav_system_msgs__msg__CpuInfo__Sequence__init(mav_system_msgs__msg__CpuInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mav_system_msgs__msg__CpuInfo * data = NULL;

  if (size) {
    data = (mav_system_msgs__msg__CpuInfo *)allocator.zero_allocate(size, sizeof(mav_system_msgs__msg__CpuInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mav_system_msgs__msg__CpuInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mav_system_msgs__msg__CpuInfo__fini(&data[i - 1]);
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
mav_system_msgs__msg__CpuInfo__Sequence__fini(mav_system_msgs__msg__CpuInfo__Sequence * array)
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
      mav_system_msgs__msg__CpuInfo__fini(&array->data[i]);
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

mav_system_msgs__msg__CpuInfo__Sequence *
mav_system_msgs__msg__CpuInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mav_system_msgs__msg__CpuInfo__Sequence * array = (mav_system_msgs__msg__CpuInfo__Sequence *)allocator.allocate(sizeof(mav_system_msgs__msg__CpuInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mav_system_msgs__msg__CpuInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mav_system_msgs__msg__CpuInfo__Sequence__destroy(mav_system_msgs__msg__CpuInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mav_system_msgs__msg__CpuInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mav_system_msgs__msg__CpuInfo__Sequence__are_equal(const mav_system_msgs__msg__CpuInfo__Sequence * lhs, const mav_system_msgs__msg__CpuInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mav_system_msgs__msg__CpuInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mav_system_msgs__msg__CpuInfo__Sequence__copy(
  const mav_system_msgs__msg__CpuInfo__Sequence * input,
  mav_system_msgs__msg__CpuInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mav_system_msgs__msg__CpuInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mav_system_msgs__msg__CpuInfo * data =
      (mav_system_msgs__msg__CpuInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mav_system_msgs__msg__CpuInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mav_system_msgs__msg__CpuInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mav_system_msgs__msg__CpuInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
