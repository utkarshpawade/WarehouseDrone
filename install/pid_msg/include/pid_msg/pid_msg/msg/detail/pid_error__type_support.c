// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pid_msg:msg/PIDError.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pid_msg/msg/detail/pid_error__rosidl_typesupport_introspection_c.h"
#include "pid_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pid_msg/msg/detail/pid_error__functions.h"
#include "pid_msg/msg/detail/pid_error__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void pid_msg__msg__PIDError__rosidl_typesupport_introspection_c__PIDError_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pid_msg__msg__PIDError__init(message_memory);
}

void pid_msg__msg__PIDError__rosidl_typesupport_introspection_c__PIDError_fini_function(void * message_memory)
{
  pid_msg__msg__PIDError__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pid_msg__msg__PIDError__rosidl_typesupport_introspection_c__PIDError_message_member_array[4] = {
  {
    "roll_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pid_msg__msg__PIDError, roll_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pid_msg__msg__PIDError, pitch_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "throttle_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pid_msg__msg__PIDError, throttle_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pid_msg__msg__PIDError, yaw_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pid_msg__msg__PIDError__rosidl_typesupport_introspection_c__PIDError_message_members = {
  "pid_msg__msg",  // message namespace
  "PIDError",  // message name
  4,  // number of fields
  sizeof(pid_msg__msg__PIDError),
  pid_msg__msg__PIDError__rosidl_typesupport_introspection_c__PIDError_message_member_array,  // message members
  pid_msg__msg__PIDError__rosidl_typesupport_introspection_c__PIDError_init_function,  // function to initialize message memory (memory has to be allocated)
  pid_msg__msg__PIDError__rosidl_typesupport_introspection_c__PIDError_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pid_msg__msg__PIDError__rosidl_typesupport_introspection_c__PIDError_message_type_support_handle = {
  0,
  &pid_msg__msg__PIDError__rosidl_typesupport_introspection_c__PIDError_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pid_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pid_msg, msg, PIDError)() {
  if (!pid_msg__msg__PIDError__rosidl_typesupport_introspection_c__PIDError_message_type_support_handle.typesupport_identifier) {
    pid_msg__msg__PIDError__rosidl_typesupport_introspection_c__PIDError_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pid_msg__msg__PIDError__rosidl_typesupport_introspection_c__PIDError_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
