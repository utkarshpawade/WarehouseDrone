// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mav_system_msgs:msg/CpuInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mav_system_msgs/msg/detail/cpu_info__rosidl_typesupport_introspection_c.h"
#include "mav_system_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mav_system_msgs/msg/detail/cpu_info__functions.h"
#include "mav_system_msgs/msg/detail/cpu_info__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `cpu_percent`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `heaviest_processes`
#include "mav_system_msgs/msg/process_info.h"
// Member `heaviest_processes`
#include "mav_system_msgs/msg/detail/process_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__CpuInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mav_system_msgs__msg__CpuInfo__init(message_memory);
}

void mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__CpuInfo_fini_function(void * message_memory)
{
  mav_system_msgs__msg__CpuInfo__fini(message_memory);
}

size_t mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__size_function__CpuInfo__cpu_percent(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__get_const_function__CpuInfo__cpu_percent(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__get_function__CpuInfo__cpu_percent(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__fetch_function__CpuInfo__cpu_percent(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__get_const_function__CpuInfo__cpu_percent(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__assign_function__CpuInfo__cpu_percent(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__get_function__CpuInfo__cpu_percent(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__resize_function__CpuInfo__cpu_percent(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__size_function__CpuInfo__heaviest_processes(
  const void * untyped_member)
{
  const mav_system_msgs__msg__ProcessInfo__Sequence * member =
    (const mav_system_msgs__msg__ProcessInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__get_const_function__CpuInfo__heaviest_processes(
  const void * untyped_member, size_t index)
{
  const mav_system_msgs__msg__ProcessInfo__Sequence * member =
    (const mav_system_msgs__msg__ProcessInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__get_function__CpuInfo__heaviest_processes(
  void * untyped_member, size_t index)
{
  mav_system_msgs__msg__ProcessInfo__Sequence * member =
    (mav_system_msgs__msg__ProcessInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__fetch_function__CpuInfo__heaviest_processes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mav_system_msgs__msg__ProcessInfo * item =
    ((const mav_system_msgs__msg__ProcessInfo *)
    mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__get_const_function__CpuInfo__heaviest_processes(untyped_member, index));
  mav_system_msgs__msg__ProcessInfo * value =
    (mav_system_msgs__msg__ProcessInfo *)(untyped_value);
  *value = *item;
}

void mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__assign_function__CpuInfo__heaviest_processes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mav_system_msgs__msg__ProcessInfo * item =
    ((mav_system_msgs__msg__ProcessInfo *)
    mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__get_function__CpuInfo__heaviest_processes(untyped_member, index));
  const mav_system_msgs__msg__ProcessInfo * value =
    (const mav_system_msgs__msg__ProcessInfo *)(untyped_value);
  *item = *value;
}

bool mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__resize_function__CpuInfo__heaviest_processes(
  void * untyped_member, size_t size)
{
  mav_system_msgs__msg__ProcessInfo__Sequence * member =
    (mav_system_msgs__msg__ProcessInfo__Sequence *)(untyped_member);
  mav_system_msgs__msg__ProcessInfo__Sequence__fini(member);
  return mav_system_msgs__msg__ProcessInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__CpuInfo_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mav_system_msgs__msg__CpuInfo, header),  // bytes offset in struct
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
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mav_system_msgs__msg__CpuInfo, cpu_percent),  // bytes offset in struct
    NULL,  // default value
    mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__size_function__CpuInfo__cpu_percent,  // size() function pointer
    mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__get_const_function__CpuInfo__cpu_percent,  // get_const(index) function pointer
    mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__get_function__CpuInfo__cpu_percent,  // get(index) function pointer
    mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__fetch_function__CpuInfo__cpu_percent,  // fetch(index, &value) function pointer
    mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__assign_function__CpuInfo__cpu_percent,  // assign(index, value) function pointer
    mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__resize_function__CpuInfo__cpu_percent  // resize(index) function pointer
  },
  {
    "heaviest_processes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mav_system_msgs__msg__CpuInfo, heaviest_processes),  // bytes offset in struct
    NULL,  // default value
    mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__size_function__CpuInfo__heaviest_processes,  // size() function pointer
    mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__get_const_function__CpuInfo__heaviest_processes,  // get_const(index) function pointer
    mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__get_function__CpuInfo__heaviest_processes,  // get(index) function pointer
    mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__fetch_function__CpuInfo__heaviest_processes,  // fetch(index, &value) function pointer
    mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__assign_function__CpuInfo__heaviest_processes,  // assign(index, value) function pointer
    mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__resize_function__CpuInfo__heaviest_processes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__CpuInfo_message_members = {
  "mav_system_msgs__msg",  // message namespace
  "CpuInfo",  // message name
  3,  // number of fields
  sizeof(mav_system_msgs__msg__CpuInfo),
  mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__CpuInfo_message_member_array,  // message members
  mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__CpuInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__CpuInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__CpuInfo_message_type_support_handle = {
  0,
  &mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__CpuInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mav_system_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mav_system_msgs, msg, CpuInfo)() {
  mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__CpuInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__CpuInfo_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mav_system_msgs, msg, ProcessInfo)();
  if (!mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__CpuInfo_message_type_support_handle.typesupport_identifier) {
    mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__CpuInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mav_system_msgs__msg__CpuInfo__rosidl_typesupport_introspection_c__CpuInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
