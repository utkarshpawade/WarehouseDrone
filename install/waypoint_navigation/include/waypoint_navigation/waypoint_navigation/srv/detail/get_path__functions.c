// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from waypoint_navigation:srv/GetPath.idl
// generated code does not contain a copyright notice
#include "waypoint_navigation/srv/detail/get_path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `start_point`
// Member `end_point`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
waypoint_navigation__srv__GetPath_Request__init(waypoint_navigation__srv__GetPath_Request * msg)
{
  if (!msg) {
    return false;
  }
  // start_point
  if (!geometry_msgs__msg__Pose__init(&msg->start_point)) {
    waypoint_navigation__srv__GetPath_Request__fini(msg);
    return false;
  }
  // end_point
  if (!geometry_msgs__msg__Pose__init(&msg->end_point)) {
    waypoint_navigation__srv__GetPath_Request__fini(msg);
    return false;
  }
  return true;
}

void
waypoint_navigation__srv__GetPath_Request__fini(waypoint_navigation__srv__GetPath_Request * msg)
{
  if (!msg) {
    return;
  }
  // start_point
  geometry_msgs__msg__Pose__fini(&msg->start_point);
  // end_point
  geometry_msgs__msg__Pose__fini(&msg->end_point);
}

bool
waypoint_navigation__srv__GetPath_Request__are_equal(const waypoint_navigation__srv__GetPath_Request * lhs, const waypoint_navigation__srv__GetPath_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start_point
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->start_point), &(rhs->start_point)))
  {
    return false;
  }
  // end_point
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->end_point), &(rhs->end_point)))
  {
    return false;
  }
  return true;
}

bool
waypoint_navigation__srv__GetPath_Request__copy(
  const waypoint_navigation__srv__GetPath_Request * input,
  waypoint_navigation__srv__GetPath_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // start_point
  if (!geometry_msgs__msg__Pose__copy(
      &(input->start_point), &(output->start_point)))
  {
    return false;
  }
  // end_point
  if (!geometry_msgs__msg__Pose__copy(
      &(input->end_point), &(output->end_point)))
  {
    return false;
  }
  return true;
}

waypoint_navigation__srv__GetPath_Request *
waypoint_navigation__srv__GetPath_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__srv__GetPath_Request * msg = (waypoint_navigation__srv__GetPath_Request *)allocator.allocate(sizeof(waypoint_navigation__srv__GetPath_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(waypoint_navigation__srv__GetPath_Request));
  bool success = waypoint_navigation__srv__GetPath_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
waypoint_navigation__srv__GetPath_Request__destroy(waypoint_navigation__srv__GetPath_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    waypoint_navigation__srv__GetPath_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
waypoint_navigation__srv__GetPath_Request__Sequence__init(waypoint_navigation__srv__GetPath_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__srv__GetPath_Request * data = NULL;

  if (size) {
    data = (waypoint_navigation__srv__GetPath_Request *)allocator.zero_allocate(size, sizeof(waypoint_navigation__srv__GetPath_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = waypoint_navigation__srv__GetPath_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        waypoint_navigation__srv__GetPath_Request__fini(&data[i - 1]);
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
waypoint_navigation__srv__GetPath_Request__Sequence__fini(waypoint_navigation__srv__GetPath_Request__Sequence * array)
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
      waypoint_navigation__srv__GetPath_Request__fini(&array->data[i]);
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

waypoint_navigation__srv__GetPath_Request__Sequence *
waypoint_navigation__srv__GetPath_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__srv__GetPath_Request__Sequence * array = (waypoint_navigation__srv__GetPath_Request__Sequence *)allocator.allocate(sizeof(waypoint_navigation__srv__GetPath_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = waypoint_navigation__srv__GetPath_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
waypoint_navigation__srv__GetPath_Request__Sequence__destroy(waypoint_navigation__srv__GetPath_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    waypoint_navigation__srv__GetPath_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
waypoint_navigation__srv__GetPath_Request__Sequence__are_equal(const waypoint_navigation__srv__GetPath_Request__Sequence * lhs, const waypoint_navigation__srv__GetPath_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!waypoint_navigation__srv__GetPath_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
waypoint_navigation__srv__GetPath_Request__Sequence__copy(
  const waypoint_navigation__srv__GetPath_Request__Sequence * input,
  waypoint_navigation__srv__GetPath_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(waypoint_navigation__srv__GetPath_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    waypoint_navigation__srv__GetPath_Request * data =
      (waypoint_navigation__srv__GetPath_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!waypoint_navigation__srv__GetPath_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          waypoint_navigation__srv__GetPath_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!waypoint_navigation__srv__GetPath_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `path`
#include "geometry_msgs/msg/detail/pose_array__functions.h"

bool
waypoint_navigation__srv__GetPath_Response__init(waypoint_navigation__srv__GetPath_Response * msg)
{
  if (!msg) {
    return false;
  }
  // path
  if (!geometry_msgs__msg__PoseArray__init(&msg->path)) {
    waypoint_navigation__srv__GetPath_Response__fini(msg);
    return false;
  }
  // is_on_first_path
  return true;
}

void
waypoint_navigation__srv__GetPath_Response__fini(waypoint_navigation__srv__GetPath_Response * msg)
{
  if (!msg) {
    return;
  }
  // path
  geometry_msgs__msg__PoseArray__fini(&msg->path);
  // is_on_first_path
}

bool
waypoint_navigation__srv__GetPath_Response__are_equal(const waypoint_navigation__srv__GetPath_Response * lhs, const waypoint_navigation__srv__GetPath_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // path
  if (!geometry_msgs__msg__PoseArray__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  // is_on_first_path
  if (lhs->is_on_first_path != rhs->is_on_first_path) {
    return false;
  }
  return true;
}

bool
waypoint_navigation__srv__GetPath_Response__copy(
  const waypoint_navigation__srv__GetPath_Response * input,
  waypoint_navigation__srv__GetPath_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // path
  if (!geometry_msgs__msg__PoseArray__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  // is_on_first_path
  output->is_on_first_path = input->is_on_first_path;
  return true;
}

waypoint_navigation__srv__GetPath_Response *
waypoint_navigation__srv__GetPath_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__srv__GetPath_Response * msg = (waypoint_navigation__srv__GetPath_Response *)allocator.allocate(sizeof(waypoint_navigation__srv__GetPath_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(waypoint_navigation__srv__GetPath_Response));
  bool success = waypoint_navigation__srv__GetPath_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
waypoint_navigation__srv__GetPath_Response__destroy(waypoint_navigation__srv__GetPath_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    waypoint_navigation__srv__GetPath_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
waypoint_navigation__srv__GetPath_Response__Sequence__init(waypoint_navigation__srv__GetPath_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__srv__GetPath_Response * data = NULL;

  if (size) {
    data = (waypoint_navigation__srv__GetPath_Response *)allocator.zero_allocate(size, sizeof(waypoint_navigation__srv__GetPath_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = waypoint_navigation__srv__GetPath_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        waypoint_navigation__srv__GetPath_Response__fini(&data[i - 1]);
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
waypoint_navigation__srv__GetPath_Response__Sequence__fini(waypoint_navigation__srv__GetPath_Response__Sequence * array)
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
      waypoint_navigation__srv__GetPath_Response__fini(&array->data[i]);
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

waypoint_navigation__srv__GetPath_Response__Sequence *
waypoint_navigation__srv__GetPath_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__srv__GetPath_Response__Sequence * array = (waypoint_navigation__srv__GetPath_Response__Sequence *)allocator.allocate(sizeof(waypoint_navigation__srv__GetPath_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = waypoint_navigation__srv__GetPath_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
waypoint_navigation__srv__GetPath_Response__Sequence__destroy(waypoint_navigation__srv__GetPath_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    waypoint_navigation__srv__GetPath_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
waypoint_navigation__srv__GetPath_Response__Sequence__are_equal(const waypoint_navigation__srv__GetPath_Response__Sequence * lhs, const waypoint_navigation__srv__GetPath_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!waypoint_navigation__srv__GetPath_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
waypoint_navigation__srv__GetPath_Response__Sequence__copy(
  const waypoint_navigation__srv__GetPath_Response__Sequence * input,
  waypoint_navigation__srv__GetPath_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(waypoint_navigation__srv__GetPath_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    waypoint_navigation__srv__GetPath_Response * data =
      (waypoint_navigation__srv__GetPath_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!waypoint_navigation__srv__GetPath_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          waypoint_navigation__srv__GetPath_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!waypoint_navigation__srv__GetPath_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
