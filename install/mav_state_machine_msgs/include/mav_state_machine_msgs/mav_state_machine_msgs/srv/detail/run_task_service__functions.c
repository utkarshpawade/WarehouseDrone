// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mav_state_machine_msgs:srv/RunTaskService.idl
// generated code does not contain a copyright notice
#include "mav_state_machine_msgs/srv/detail/run_task_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `task_name`
#include "rosidl_runtime_c/string_functions.h"

bool
mav_state_machine_msgs__srv__RunTaskService_Request__init(mav_state_machine_msgs__srv__RunTaskService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // task_name
  if (!rosidl_runtime_c__String__init(&msg->task_name)) {
    mav_state_machine_msgs__srv__RunTaskService_Request__fini(msg);
    return false;
  }
  // start
  return true;
}

void
mav_state_machine_msgs__srv__RunTaskService_Request__fini(mav_state_machine_msgs__srv__RunTaskService_Request * msg)
{
  if (!msg) {
    return;
  }
  // task_name
  rosidl_runtime_c__String__fini(&msg->task_name);
  // start
}

bool
mav_state_machine_msgs__srv__RunTaskService_Request__are_equal(const mav_state_machine_msgs__srv__RunTaskService_Request * lhs, const mav_state_machine_msgs__srv__RunTaskService_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // task_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_name), &(rhs->task_name)))
  {
    return false;
  }
  // start
  if (lhs->start != rhs->start) {
    return false;
  }
  return true;
}

bool
mav_state_machine_msgs__srv__RunTaskService_Request__copy(
  const mav_state_machine_msgs__srv__RunTaskService_Request * input,
  mav_state_machine_msgs__srv__RunTaskService_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // task_name
  if (!rosidl_runtime_c__String__copy(
      &(input->task_name), &(output->task_name)))
  {
    return false;
  }
  // start
  output->start = input->start;
  return true;
}

mav_state_machine_msgs__srv__RunTaskService_Request *
mav_state_machine_msgs__srv__RunTaskService_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mav_state_machine_msgs__srv__RunTaskService_Request * msg = (mav_state_machine_msgs__srv__RunTaskService_Request *)allocator.allocate(sizeof(mav_state_machine_msgs__srv__RunTaskService_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mav_state_machine_msgs__srv__RunTaskService_Request));
  bool success = mav_state_machine_msgs__srv__RunTaskService_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mav_state_machine_msgs__srv__RunTaskService_Request__destroy(mav_state_machine_msgs__srv__RunTaskService_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mav_state_machine_msgs__srv__RunTaskService_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mav_state_machine_msgs__srv__RunTaskService_Request__Sequence__init(mav_state_machine_msgs__srv__RunTaskService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mav_state_machine_msgs__srv__RunTaskService_Request * data = NULL;

  if (size) {
    data = (mav_state_machine_msgs__srv__RunTaskService_Request *)allocator.zero_allocate(size, sizeof(mav_state_machine_msgs__srv__RunTaskService_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mav_state_machine_msgs__srv__RunTaskService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mav_state_machine_msgs__srv__RunTaskService_Request__fini(&data[i - 1]);
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
mav_state_machine_msgs__srv__RunTaskService_Request__Sequence__fini(mav_state_machine_msgs__srv__RunTaskService_Request__Sequence * array)
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
      mav_state_machine_msgs__srv__RunTaskService_Request__fini(&array->data[i]);
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

mav_state_machine_msgs__srv__RunTaskService_Request__Sequence *
mav_state_machine_msgs__srv__RunTaskService_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mav_state_machine_msgs__srv__RunTaskService_Request__Sequence * array = (mav_state_machine_msgs__srv__RunTaskService_Request__Sequence *)allocator.allocate(sizeof(mav_state_machine_msgs__srv__RunTaskService_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mav_state_machine_msgs__srv__RunTaskService_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mav_state_machine_msgs__srv__RunTaskService_Request__Sequence__destroy(mav_state_machine_msgs__srv__RunTaskService_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mav_state_machine_msgs__srv__RunTaskService_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mav_state_machine_msgs__srv__RunTaskService_Request__Sequence__are_equal(const mav_state_machine_msgs__srv__RunTaskService_Request__Sequence * lhs, const mav_state_machine_msgs__srv__RunTaskService_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mav_state_machine_msgs__srv__RunTaskService_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mav_state_machine_msgs__srv__RunTaskService_Request__Sequence__copy(
  const mav_state_machine_msgs__srv__RunTaskService_Request__Sequence * input,
  mav_state_machine_msgs__srv__RunTaskService_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mav_state_machine_msgs__srv__RunTaskService_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mav_state_machine_msgs__srv__RunTaskService_Request * data =
      (mav_state_machine_msgs__srv__RunTaskService_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mav_state_machine_msgs__srv__RunTaskService_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mav_state_machine_msgs__srv__RunTaskService_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mav_state_machine_msgs__srv__RunTaskService_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
mav_state_machine_msgs__srv__RunTaskService_Response__init(mav_state_machine_msgs__srv__RunTaskService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
mav_state_machine_msgs__srv__RunTaskService_Response__fini(mav_state_machine_msgs__srv__RunTaskService_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
mav_state_machine_msgs__srv__RunTaskService_Response__are_equal(const mav_state_machine_msgs__srv__RunTaskService_Response * lhs, const mav_state_machine_msgs__srv__RunTaskService_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
mav_state_machine_msgs__srv__RunTaskService_Response__copy(
  const mav_state_machine_msgs__srv__RunTaskService_Response * input,
  mav_state_machine_msgs__srv__RunTaskService_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

mav_state_machine_msgs__srv__RunTaskService_Response *
mav_state_machine_msgs__srv__RunTaskService_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mav_state_machine_msgs__srv__RunTaskService_Response * msg = (mav_state_machine_msgs__srv__RunTaskService_Response *)allocator.allocate(sizeof(mav_state_machine_msgs__srv__RunTaskService_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mav_state_machine_msgs__srv__RunTaskService_Response));
  bool success = mav_state_machine_msgs__srv__RunTaskService_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mav_state_machine_msgs__srv__RunTaskService_Response__destroy(mav_state_machine_msgs__srv__RunTaskService_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mav_state_machine_msgs__srv__RunTaskService_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mav_state_machine_msgs__srv__RunTaskService_Response__Sequence__init(mav_state_machine_msgs__srv__RunTaskService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mav_state_machine_msgs__srv__RunTaskService_Response * data = NULL;

  if (size) {
    data = (mav_state_machine_msgs__srv__RunTaskService_Response *)allocator.zero_allocate(size, sizeof(mav_state_machine_msgs__srv__RunTaskService_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mav_state_machine_msgs__srv__RunTaskService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mav_state_machine_msgs__srv__RunTaskService_Response__fini(&data[i - 1]);
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
mav_state_machine_msgs__srv__RunTaskService_Response__Sequence__fini(mav_state_machine_msgs__srv__RunTaskService_Response__Sequence * array)
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
      mav_state_machine_msgs__srv__RunTaskService_Response__fini(&array->data[i]);
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

mav_state_machine_msgs__srv__RunTaskService_Response__Sequence *
mav_state_machine_msgs__srv__RunTaskService_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mav_state_machine_msgs__srv__RunTaskService_Response__Sequence * array = (mav_state_machine_msgs__srv__RunTaskService_Response__Sequence *)allocator.allocate(sizeof(mav_state_machine_msgs__srv__RunTaskService_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mav_state_machine_msgs__srv__RunTaskService_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mav_state_machine_msgs__srv__RunTaskService_Response__Sequence__destroy(mav_state_machine_msgs__srv__RunTaskService_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mav_state_machine_msgs__srv__RunTaskService_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mav_state_machine_msgs__srv__RunTaskService_Response__Sequence__are_equal(const mav_state_machine_msgs__srv__RunTaskService_Response__Sequence * lhs, const mav_state_machine_msgs__srv__RunTaskService_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mav_state_machine_msgs__srv__RunTaskService_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mav_state_machine_msgs__srv__RunTaskService_Response__Sequence__copy(
  const mav_state_machine_msgs__srv__RunTaskService_Response__Sequence * input,
  mav_state_machine_msgs__srv__RunTaskService_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mav_state_machine_msgs__srv__RunTaskService_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mav_state_machine_msgs__srv__RunTaskService_Response * data =
      (mav_state_machine_msgs__srv__RunTaskService_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mav_state_machine_msgs__srv__RunTaskService_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mav_state_machine_msgs__srv__RunTaskService_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mav_state_machine_msgs__srv__RunTaskService_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
