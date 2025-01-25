// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from mav_system_msgs:msg/ProcessInfo.idl
// generated code does not contain a copyright notice

#ifndef MAV_SYSTEM_MSGS__MSG__DETAIL__PROCESS_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MAV_SYSTEM_MSGS__MSG__DETAIL__PROCESS_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mav_system_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "mav_system_msgs/msg/detail/process_info__struct.hpp"

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

namespace mav_system_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mav_system_msgs
cdr_serialize(
  const mav_system_msgs::msg::ProcessInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mav_system_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mav_system_msgs::msg::ProcessInfo & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mav_system_msgs
get_serialized_size(
  const mav_system_msgs::msg::ProcessInfo & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mav_system_msgs
max_serialized_size_ProcessInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mav_system_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mav_system_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mav_system_msgs, msg, ProcessInfo)();

#ifdef __cplusplus
}
#endif

#endif  // MAV_SYSTEM_MSGS__MSG__DETAIL__PROCESS_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
