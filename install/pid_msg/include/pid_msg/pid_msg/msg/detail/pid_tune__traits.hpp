// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pid_msg:msg/PIDTune.idl
// generated code does not contain a copyright notice

#ifndef PID_MSG__MSG__DETAIL__PID_TUNE__TRAITS_HPP_
#define PID_MSG__MSG__DETAIL__PID_TUNE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pid_msg/msg/detail/pid_tune__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pid_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const PIDTune & msg,
  std::ostream & out)
{
  out << "{";
  // member: kp
  {
    out << "kp: ";
    rosidl_generator_traits::value_to_yaml(msg.kp, out);
    out << ", ";
  }

  // member: ki
  {
    out << "ki: ";
    rosidl_generator_traits::value_to_yaml(msg.ki, out);
    out << ", ";
  }

  // member: kd
  {
    out << "kd: ";
    rosidl_generator_traits::value_to_yaml(msg.kd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PIDTune & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kp: ";
    rosidl_generator_traits::value_to_yaml(msg.kp, out);
    out << "\n";
  }

  // member: ki
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ki: ";
    rosidl_generator_traits::value_to_yaml(msg.ki, out);
    out << "\n";
  }

  // member: kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kd: ";
    rosidl_generator_traits::value_to_yaml(msg.kd, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PIDTune & msg, bool use_flow_style = false)
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

}  // namespace pid_msg

namespace rosidl_generator_traits
{

[[deprecated("use pid_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pid_msg::msg::PIDTune & msg,
  std::ostream & out, size_t indentation = 0)
{
  pid_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pid_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const pid_msg::msg::PIDTune & msg)
{
  return pid_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pid_msg::msg::PIDTune>()
{
  return "pid_msg::msg::PIDTune";
}

template<>
inline const char * name<pid_msg::msg::PIDTune>()
{
  return "pid_msg/msg/PIDTune";
}

template<>
struct has_fixed_size<pid_msg::msg::PIDTune>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pid_msg::msg::PIDTune>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pid_msg::msg::PIDTune>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PID_MSG__MSG__DETAIL__PID_TUNE__TRAITS_HPP_
