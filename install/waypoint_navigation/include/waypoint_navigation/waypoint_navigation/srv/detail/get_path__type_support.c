// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from waypoint_navigation:srv/GetPath.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "waypoint_navigation/srv/detail/get_path__rosidl_typesupport_introspection_c.h"
#include "waypoint_navigation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "waypoint_navigation/srv/detail/get_path__functions.h"
#include "waypoint_navigation/srv/detail/get_path__struct.h"


// Include directives for member types
// Member `start_point`
// Member `end_point`
#include "geometry_msgs/msg/pose.h"
// Member `start_point`
// Member `end_point`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void waypoint_navigation__srv__GetPath_Request__rosidl_typesupport_introspection_c__GetPath_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  waypoint_navigation__srv__GetPath_Request__init(message_memory);
}

void waypoint_navigation__srv__GetPath_Request__rosidl_typesupport_introspection_c__GetPath_Request_fini_function(void * message_memory)
{
  waypoint_navigation__srv__GetPath_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember waypoint_navigation__srv__GetPath_Request__rosidl_typesupport_introspection_c__GetPath_Request_message_member_array[2] = {
  {
    "start_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(waypoint_navigation__srv__GetPath_Request, start_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(waypoint_navigation__srv__GetPath_Request, end_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers waypoint_navigation__srv__GetPath_Request__rosidl_typesupport_introspection_c__GetPath_Request_message_members = {
  "waypoint_navigation__srv",  // message namespace
  "GetPath_Request",  // message name
  2,  // number of fields
  sizeof(waypoint_navigation__srv__GetPath_Request),
  waypoint_navigation__srv__GetPath_Request__rosidl_typesupport_introspection_c__GetPath_Request_message_member_array,  // message members
  waypoint_navigation__srv__GetPath_Request__rosidl_typesupport_introspection_c__GetPath_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  waypoint_navigation__srv__GetPath_Request__rosidl_typesupport_introspection_c__GetPath_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t waypoint_navigation__srv__GetPath_Request__rosidl_typesupport_introspection_c__GetPath_Request_message_type_support_handle = {
  0,
  &waypoint_navigation__srv__GetPath_Request__rosidl_typesupport_introspection_c__GetPath_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_waypoint_navigation
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation, srv, GetPath_Request)() {
  waypoint_navigation__srv__GetPath_Request__rosidl_typesupport_introspection_c__GetPath_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  waypoint_navigation__srv__GetPath_Request__rosidl_typesupport_introspection_c__GetPath_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!waypoint_navigation__srv__GetPath_Request__rosidl_typesupport_introspection_c__GetPath_Request_message_type_support_handle.typesupport_identifier) {
    waypoint_navigation__srv__GetPath_Request__rosidl_typesupport_introspection_c__GetPath_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &waypoint_navigation__srv__GetPath_Request__rosidl_typesupport_introspection_c__GetPath_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "waypoint_navigation/srv/detail/get_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "waypoint_navigation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "waypoint_navigation/srv/detail/get_path__functions.h"
// already included above
// #include "waypoint_navigation/srv/detail/get_path__struct.h"


// Include directives for member types
// Member `path`
#include "geometry_msgs/msg/pose_array.h"
// Member `path`
#include "geometry_msgs/msg/detail/pose_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void waypoint_navigation__srv__GetPath_Response__rosidl_typesupport_introspection_c__GetPath_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  waypoint_navigation__srv__GetPath_Response__init(message_memory);
}

void waypoint_navigation__srv__GetPath_Response__rosidl_typesupport_introspection_c__GetPath_Response_fini_function(void * message_memory)
{
  waypoint_navigation__srv__GetPath_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember waypoint_navigation__srv__GetPath_Response__rosidl_typesupport_introspection_c__GetPath_Response_message_member_array[2] = {
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(waypoint_navigation__srv__GetPath_Response, path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_on_first_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(waypoint_navigation__srv__GetPath_Response, is_on_first_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers waypoint_navigation__srv__GetPath_Response__rosidl_typesupport_introspection_c__GetPath_Response_message_members = {
  "waypoint_navigation__srv",  // message namespace
  "GetPath_Response",  // message name
  2,  // number of fields
  sizeof(waypoint_navigation__srv__GetPath_Response),
  waypoint_navigation__srv__GetPath_Response__rosidl_typesupport_introspection_c__GetPath_Response_message_member_array,  // message members
  waypoint_navigation__srv__GetPath_Response__rosidl_typesupport_introspection_c__GetPath_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  waypoint_navigation__srv__GetPath_Response__rosidl_typesupport_introspection_c__GetPath_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t waypoint_navigation__srv__GetPath_Response__rosidl_typesupport_introspection_c__GetPath_Response_message_type_support_handle = {
  0,
  &waypoint_navigation__srv__GetPath_Response__rosidl_typesupport_introspection_c__GetPath_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_waypoint_navigation
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation, srv, GetPath_Response)() {
  waypoint_navigation__srv__GetPath_Response__rosidl_typesupport_introspection_c__GetPath_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseArray)();
  if (!waypoint_navigation__srv__GetPath_Response__rosidl_typesupport_introspection_c__GetPath_Response_message_type_support_handle.typesupport_identifier) {
    waypoint_navigation__srv__GetPath_Response__rosidl_typesupport_introspection_c__GetPath_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &waypoint_navigation__srv__GetPath_Response__rosidl_typesupport_introspection_c__GetPath_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "waypoint_navigation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "waypoint_navigation/srv/detail/get_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers waypoint_navigation__srv__detail__get_path__rosidl_typesupport_introspection_c__GetPath_service_members = {
  "waypoint_navigation__srv",  // service namespace
  "GetPath",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // waypoint_navigation__srv__detail__get_path__rosidl_typesupport_introspection_c__GetPath_Request_message_type_support_handle,
  NULL  // response message
  // waypoint_navigation__srv__detail__get_path__rosidl_typesupport_introspection_c__GetPath_Response_message_type_support_handle
};

static rosidl_service_type_support_t waypoint_navigation__srv__detail__get_path__rosidl_typesupport_introspection_c__GetPath_service_type_support_handle = {
  0,
  &waypoint_navigation__srv__detail__get_path__rosidl_typesupport_introspection_c__GetPath_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation, srv, GetPath_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation, srv, GetPath_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_waypoint_navigation
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation, srv, GetPath)() {
  if (!waypoint_navigation__srv__detail__get_path__rosidl_typesupport_introspection_c__GetPath_service_type_support_handle.typesupport_identifier) {
    waypoint_navigation__srv__detail__get_path__rosidl_typesupport_introspection_c__GetPath_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)waypoint_navigation__srv__detail__get_path__rosidl_typesupport_introspection_c__GetPath_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation, srv, GetPath_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, waypoint_navigation, srv, GetPath_Response)()->data;
  }

  return &waypoint_navigation__srv__detail__get_path__rosidl_typesupport_introspection_c__GetPath_service_type_support_handle;
}
