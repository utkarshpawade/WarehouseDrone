// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from pid_msg:msg/PIDError.idl
// generated code does not contain a copyright notice

#ifndef PID_MSG__MSG__DETAIL__PID_ERROR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define PID_MSG__MSG__DETAIL__PID_ERROR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "pid_msg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "pid_msg/msg/detail/pid_error__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace pid_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pid_msg
cdr_serialize(
  const pid_msg::msg::PIDError & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pid_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pid_msg::msg::PIDError & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pid_msg
get_serialized_size(
  const pid_msg::msg::PIDError & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pid_msg
max_serialized_size_PIDError(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace pid_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pid_msg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pid_msg, msg, PIDError)();

#ifdef __cplusplus
}
#endif

#endif  // PID_MSG__MSG__DETAIL__PID_ERROR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
