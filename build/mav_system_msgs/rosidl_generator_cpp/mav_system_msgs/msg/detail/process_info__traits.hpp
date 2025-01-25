// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mav_system_msgs:msg/ProcessInfo.idl
// generated code does not contain a copyright notice

#ifndef MAV_SYSTEM_MSGS__MSG__DETAIL__PROCESS_INFO__TRAITS_HPP_
#define MAV_SYSTEM_MSGS__MSG__DETAIL__PROCESS_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mav_system_msgs/msg/detail/process_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mav_system_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ProcessInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: pid
  {
    out << "pid: ";
    rosidl_generator_traits::value_to_yaml(msg.pid, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: username
  {
    out << "username: ";
    rosidl_generator_traits::value_to_yaml(msg.username, out);
    out << ", ";
  }

  // member: cpu_percent
  {
    out << "cpu_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_percent, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProcessInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pid: ";
    rosidl_generator_traits::value_to_yaml(msg.pid, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: username
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "username: ";
    rosidl_generator_traits::value_to_yaml(msg.username, out);
    out << "\n";
  }

  // member: cpu_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_percent, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mav_system_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mav_system_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mav_system_msgs::msg::ProcessInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  mav_system_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mav_system_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mav_system_msgs::msg::ProcessInfo & msg)
{
  return mav_system_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mav_system_msgs::msg::ProcessInfo>()
{
  return "mav_system_msgs::msg::ProcessInfo";
}

template<>
inline const char * name<mav_system_msgs::msg::ProcessInfo>()
{
  return "mav_system_msgs/msg/ProcessInfo";
}

template<>
struct has_fixed_size<mav_system_msgs::msg::ProcessInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mav_system_msgs::msg::ProcessInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mav_system_msgs::msg::ProcessInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAV_SYSTEM_MSGS__MSG__DETAIL__PROCESS_INFO__TRAITS_HPP_
