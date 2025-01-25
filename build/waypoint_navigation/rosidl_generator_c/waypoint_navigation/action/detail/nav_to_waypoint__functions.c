// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from waypoint_navigation:action/NavToWaypoint.idl
// generated code does not contain a copyright notice
#include "waypoint_navigation/action/detail/nav_to_waypoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `waypoint`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
waypoint_navigation__action__NavToWaypoint_Goal__init(waypoint_navigation__action__NavToWaypoint_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // waypoint
  if (!geometry_msgs__msg__Pose__init(&msg->waypoint)) {
    waypoint_navigation__action__NavToWaypoint_Goal__fini(msg);
    return false;
  }
  return true;
}

void
waypoint_navigation__action__NavToWaypoint_Goal__fini(waypoint_navigation__action__NavToWaypoint_Goal * msg)
{
  if (!msg) {
    return;
  }
  // waypoint
  geometry_msgs__msg__Pose__fini(&msg->waypoint);
}

bool
waypoint_navigation__action__NavToWaypoint_Goal__are_equal(const waypoint_navigation__action__NavToWaypoint_Goal * lhs, const waypoint_navigation__action__NavToWaypoint_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // waypoint
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->waypoint), &(rhs->waypoint)))
  {
    return false;
  }
  return true;
}

bool
waypoint_navigation__action__NavToWaypoint_Goal__copy(
  const waypoint_navigation__action__NavToWaypoint_Goal * input,
  waypoint_navigation__action__NavToWaypoint_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // waypoint
  if (!geometry_msgs__msg__Pose__copy(
      &(input->waypoint), &(output->waypoint)))
  {
    return false;
  }
  return true;
}

waypoint_navigation__action__NavToWaypoint_Goal *
waypoint_navigation__action__NavToWaypoint_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__action__NavToWaypoint_Goal * msg = (waypoint_navigation__action__NavToWaypoint_Goal *)allocator.allocate(sizeof(waypoint_navigation__action__NavToWaypoint_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(waypoint_navigation__action__NavToWaypoint_Goal));
  bool success = waypoint_navigation__action__NavToWaypoint_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
waypoint_navigation__action__NavToWaypoint_Goal__destroy(waypoint_navigation__action__NavToWaypoint_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    waypoint_navigation__action__NavToWaypoint_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
waypoint_navigation__action__NavToWaypoint_Goal__Sequence__init(waypoint_navigation__action__NavToWaypoint_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__action__NavToWaypoint_Goal * data = NULL;

  if (size) {
    data = (waypoint_navigation__action__NavToWaypoint_Goal *)allocator.zero_allocate(size, sizeof(waypoint_navigation__action__NavToWaypoint_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = waypoint_navigation__action__NavToWaypoint_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        waypoint_navigation__action__NavToWaypoint_Goal__fini(&data[i - 1]);
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
waypoint_navigation__action__NavToWaypoint_Goal__Sequence__fini(waypoint_navigation__action__NavToWaypoint_Goal__Sequence * array)
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
      waypoint_navigation__action__NavToWaypoint_Goal__fini(&array->data[i]);
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

waypoint_navigation__action__NavToWaypoint_Goal__Sequence *
waypoint_navigation__action__NavToWaypoint_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__action__NavToWaypoint_Goal__Sequence * array = (waypoint_navigation__action__NavToWaypoint_Goal__Sequence *)allocator.allocate(sizeof(waypoint_navigation__action__NavToWaypoint_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = waypoint_navigation__action__NavToWaypoint_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
waypoint_navigation__action__NavToWaypoint_Goal__Sequence__destroy(waypoint_navigation__action__NavToWaypoint_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    waypoint_navigation__action__NavToWaypoint_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
waypoint_navigation__action__NavToWaypoint_Goal__Sequence__are_equal(const waypoint_navigation__action__NavToWaypoint_Goal__Sequence * lhs, const waypoint_navigation__action__NavToWaypoint_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!waypoint_navigation__action__NavToWaypoint_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
waypoint_navigation__action__NavToWaypoint_Goal__Sequence__copy(
  const waypoint_navigation__action__NavToWaypoint_Goal__Sequence * input,
  waypoint_navigation__action__NavToWaypoint_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(waypoint_navigation__action__NavToWaypoint_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    waypoint_navigation__action__NavToWaypoint_Goal * data =
      (waypoint_navigation__action__NavToWaypoint_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!waypoint_navigation__action__NavToWaypoint_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          waypoint_navigation__action__NavToWaypoint_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!waypoint_navigation__action__NavToWaypoint_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
waypoint_navigation__action__NavToWaypoint_Result__init(waypoint_navigation__action__NavToWaypoint_Result * msg)
{
  if (!msg) {
    return false;
  }
  // hov_time
  return true;
}

void
waypoint_navigation__action__NavToWaypoint_Result__fini(waypoint_navigation__action__NavToWaypoint_Result * msg)
{
  if (!msg) {
    return;
  }
  // hov_time
}

bool
waypoint_navigation__action__NavToWaypoint_Result__are_equal(const waypoint_navigation__action__NavToWaypoint_Result * lhs, const waypoint_navigation__action__NavToWaypoint_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // hov_time
  if (lhs->hov_time != rhs->hov_time) {
    return false;
  }
  return true;
}

bool
waypoint_navigation__action__NavToWaypoint_Result__copy(
  const waypoint_navigation__action__NavToWaypoint_Result * input,
  waypoint_navigation__action__NavToWaypoint_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // hov_time
  output->hov_time = input->hov_time;
  return true;
}

waypoint_navigation__action__NavToWaypoint_Result *
waypoint_navigation__action__NavToWaypoint_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__action__NavToWaypoint_Result * msg = (waypoint_navigation__action__NavToWaypoint_Result *)allocator.allocate(sizeof(waypoint_navigation__action__NavToWaypoint_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(waypoint_navigation__action__NavToWaypoint_Result));
  bool success = waypoint_navigation__action__NavToWaypoint_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
waypoint_navigation__action__NavToWaypoint_Result__destroy(waypoint_navigation__action__NavToWaypoint_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    waypoint_navigation__action__NavToWaypoint_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
waypoint_navigation__action__NavToWaypoint_Result__Sequence__init(waypoint_navigation__action__NavToWaypoint_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__action__NavToWaypoint_Result * data = NULL;

  if (size) {
    data = (waypoint_navigation__action__NavToWaypoint_Result *)allocator.zero_allocate(size, sizeof(waypoint_navigation__action__NavToWaypoint_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = waypoint_navigation__action__NavToWaypoint_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        waypoint_navigation__action__NavToWaypoint_Result__fini(&data[i - 1]);
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
waypoint_navigation__action__NavToWaypoint_Result__Sequence__fini(waypoint_navigation__action__NavToWaypoint_Result__Sequence * array)
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
      waypoint_navigation__action__NavToWaypoint_Result__fini(&array->data[i]);
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

waypoint_navigation__action__NavToWaypoint_Result__Sequence *
waypoint_navigation__action__NavToWaypoint_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__action__NavToWaypoint_Result__Sequence * array = (waypoint_navigation__action__NavToWaypoint_Result__Sequence *)allocator.allocate(sizeof(waypoint_navigation__action__NavToWaypoint_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = waypoint_navigation__action__NavToWaypoint_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
waypoint_navigation__action__NavToWaypoint_Result__Sequence__destroy(waypoint_navigation__action__NavToWaypoint_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    waypoint_navigation__action__NavToWaypoint_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
waypoint_navigation__action__NavToWaypoint_Result__Sequence__are_equal(const waypoint_navigation__action__NavToWaypoint_Result__Sequence * lhs, const waypoint_navigation__action__NavToWaypoint_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!waypoint_navigation__action__NavToWaypoint_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
waypoint_navigation__action__NavToWaypoint_Result__Sequence__copy(
  const waypoint_navigation__action__NavToWaypoint_Result__Sequence * input,
  waypoint_navigation__action__NavToWaypoint_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(waypoint_navigation__action__NavToWaypoint_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    waypoint_navigation__action__NavToWaypoint_Result * data =
      (waypoint_navigation__action__NavToWaypoint_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!waypoint_navigation__action__NavToWaypoint_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          waypoint_navigation__action__NavToWaypoint_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!waypoint_navigation__action__NavToWaypoint_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `current_waypoint`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
waypoint_navigation__action__NavToWaypoint_Feedback__init(waypoint_navigation__action__NavToWaypoint_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_waypoint
  if (!geometry_msgs__msg__PoseStamped__init(&msg->current_waypoint)) {
    waypoint_navigation__action__NavToWaypoint_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
waypoint_navigation__action__NavToWaypoint_Feedback__fini(waypoint_navigation__action__NavToWaypoint_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_waypoint
  geometry_msgs__msg__PoseStamped__fini(&msg->current_waypoint);
}

bool
waypoint_navigation__action__NavToWaypoint_Feedback__are_equal(const waypoint_navigation__action__NavToWaypoint_Feedback * lhs, const waypoint_navigation__action__NavToWaypoint_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_waypoint
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->current_waypoint), &(rhs->current_waypoint)))
  {
    return false;
  }
  return true;
}

bool
waypoint_navigation__action__NavToWaypoint_Feedback__copy(
  const waypoint_navigation__action__NavToWaypoint_Feedback * input,
  waypoint_navigation__action__NavToWaypoint_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_waypoint
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->current_waypoint), &(output->current_waypoint)))
  {
    return false;
  }
  return true;
}

waypoint_navigation__action__NavToWaypoint_Feedback *
waypoint_navigation__action__NavToWaypoint_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__action__NavToWaypoint_Feedback * msg = (waypoint_navigation__action__NavToWaypoint_Feedback *)allocator.allocate(sizeof(waypoint_navigation__action__NavToWaypoint_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(waypoint_navigation__action__NavToWaypoint_Feedback));
  bool success = waypoint_navigation__action__NavToWaypoint_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
waypoint_navigation__action__NavToWaypoint_Feedback__destroy(waypoint_navigation__action__NavToWaypoint_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    waypoint_navigation__action__NavToWaypoint_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
waypoint_navigation__action__NavToWaypoint_Feedback__Sequence__init(waypoint_navigation__action__NavToWaypoint_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__action__NavToWaypoint_Feedback * data = NULL;

  if (size) {
    data = (waypoint_navigation__action__NavToWaypoint_Feedback *)allocator.zero_allocate(size, sizeof(waypoint_navigation__action__NavToWaypoint_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = waypoint_navigation__action__NavToWaypoint_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        waypoint_navigation__action__NavToWaypoint_Feedback__fini(&data[i - 1]);
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
waypoint_navigation__action__NavToWaypoint_Feedback__Sequence__fini(waypoint_navigation__action__NavToWaypoint_Feedback__Sequence * array)
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
      waypoint_navigation__action__NavToWaypoint_Feedback__fini(&array->data[i]);
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

waypoint_navigation__action__NavToWaypoint_Feedback__Sequence *
waypoint_navigation__action__NavToWaypoint_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__action__NavToWaypoint_Feedback__Sequence * array = (waypoint_navigation__action__NavToWaypoint_Feedback__Sequence *)allocator.allocate(sizeof(waypoint_navigation__action__NavToWaypoint_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = waypoint_navigation__action__NavToWaypoint_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
waypoint_navigation__action__NavToWaypoint_Feedback__Sequence__destroy(waypoint_navigation__action__NavToWaypoint_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    waypoint_navigation__action__NavToWaypoint_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
waypoint_navigation__action__NavToWaypoint_Feedback__Sequence__are_equal(const waypoint_navigation__action__NavToWaypoint_Feedback__Sequence * lhs, const waypoint_navigation__action__NavToWaypoint_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!waypoint_navigation__action__NavToWaypoint_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
waypoint_navigation__action__NavToWaypoint_Feedback__Sequence__copy(
  const waypoint_navigation__action__NavToWaypoint_Feedback__Sequence * input,
  waypoint_navigation__action__NavToWaypoint_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(waypoint_navigation__action__NavToWaypoint_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    waypoint_navigation__action__NavToWaypoint_Feedback * data =
      (waypoint_navigation__action__NavToWaypoint_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!waypoint_navigation__action__NavToWaypoint_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          waypoint_navigation__action__NavToWaypoint_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!waypoint_navigation__action__NavToWaypoint_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "waypoint_navigation/action/detail/nav_to_waypoint__functions.h"

bool
waypoint_navigation__action__NavToWaypoint_SendGoal_Request__init(waypoint_navigation__action__NavToWaypoint_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    waypoint_navigation__action__NavToWaypoint_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!waypoint_navigation__action__NavToWaypoint_Goal__init(&msg->goal)) {
    waypoint_navigation__action__NavToWaypoint_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
waypoint_navigation__action__NavToWaypoint_SendGoal_Request__fini(waypoint_navigation__action__NavToWaypoint_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  waypoint_navigation__action__NavToWaypoint_Goal__fini(&msg->goal);
}

bool
waypoint_navigation__action__NavToWaypoint_SendGoal_Request__are_equal(const waypoint_navigation__action__NavToWaypoint_SendGoal_Request * lhs, const waypoint_navigation__action__NavToWaypoint_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!waypoint_navigation__action__NavToWaypoint_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
waypoint_navigation__action__NavToWaypoint_SendGoal_Request__copy(
  const waypoint_navigation__action__NavToWaypoint_SendGoal_Request * input,
  waypoint_navigation__action__NavToWaypoint_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!waypoint_navigation__action__NavToWaypoint_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

waypoint_navigation__action__NavToWaypoint_SendGoal_Request *
waypoint_navigation__action__NavToWaypoint_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__action__NavToWaypoint_SendGoal_Request * msg = (waypoint_navigation__action__NavToWaypoint_SendGoal_Request *)allocator.allocate(sizeof(waypoint_navigation__action__NavToWaypoint_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(waypoint_navigation__action__NavToWaypoint_SendGoal_Request));
  bool success = waypoint_navigation__action__NavToWaypoint_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
waypoint_navigation__action__NavToWaypoint_SendGoal_Request__destroy(waypoint_navigation__action__NavToWaypoint_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    waypoint_navigation__action__NavToWaypoint_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
waypoint_navigation__action__NavToWaypoint_SendGoal_Request__Sequence__init(waypoint_navigation__action__NavToWaypoint_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__action__NavToWaypoint_SendGoal_Request * data = NULL;

  if (size) {
    data = (waypoint_navigation__action__NavToWaypoint_SendGoal_Request *)allocator.zero_allocate(size, sizeof(waypoint_navigation__action__NavToWaypoint_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = waypoint_navigation__action__NavToWaypoint_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        waypoint_navigation__action__NavToWaypoint_SendGoal_Request__fini(&data[i - 1]);
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
waypoint_navigation__action__NavToWaypoint_SendGoal_Request__Sequence__fini(waypoint_navigation__action__NavToWaypoint_SendGoal_Request__Sequence * array)
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
      waypoint_navigation__action__NavToWaypoint_SendGoal_Request__fini(&array->data[i]);
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

waypoint_navigation__action__NavToWaypoint_SendGoal_Request__Sequence *
waypoint_navigation__action__NavToWaypoint_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__action__NavToWaypoint_SendGoal_Request__Sequence * array = (waypoint_navigation__action__NavToWaypoint_SendGoal_Request__Sequence *)allocator.allocate(sizeof(waypoint_navigation__action__NavToWaypoint_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = waypoint_navigation__action__NavToWaypoint_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
waypoint_navigation__action__NavToWaypoint_SendGoal_Request__Sequence__destroy(waypoint_navigation__action__NavToWaypoint_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    waypoint_navigation__action__NavToWaypoint_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
waypoint_navigation__action__NavToWaypoint_SendGoal_Request__Sequence__are_equal(const waypoint_navigation__action__NavToWaypoint_SendGoal_Request__Sequence * lhs, const waypoint_navigation__action__NavToWaypoint_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!waypoint_navigation__action__NavToWaypoint_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
waypoint_navigation__action__NavToWaypoint_SendGoal_Request__Sequence__copy(
  const waypoint_navigation__action__NavToWaypoint_SendGoal_Request__Sequence * input,
  waypoint_navigation__action__NavToWaypoint_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(waypoint_navigation__action__NavToWaypoint_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    waypoint_navigation__action__NavToWaypoint_SendGoal_Request * data =
      (waypoint_navigation__action__NavToWaypoint_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!waypoint_navigation__action__NavToWaypoint_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          waypoint_navigation__action__NavToWaypoint_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!waypoint_navigation__action__NavToWaypoint_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
waypoint_navigation__action__NavToWaypoint_SendGoal_Response__init(waypoint_navigation__action__NavToWaypoint_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    waypoint_navigation__action__NavToWaypoint_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
waypoint_navigation__action__NavToWaypoint_SendGoal_Response__fini(waypoint_navigation__action__NavToWaypoint_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
waypoint_navigation__action__NavToWaypoint_SendGoal_Response__are_equal(const waypoint_navigation__action__NavToWaypoint_SendGoal_Response * lhs, const waypoint_navigation__action__NavToWaypoint_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
waypoint_navigation__action__NavToWaypoint_SendGoal_Response__copy(
  const waypoint_navigation__action__NavToWaypoint_SendGoal_Response * input,
  waypoint_navigation__action__NavToWaypoint_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

waypoint_navigation__action__NavToWaypoint_SendGoal_Response *
waypoint_navigation__action__NavToWaypoint_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__action__NavToWaypoint_SendGoal_Response * msg = (waypoint_navigation__action__NavToWaypoint_SendGoal_Response *)allocator.allocate(sizeof(waypoint_navigation__action__NavToWaypoint_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(waypoint_navigation__action__NavToWaypoint_SendGoal_Response));
  bool success = waypoint_navigation__action__NavToWaypoint_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
waypoint_navigation__action__NavToWaypoint_SendGoal_Response__destroy(waypoint_navigation__action__NavToWaypoint_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    waypoint_navigation__action__NavToWaypoint_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
waypoint_navigation__action__NavToWaypoint_SendGoal_Response__Sequence__init(waypoint_navigation__action__NavToWaypoint_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__action__NavToWaypoint_SendGoal_Response * data = NULL;

  if (size) {
    data = (waypoint_navigation__action__NavToWaypoint_SendGoal_Response *)allocator.zero_allocate(size, sizeof(waypoint_navigation__action__NavToWaypoint_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = waypoint_navigation__action__NavToWaypoint_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        waypoint_navigation__action__NavToWaypoint_SendGoal_Response__fini(&data[i - 1]);
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
waypoint_navigation__action__NavToWaypoint_SendGoal_Response__Sequence__fini(waypoint_navigation__action__NavToWaypoint_SendGoal_Response__Sequence * array)
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
      waypoint_navigation__action__NavToWaypoint_SendGoal_Response__fini(&array->data[i]);
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

waypoint_navigation__action__NavToWaypoint_SendGoal_Response__Sequence *
waypoint_navigation__action__NavToWaypoint_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__action__NavToWaypoint_SendGoal_Response__Sequence * array = (waypoint_navigation__action__NavToWaypoint_SendGoal_Response__Sequence *)allocator.allocate(sizeof(waypoint_navigation__action__NavToWaypoint_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = waypoint_navigation__action__NavToWaypoint_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
waypoint_navigation__action__NavToWaypoint_SendGoal_Response__Sequence__destroy(waypoint_navigation__action__NavToWaypoint_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    waypoint_navigation__action__NavToWaypoint_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
waypoint_navigation__action__NavToWaypoint_SendGoal_Response__Sequence__are_equal(const waypoint_navigation__action__NavToWaypoint_SendGoal_Response__Sequence * lhs, const waypoint_navigation__action__NavToWaypoint_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!waypoint_navigation__action__NavToWaypoint_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
waypoint_navigation__action__NavToWaypoint_SendGoal_Response__Sequence__copy(
  const waypoint_navigation__action__NavToWaypoint_SendGoal_Response__Sequence * input,
  waypoint_navigation__action__NavToWaypoint_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(waypoint_navigation__action__NavToWaypoint_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    waypoint_navigation__action__NavToWaypoint_SendGoal_Response * data =
      (waypoint_navigation__action__NavToWaypoint_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!waypoint_navigation__action__NavToWaypoint_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          waypoint_navigation__action__NavToWaypoint_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!waypoint_navigation__action__NavToWaypoint_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
waypoint_navigation__action__NavToWaypoint_GetResult_Request__init(waypoint_navigation__action__NavToWaypoint_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    waypoint_navigation__action__NavToWaypoint_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
waypoint_navigation__action__NavToWaypoint_GetResult_Request__fini(waypoint_navigation__action__NavToWaypoint_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
waypoint_navigation__action__NavToWaypoint_GetResult_Request__are_equal(const waypoint_navigation__action__NavToWaypoint_GetResult_Request * lhs, const waypoint_navigation__action__NavToWaypoint_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
waypoint_navigation__action__NavToWaypoint_GetResult_Request__copy(
  const waypoint_navigation__action__NavToWaypoint_GetResult_Request * input,
  waypoint_navigation__action__NavToWaypoint_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

waypoint_navigation__action__NavToWaypoint_GetResult_Request *
waypoint_navigation__action__NavToWaypoint_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__action__NavToWaypoint_GetResult_Request * msg = (waypoint_navigation__action__NavToWaypoint_GetResult_Request *)allocator.allocate(sizeof(waypoint_navigation__action__NavToWaypoint_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(waypoint_navigation__action__NavToWaypoint_GetResult_Request));
  bool success = waypoint_navigation__action__NavToWaypoint_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
waypoint_navigation__action__NavToWaypoint_GetResult_Request__destroy(waypoint_navigation__action__NavToWaypoint_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    waypoint_navigation__action__NavToWaypoint_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
waypoint_navigation__action__NavToWaypoint_GetResult_Request__Sequence__init(waypoint_navigation__action__NavToWaypoint_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__action__NavToWaypoint_GetResult_Request * data = NULL;

  if (size) {
    data = (waypoint_navigation__action__NavToWaypoint_GetResult_Request *)allocator.zero_allocate(size, sizeof(waypoint_navigation__action__NavToWaypoint_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = waypoint_navigation__action__NavToWaypoint_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        waypoint_navigation__action__NavToWaypoint_GetResult_Request__fini(&data[i - 1]);
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
waypoint_navigation__action__NavToWaypoint_GetResult_Request__Sequence__fini(waypoint_navigation__action__NavToWaypoint_GetResult_Request__Sequence * array)
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
      waypoint_navigation__action__NavToWaypoint_GetResult_Request__fini(&array->data[i]);
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

waypoint_navigation__action__NavToWaypoint_GetResult_Request__Sequence *
waypoint_navigation__action__NavToWaypoint_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__action__NavToWaypoint_GetResult_Request__Sequence * array = (waypoint_navigation__action__NavToWaypoint_GetResult_Request__Sequence *)allocator.allocate(sizeof(waypoint_navigation__action__NavToWaypoint_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = waypoint_navigation__action__NavToWaypoint_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
waypoint_navigation__action__NavToWaypoint_GetResult_Request__Sequence__destroy(waypoint_navigation__action__NavToWaypoint_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    waypoint_navigation__action__NavToWaypoint_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
waypoint_navigation__action__NavToWaypoint_GetResult_Request__Sequence__are_equal(const waypoint_navigation__action__NavToWaypoint_GetResult_Request__Sequence * lhs, const waypoint_navigation__action__NavToWaypoint_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!waypoint_navigation__action__NavToWaypoint_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
waypoint_navigation__action__NavToWaypoint_GetResult_Request__Sequence__copy(
  const waypoint_navigation__action__NavToWaypoint_GetResult_Request__Sequence * input,
  waypoint_navigation__action__NavToWaypoint_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(waypoint_navigation__action__NavToWaypoint_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    waypoint_navigation__action__NavToWaypoint_GetResult_Request * data =
      (waypoint_navigation__action__NavToWaypoint_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!waypoint_navigation__action__NavToWaypoint_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          waypoint_navigation__action__NavToWaypoint_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!waypoint_navigation__action__NavToWaypoint_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "waypoint_navigation/action/detail/nav_to_waypoint__functions.h"

bool
waypoint_navigation__action__NavToWaypoint_GetResult_Response__init(waypoint_navigation__action__NavToWaypoint_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!waypoint_navigation__action__NavToWaypoint_Result__init(&msg->result)) {
    waypoint_navigation__action__NavToWaypoint_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
waypoint_navigation__action__NavToWaypoint_GetResult_Response__fini(waypoint_navigation__action__NavToWaypoint_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  waypoint_navigation__action__NavToWaypoint_Result__fini(&msg->result);
}

bool
waypoint_navigation__action__NavToWaypoint_GetResult_Response__are_equal(const waypoint_navigation__action__NavToWaypoint_GetResult_Response * lhs, const waypoint_navigation__action__NavToWaypoint_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!waypoint_navigation__action__NavToWaypoint_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
waypoint_navigation__action__NavToWaypoint_GetResult_Response__copy(
  const waypoint_navigation__action__NavToWaypoint_GetResult_Response * input,
  waypoint_navigation__action__NavToWaypoint_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!waypoint_navigation__action__NavToWaypoint_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

waypoint_navigation__action__NavToWaypoint_GetResult_Response *
waypoint_navigation__action__NavToWaypoint_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__action__NavToWaypoint_GetResult_Response * msg = (waypoint_navigation__action__NavToWaypoint_GetResult_Response *)allocator.allocate(sizeof(waypoint_navigation__action__NavToWaypoint_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(waypoint_navigation__action__NavToWaypoint_GetResult_Response));
  bool success = waypoint_navigation__action__NavToWaypoint_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
waypoint_navigation__action__NavToWaypoint_GetResult_Response__destroy(waypoint_navigation__action__NavToWaypoint_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    waypoint_navigation__action__NavToWaypoint_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
waypoint_navigation__action__NavToWaypoint_GetResult_Response__Sequence__init(waypoint_navigation__action__NavToWaypoint_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__action__NavToWaypoint_GetResult_Response * data = NULL;

  if (size) {
    data = (waypoint_navigation__action__NavToWaypoint_GetResult_Response *)allocator.zero_allocate(size, sizeof(waypoint_navigation__action__NavToWaypoint_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = waypoint_navigation__action__NavToWaypoint_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        waypoint_navigation__action__NavToWaypoint_GetResult_Response__fini(&data[i - 1]);
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
waypoint_navigation__action__NavToWaypoint_GetResult_Response__Sequence__fini(waypoint_navigation__action__NavToWaypoint_GetResult_Response__Sequence * array)
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
      waypoint_navigation__action__NavToWaypoint_GetResult_Response__fini(&array->data[i]);
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

waypoint_navigation__action__NavToWaypoint_GetResult_Response__Sequence *
waypoint_navigation__action__NavToWaypoint_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__action__NavToWaypoint_GetResult_Response__Sequence * array = (waypoint_navigation__action__NavToWaypoint_GetResult_Response__Sequence *)allocator.allocate(sizeof(waypoint_navigation__action__NavToWaypoint_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = waypoint_navigation__action__NavToWaypoint_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
waypoint_navigation__action__NavToWaypoint_GetResult_Response__Sequence__destroy(waypoint_navigation__action__NavToWaypoint_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    waypoint_navigation__action__NavToWaypoint_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
waypoint_navigation__action__NavToWaypoint_GetResult_Response__Sequence__are_equal(const waypoint_navigation__action__NavToWaypoint_GetResult_Response__Sequence * lhs, const waypoint_navigation__action__NavToWaypoint_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!waypoint_navigation__action__NavToWaypoint_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
waypoint_navigation__action__NavToWaypoint_GetResult_Response__Sequence__copy(
  const waypoint_navigation__action__NavToWaypoint_GetResult_Response__Sequence * input,
  waypoint_navigation__action__NavToWaypoint_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(waypoint_navigation__action__NavToWaypoint_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    waypoint_navigation__action__NavToWaypoint_GetResult_Response * data =
      (waypoint_navigation__action__NavToWaypoint_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!waypoint_navigation__action__NavToWaypoint_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          waypoint_navigation__action__NavToWaypoint_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!waypoint_navigation__action__NavToWaypoint_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "waypoint_navigation/action/detail/nav_to_waypoint__functions.h"

bool
waypoint_navigation__action__NavToWaypoint_FeedbackMessage__init(waypoint_navigation__action__NavToWaypoint_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    waypoint_navigation__action__NavToWaypoint_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!waypoint_navigation__action__NavToWaypoint_Feedback__init(&msg->feedback)) {
    waypoint_navigation__action__NavToWaypoint_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
waypoint_navigation__action__NavToWaypoint_FeedbackMessage__fini(waypoint_navigation__action__NavToWaypoint_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  waypoint_navigation__action__NavToWaypoint_Feedback__fini(&msg->feedback);
}

bool
waypoint_navigation__action__NavToWaypoint_FeedbackMessage__are_equal(const waypoint_navigation__action__NavToWaypoint_FeedbackMessage * lhs, const waypoint_navigation__action__NavToWaypoint_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!waypoint_navigation__action__NavToWaypoint_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
waypoint_navigation__action__NavToWaypoint_FeedbackMessage__copy(
  const waypoint_navigation__action__NavToWaypoint_FeedbackMessage * input,
  waypoint_navigation__action__NavToWaypoint_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!waypoint_navigation__action__NavToWaypoint_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

waypoint_navigation__action__NavToWaypoint_FeedbackMessage *
waypoint_navigation__action__NavToWaypoint_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__action__NavToWaypoint_FeedbackMessage * msg = (waypoint_navigation__action__NavToWaypoint_FeedbackMessage *)allocator.allocate(sizeof(waypoint_navigation__action__NavToWaypoint_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(waypoint_navigation__action__NavToWaypoint_FeedbackMessage));
  bool success = waypoint_navigation__action__NavToWaypoint_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
waypoint_navigation__action__NavToWaypoint_FeedbackMessage__destroy(waypoint_navigation__action__NavToWaypoint_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    waypoint_navigation__action__NavToWaypoint_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
waypoint_navigation__action__NavToWaypoint_FeedbackMessage__Sequence__init(waypoint_navigation__action__NavToWaypoint_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__action__NavToWaypoint_FeedbackMessage * data = NULL;

  if (size) {
    data = (waypoint_navigation__action__NavToWaypoint_FeedbackMessage *)allocator.zero_allocate(size, sizeof(waypoint_navigation__action__NavToWaypoint_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = waypoint_navigation__action__NavToWaypoint_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        waypoint_navigation__action__NavToWaypoint_FeedbackMessage__fini(&data[i - 1]);
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
waypoint_navigation__action__NavToWaypoint_FeedbackMessage__Sequence__fini(waypoint_navigation__action__NavToWaypoint_FeedbackMessage__Sequence * array)
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
      waypoint_navigation__action__NavToWaypoint_FeedbackMessage__fini(&array->data[i]);
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

waypoint_navigation__action__NavToWaypoint_FeedbackMessage__Sequence *
waypoint_navigation__action__NavToWaypoint_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  waypoint_navigation__action__NavToWaypoint_FeedbackMessage__Sequence * array = (waypoint_navigation__action__NavToWaypoint_FeedbackMessage__Sequence *)allocator.allocate(sizeof(waypoint_navigation__action__NavToWaypoint_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = waypoint_navigation__action__NavToWaypoint_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
waypoint_navigation__action__NavToWaypoint_FeedbackMessage__Sequence__destroy(waypoint_navigation__action__NavToWaypoint_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    waypoint_navigation__action__NavToWaypoint_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
waypoint_navigation__action__NavToWaypoint_FeedbackMessage__Sequence__are_equal(const waypoint_navigation__action__NavToWaypoint_FeedbackMessage__Sequence * lhs, const waypoint_navigation__action__NavToWaypoint_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!waypoint_navigation__action__NavToWaypoint_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
waypoint_navigation__action__NavToWaypoint_FeedbackMessage__Sequence__copy(
  const waypoint_navigation__action__NavToWaypoint_FeedbackMessage__Sequence * input,
  waypoint_navigation__action__NavToWaypoint_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(waypoint_navigation__action__NavToWaypoint_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    waypoint_navigation__action__NavToWaypoint_FeedbackMessage * data =
      (waypoint_navigation__action__NavToWaypoint_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!waypoint_navigation__action__NavToWaypoint_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          waypoint_navigation__action__NavToWaypoint_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!waypoint_navigation__action__NavToWaypoint_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
