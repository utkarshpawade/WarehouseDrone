// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mav_state_machine_msgs:srv/RunTaskService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mav_state_machine_msgs/srv/detail/run_task_service__rosidl_typesupport_introspection_c.h"
#include "mav_state_machine_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mav_state_machine_msgs/srv/detail/run_task_service__functions.h"
#include "mav_state_machine_msgs/srv/detail/run_task_service__struct.h"


// Include directives for member types
// Member `task_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mav_state_machine_msgs__srv__RunTaskService_Request__rosidl_typesupport_introspection_c__RunTaskService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mav_state_machine_msgs__srv__RunTaskService_Request__init(message_memory);
}

void mav_state_machine_msgs__srv__RunTaskService_Request__rosidl_typesupport_introspection_c__RunTaskService_Request_fini_function(void * message_memory)
{
  mav_state_machine_msgs__srv__RunTaskService_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mav_state_machine_msgs__srv__RunTaskService_Request__rosidl_typesupport_introspection_c__RunTaskService_Request_message_member_array[2] = {
  {
    "task_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mav_state_machine_msgs__srv__RunTaskService_Request, task_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mav_state_machine_msgs__srv__RunTaskService_Request, start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mav_state_machine_msgs__srv__RunTaskService_Request__rosidl_typesupport_introspection_c__RunTaskService_Request_message_members = {
  "mav_state_machine_msgs__srv",  // message namespace
  "RunTaskService_Request",  // message name
  2,  // number of fields
  sizeof(mav_state_machine_msgs__srv__RunTaskService_Request),
  mav_state_machine_msgs__srv__RunTaskService_Request__rosidl_typesupport_introspection_c__RunTaskService_Request_message_member_array,  // message members
  mav_state_machine_msgs__srv__RunTaskService_Request__rosidl_typesupport_introspection_c__RunTaskService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  mav_state_machine_msgs__srv__RunTaskService_Request__rosidl_typesupport_introspection_c__RunTaskService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mav_state_machine_msgs__srv__RunTaskService_Request__rosidl_typesupport_introspection_c__RunTaskService_Request_message_type_support_handle = {
  0,
  &mav_state_machine_msgs__srv__RunTaskService_Request__rosidl_typesupport_introspection_c__RunTaskService_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mav_state_machine_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mav_state_machine_msgs, srv, RunTaskService_Request)() {
  if (!mav_state_machine_msgs__srv__RunTaskService_Request__rosidl_typesupport_introspection_c__RunTaskService_Request_message_type_support_handle.typesupport_identifier) {
    mav_state_machine_msgs__srv__RunTaskService_Request__rosidl_typesupport_introspection_c__RunTaskService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mav_state_machine_msgs__srv__RunTaskService_Request__rosidl_typesupport_introspection_c__RunTaskService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mav_state_machine_msgs/srv/detail/run_task_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mav_state_machine_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mav_state_machine_msgs/srv/detail/run_task_service__functions.h"
// already included above
// #include "mav_state_machine_msgs/srv/detail/run_task_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void mav_state_machine_msgs__srv__RunTaskService_Response__rosidl_typesupport_introspection_c__RunTaskService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mav_state_machine_msgs__srv__RunTaskService_Response__init(message_memory);
}

void mav_state_machine_msgs__srv__RunTaskService_Response__rosidl_typesupport_introspection_c__RunTaskService_Response_fini_function(void * message_memory)
{
  mav_state_machine_msgs__srv__RunTaskService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mav_state_machine_msgs__srv__RunTaskService_Response__rosidl_typesupport_introspection_c__RunTaskService_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mav_state_machine_msgs__srv__RunTaskService_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mav_state_machine_msgs__srv__RunTaskService_Response__rosidl_typesupport_introspection_c__RunTaskService_Response_message_members = {
  "mav_state_machine_msgs__srv",  // message namespace
  "RunTaskService_Response",  // message name
  1,  // number of fields
  sizeof(mav_state_machine_msgs__srv__RunTaskService_Response),
  mav_state_machine_msgs__srv__RunTaskService_Response__rosidl_typesupport_introspection_c__RunTaskService_Response_message_member_array,  // message members
  mav_state_machine_msgs__srv__RunTaskService_Response__rosidl_typesupport_introspection_c__RunTaskService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  mav_state_machine_msgs__srv__RunTaskService_Response__rosidl_typesupport_introspection_c__RunTaskService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mav_state_machine_msgs__srv__RunTaskService_Response__rosidl_typesupport_introspection_c__RunTaskService_Response_message_type_support_handle = {
  0,
  &mav_state_machine_msgs__srv__RunTaskService_Response__rosidl_typesupport_introspection_c__RunTaskService_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mav_state_machine_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mav_state_machine_msgs, srv, RunTaskService_Response)() {
  if (!mav_state_machine_msgs__srv__RunTaskService_Response__rosidl_typesupport_introspection_c__RunTaskService_Response_message_type_support_handle.typesupport_identifier) {
    mav_state_machine_msgs__srv__RunTaskService_Response__rosidl_typesupport_introspection_c__RunTaskService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mav_state_machine_msgs__srv__RunTaskService_Response__rosidl_typesupport_introspection_c__RunTaskService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mav_state_machine_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mav_state_machine_msgs/srv/detail/run_task_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mav_state_machine_msgs__srv__detail__run_task_service__rosidl_typesupport_introspection_c__RunTaskService_service_members = {
  "mav_state_machine_msgs__srv",  // service namespace
  "RunTaskService",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // mav_state_machine_msgs__srv__detail__run_task_service__rosidl_typesupport_introspection_c__RunTaskService_Request_message_type_support_handle,
  NULL  // response message
  // mav_state_machine_msgs__srv__detail__run_task_service__rosidl_typesupport_introspection_c__RunTaskService_Response_message_type_support_handle
};

static rosidl_service_type_support_t mav_state_machine_msgs__srv__detail__run_task_service__rosidl_typesupport_introspection_c__RunTaskService_service_type_support_handle = {
  0,
  &mav_state_machine_msgs__srv__detail__run_task_service__rosidl_typesupport_introspection_c__RunTaskService_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mav_state_machine_msgs, srv, RunTaskService_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mav_state_machine_msgs, srv, RunTaskService_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mav_state_machine_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mav_state_machine_msgs, srv, RunTaskService)() {
  if (!mav_state_machine_msgs__srv__detail__run_task_service__rosidl_typesupport_introspection_c__RunTaskService_service_type_support_handle.typesupport_identifier) {
    mav_state_machine_msgs__srv__detail__run_task_service__rosidl_typesupport_introspection_c__RunTaskService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mav_state_machine_msgs__srv__detail__run_task_service__rosidl_typesupport_introspection_c__RunTaskService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mav_state_machine_msgs, srv, RunTaskService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mav_state_machine_msgs, srv, RunTaskService_Response)()->data;
  }

  return &mav_state_machine_msgs__srv__detail__run_task_service__rosidl_typesupport_introspection_c__RunTaskService_service_type_support_handle;
}
