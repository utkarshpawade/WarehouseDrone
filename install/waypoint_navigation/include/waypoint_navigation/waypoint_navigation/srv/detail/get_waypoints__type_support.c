// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from waypoint_navigation:srv/GetWaypoints.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "waypoint_navigation/srv/detail/get_waypoints__rosidl_typesupport_introspection_c.h"
#include "waypoint_navigation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "waypoint_navigation/srv/detail/get_waypoints__functions.h"
#include "waypoint_navigation/srv/detail/get_waypoints__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void waypoint_navigation__srv__GetWaypoints_Request__rosidl_typesupport_introspection_c__GetWaypoints_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  waypoint_navigation__srv__GetWaypoints_Request__init(message_memory);
}

void waypoint_navigation__srv__GetWaypoints_Request__rosidl_typesupport_introspection_c__GetWaypoints_Request_fini_function(void * message_memory)
{
  waypoint_navigation__srv__GetWaypoints_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember waypoint_navigation__srv__GetWaypoints_Request__rosidl_typesupport_introspection_c__GetWaypoints_Request_message_member_array[1] = {
  {
    "get_waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(waypoint_navigation__srv__GetWaypoints_Request, get_waypoints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers waypoint_navigation__srv__GetWaypoints_Request__rosidl_typesupport_introspection_c__GetWaypoints_Request_message_members = {
  "waypoint_navigation__srv",  // message namespace
  "GetWaypoints_Request",  // message name
  1,  // number of fields
  sizeof(waypoint_navigation__srv__GetWaypoints_Request),
  waypoint_navigation__srv__GetWaypoints_Request__rosidl_typesupport_introspection_c__GetWaypoints_Request_message_member_array,  // message members
  waypoint_navigation__srv__GetWaypoints_Request__rosidl_typesupport_introspection_c__GetWaypoints_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  waypoint_navigation__srv__GetWaypoints_Request__rosidl_typesupport_introspection_c__GetWaypoints_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t waypoint_navigation__srv__GetWaypoints_Request__rosidl_typesupport_introspection_c__GetWaypoints_Request_message_type_support_handle = {
  0,
  &waypoint_navigation__srv__GetWaypoints_Request__rosidl_typesupport_introspection_c__GetWaypoints_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_waypoint_navigation
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation, srv, GetWaypoints_Request)() {
  if (!waypoint_navigation__srv__GetWaypoints_Request__rosidl_typesupport_introspection_c__GetWaypoints_Request_message_type_support_handle.typesupport_identifier) {
    waypoint_navigation__srv__GetWaypoints_Request__rosidl_typesupport_introspection_c__GetWaypoints_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &waypoint_navigation__srv__GetWaypoints_Request__rosidl_typesupport_introspection_c__GetWaypoints_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "waypoint_navigation/srv/detail/get_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "waypoint_navigation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "waypoint_navigation/srv/detail/get_waypoints__functions.h"
// already included above
// #include "waypoint_navigation/srv/detail/get_waypoints__struct.h"


// Include directives for member types
// Member `waypoints`
#include "geometry_msgs/msg/pose_array.h"
// Member `waypoints`
#include "geometry_msgs/msg/detail/pose_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void waypoint_navigation__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  waypoint_navigation__srv__GetWaypoints_Response__init(message_memory);
}

void waypoint_navigation__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_fini_function(void * message_memory)
{
  waypoint_navigation__srv__GetWaypoints_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember waypoint_navigation__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_message_member_array[1] = {
  {
    "waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(waypoint_navigation__srv__GetWaypoints_Response, waypoints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers waypoint_navigation__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_message_members = {
  "waypoint_navigation__srv",  // message namespace
  "GetWaypoints_Response",  // message name
  1,  // number of fields
  sizeof(waypoint_navigation__srv__GetWaypoints_Response),
  waypoint_navigation__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_message_member_array,  // message members
  waypoint_navigation__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  waypoint_navigation__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t waypoint_navigation__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_message_type_support_handle = {
  0,
  &waypoint_navigation__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_waypoint_navigation
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation, srv, GetWaypoints_Response)() {
  waypoint_navigation__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseArray)();
  if (!waypoint_navigation__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_message_type_support_handle.typesupport_identifier) {
    waypoint_navigation__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &waypoint_navigation__srv__GetWaypoints_Response__rosidl_typesupport_introspection_c__GetWaypoints_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "waypoint_navigation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "waypoint_navigation/srv/detail/get_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers waypoint_navigation__srv__detail__get_waypoints__rosidl_typesupport_introspection_c__GetWaypoints_service_members = {
  "waypoint_navigation__srv",  // service namespace
  "GetWaypoints",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // waypoint_navigation__srv__detail__get_waypoints__rosidl_typesupport_introspection_c__GetWaypoints_Request_message_type_support_handle,
  NULL  // response message
  // waypoint_navigation__srv__detail__get_waypoints__rosidl_typesupport_introspection_c__GetWaypoints_Response_message_type_support_handle
};

static rosidl_service_type_support_t waypoint_navigation__srv__detail__get_waypoints__rosidl_typesupport_introspection_c__GetWaypoints_service_type_support_handle = {
  0,
  &waypoint_navigation__srv__detail__get_waypoints__rosidl_typesupport_introspection_c__GetWaypoints_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation, srv, GetWaypoints_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation, srv, GetWaypoints_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_waypoint_navigation
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation, srv, GetWaypoints)() {
  if (!waypoint_navigation__srv__detail__get_waypoints__rosidl_typesupport_introspection_c__GetWaypoints_service_type_support_handle.typesupport_identifier) {
    waypoint_navigation__srv__detail__get_waypoints__rosidl_typesupport_introspection_c__GetWaypoints_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)waypoint_navigation__srv__detail__get_waypoints__rosidl_typesupport_introspection_c__GetWaypoints_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation, srv, GetWaypoints_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation, srv, GetWaypoints_Response)()->data;
  }

  return &waypoint_navigation__srv__detail__get_waypoints__rosidl_typesupport_introspection_c__GetWaypoints_service_type_support_handle;
}
