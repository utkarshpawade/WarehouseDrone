// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pid_msg:msg/PIDError.idl
// generated code does not contain a copyright notice

#ifndef PID_MSG__MSG__DETAIL__PID_ERROR__TRAITS_HPP_
#define PID_MSG__MSG__DETAIL__PID_ERROR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pid_msg/msg/detail/pid_error__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pid_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const PIDError & msg,
  std::ostream & out)
{
  out << "{";
  // member: roll_error
  {
    out << "roll_error: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_error, out);
    out << ", ";
  }

  // member: pitch_error
  {
    out << "pitch_error: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_error, out);
    out << ", ";
  }

  // member: throttle_error
  {
    out << "throttle_error: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_error, out);
    out << ", ";
  }

  // member: yaw_error
  {
    out << "yaw_error: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PIDError & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: roll_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_error: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_error, out);
    out << "\n";
  }

  // member: pitch_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_error: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_error, out);
    out << "\n";
  }

  // member: throttle_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_error: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_error, out);
    out << "\n";
  }

  // member: yaw_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_error: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PIDError & msg, bool use_flow_style = false)
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
  const pid_msg::msg::PIDError & msg,
  std::ostream & out, size_t indentation = 0)
{
  pid_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pid_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const pid_msg::msg::PIDError & msg)
{
  return pid_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pid_msg::msg::PIDError>()
{
  return "pid_msg::msg::PIDError";
}

template<>
inline const char * name<pid_msg::msg::PIDError>()
{
  return "pid_msg/msg/PIDError";
}

template<>
struct has_fixed_size<pid_msg::msg::PIDError>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pid_msg::msg::PIDError>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pid_msg::msg::PIDError>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PID_MSG__MSG__DETAIL__PID_ERROR__TRAITS_HPP_
