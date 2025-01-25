// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mav_system_msgs:msg/ProcessInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mav_system_msgs/msg/detail/process_info__rosidl_typesupport_introspection_c.h"
#include "mav_system_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mav_system_msgs/msg/detail/process_info__functions.h"
#include "mav_system_msgs/msg/detail/process_info__struct.h"


// Include directives for member types
// Member `name`
// Member `username`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mav_system_msgs__msg__ProcessInfo__rosidl_typesupport_introspection_c__ProcessInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mav_system_msgs__msg__ProcessInfo__init(message_memory);
}

void mav_system_msgs__msg__ProcessInfo__rosidl_typesupport_introspection_c__ProcessInfo_fini_function(void * message_memory)
{
  mav_system_msgs__msg__ProcessInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mav_system_msgs__msg__ProcessInfo__rosidl_typesupport_introspection_c__ProcessInfo_message_member_array[4] = {
  {
    "pid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mav_system_msgs__msg__ProcessInfo, pid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mav_system_msgs__msg__ProcessInfo, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "username",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mav_system_msgs__msg__ProcessInfo, username),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cpu_percent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mav_system_msgs__msg__ProcessInfo, cpu_percent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mav_system_msgs__msg__ProcessInfo__rosidl_typesupport_introspection_c__ProcessInfo_message_members = {
  "mav_system_msgs__msg",  // message namespace
  "ProcessInfo",  // message name
  4,  // number of fields
  sizeof(mav_system_msgs__msg__ProcessInfo),
  mav_system_msgs__msg__ProcessInfo__rosidl_typesupport_introspection_c__ProcessInfo_message_member_array,  // message members
  mav_system_msgs__msg__ProcessInfo__rosidl_typesupport_introspection_c__ProcessInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  mav_system_msgs__msg__ProcessInfo__rosidl_typesupport_introspection_c__ProcessInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mav_system_msgs__msg__ProcessInfo__rosidl_typesupport_introspection_c__ProcessInfo_message_type_support_handle = {
  0,
  &mav_system_msgs__msg__ProcessInfo__rosidl_typesupport_introspection_c__ProcessInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mav_system_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mav_system_msgs, msg, ProcessInfo)() {
  if (!mav_system_msgs__msg__ProcessInfo__rosidl_typesupport_introspection_c__ProcessInfo_message_type_support_handle.typesupport_identifier) {
    mav_system_msgs__msg__ProcessInfo__rosidl_typesupport_introspection_c__ProcessInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mav_system_msgs__msg__ProcessInfo__rosidl_typesupport_introspection_c__ProcessInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
