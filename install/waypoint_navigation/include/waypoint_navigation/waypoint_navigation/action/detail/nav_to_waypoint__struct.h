// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from waypoint_navigation:action/NavToWaypoint.idl
// generated code does not contain a copyright notice

#ifndef WAYPOINT_NAVIGATION__ACTION__DETAIL__NAV_TO_WAYPOINT__STRUCT_H_
#define WAYPOINT_NAVIGATION__ACTION__DETAIL__NAV_TO_WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'waypoint'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in action/NavToWaypoint in the package waypoint_navigation.
typedef struct waypoint_navigation__action__NavToWaypoint_Goal
{
  geometry_msgs__msg__Pose waypoint;
} waypoint_navigation__action__NavToWaypoint_Goal;

// Struct for a sequence of waypoint_navigation__action__NavToWaypoint_Goal.
typedef struct waypoint_navigation__action__NavToWaypoint_Goal__Sequence
{
  waypoint_navigation__action__NavToWaypoint_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation__action__NavToWaypoint_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/NavToWaypoint in the package waypoint_navigation.
typedef struct waypoint_navigation__action__NavToWaypoint_Result
{
  /// Result Definition
  /// The result contains the final state after reaching the waypoint
  int32_t hov_time;
} waypoint_navigation__action__NavToWaypoint_Result;

// Struct for a sequence of waypoint_navigation__action__NavToWaypoint_Result.
typedef struct waypoint_navigation__action__NavToWaypoint_Result__Sequence
{
  waypoint_navigation__action__NavToWaypoint_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation__action__NavToWaypoint_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_waypoint'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in action/NavToWaypoint in the package waypoint_navigation.
typedef struct waypoint_navigation__action__NavToWaypoint_Feedback
{
  /// Feedback Definition
  /// Feedback could include the current position and status
  geometry_msgs__msg__PoseStamped current_waypoint;
} waypoint_navigation__action__NavToWaypoint_Feedback;

// Struct for a sequence of waypoint_navigation__action__NavToWaypoint_Feedback.
typedef struct waypoint_navigation__action__NavToWaypoint_Feedback__Sequence
{
  waypoint_navigation__action__NavToWaypoint_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation__action__NavToWaypoint_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "waypoint_navigation/action/detail/nav_to_waypoint__struct.h"

/// Struct defined in action/NavToWaypoint in the package waypoint_navigation.
typedef struct waypoint_navigation__action__NavToWaypoint_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  waypoint_navigation__action__NavToWaypoint_Goal goal;
} waypoint_navigation__action__NavToWaypoint_SendGoal_Request;

// Struct for a sequence of waypoint_navigation__action__NavToWaypoint_SendGoal_Request.
typedef struct waypoint_navigation__action__NavToWaypoint_SendGoal_Request__Sequence
{
  waypoint_navigation__action__NavToWaypoint_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation__action__NavToWaypoint_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/NavToWaypoint in the package waypoint_navigation.
typedef struct waypoint_navigation__action__NavToWaypoint_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} waypoint_navigation__action__NavToWaypoint_SendGoal_Response;

// Struct for a sequence of waypoint_navigation__action__NavToWaypoint_SendGoal_Response.
typedef struct waypoint_navigation__action__NavToWaypoint_SendGoal_Response__Sequence
{
  waypoint_navigation__action__NavToWaypoint_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation__action__NavToWaypoint_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/NavToWaypoint in the package waypoint_navigation.
typedef struct waypoint_navigation__action__NavToWaypoint_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} waypoint_navigation__action__NavToWaypoint_GetResult_Request;

// Struct for a sequence of waypoint_navigation__action__NavToWaypoint_GetResult_Request.
typedef struct waypoint_navigation__action__NavToWaypoint_GetResult_Request__Sequence
{
  waypoint_navigation__action__NavToWaypoint_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation__action__NavToWaypoint_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "waypoint_navigation/action/detail/nav_to_waypoint__struct.h"

/// Struct defined in action/NavToWaypoint in the package waypoint_navigation.
typedef struct waypoint_navigation__action__NavToWaypoint_GetResult_Response
{
  int8_t status;
  waypoint_navigation__action__NavToWaypoint_Result result;
} waypoint_navigation__action__NavToWaypoint_GetResult_Response;

// Struct for a sequence of waypoint_navigation__action__NavToWaypoint_GetResult_Response.
typedef struct waypoint_navigation__action__NavToWaypoint_GetResult_Response__Sequence
{
  waypoint_navigation__action__NavToWaypoint_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation__action__NavToWaypoint_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "waypoint_navigation/action/detail/nav_to_waypoint__struct.h"

/// Struct defined in action/NavToWaypoint in the package waypoint_navigation.
typedef struct waypoint_navigation__action__NavToWaypoint_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  waypoint_navigation__action__NavToWaypoint_Feedback feedback;
} waypoint_navigation__action__NavToWaypoint_FeedbackMessage;

// Struct for a sequence of waypoint_navigation__action__NavToWaypoint_FeedbackMessage.
typedef struct waypoint_navigation__action__NavToWaypoint_FeedbackMessage__Sequence
{
  waypoint_navigation__action__NavToWaypoint_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} waypoint_navigation__action__NavToWaypoint_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAYPOINT_NAVIGATION__ACTION__DETAIL__NAV_TO_WAYPOINT__STRUCT_H_
