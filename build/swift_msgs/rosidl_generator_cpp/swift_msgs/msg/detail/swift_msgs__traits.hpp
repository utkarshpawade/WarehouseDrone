// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from swift_msgs:msg/SwiftMsgs.idl
// generated code does not contain a copyright notice

#ifndef SWIFT_MSGS__MSG__DETAIL__SWIFT_MSGS__TRAITS_HPP_
#define SWIFT_MSGS__MSG__DETAIL__SWIFT_MSGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "swift_msgs/msg/detail/swift_msgs__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace swift_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SwiftMsgs & msg,
  std::ostream & out)
{
  out << "{";
  // member: rc_roll
  {
    out << "rc_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_roll, out);
    out << ", ";
  }

  // member: rc_pitch
  {
    out << "rc_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_pitch, out);
    out << ", ";
  }

  // member: rc_yaw
  {
    out << "rc_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_yaw, out);
    out << ", ";
  }

  // member: rc_throttle
  {
    out << "rc_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_throttle, out);
    out << ", ";
  }

  // member: rc_aux1
  {
    out << "rc_aux1: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_aux1, out);
    out << ", ";
  }

  // member: rc_aux2
  {
    out << "rc_aux2: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_aux2, out);
    out << ", ";
  }

  // member: rc_aux3
  {
    out << "rc_aux3: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_aux3, out);
    out << ", ";
  }

  // member: rc_aux4
  {
    out << "rc_aux4: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_aux4, out);
    out << ", ";
  }

  // member: drone_index
  {
    out << "drone_index: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_index, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SwiftMsgs & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rc_roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_roll, out);
    out << "\n";
  }

  // member: rc_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_pitch, out);
    out << "\n";
  }

  // member: rc_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_yaw, out);
    out << "\n";
  }

  // member: rc_throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_throttle, out);
    out << "\n";
  }

  // member: rc_aux1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_aux1: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_aux1, out);
    out << "\n";
  }

  // member: rc_aux2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_aux2: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_aux2, out);
    out << "\n";
  }

  // member: rc_aux3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_aux3: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_aux3, out);
    out << "\n";
  }

  // member: rc_aux4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_aux4: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_aux4, out);
    out << "\n";
  }

  // member: drone_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drone_index: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_index, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SwiftMsgs & msg, bool use_flow_style = false)
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

}  // namespace swift_msgs

namespace rosidl_generator_traits
{

[[deprecated("use swift_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const swift_msgs::msg::SwiftMsgs & msg,
  std::ostream & out, size_t indentation = 0)
{
  swift_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swift_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const swift_msgs::msg::SwiftMsgs & msg)
{
  return swift_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<swift_msgs::msg::SwiftMsgs>()
{
  return "swift_msgs::msg::SwiftMsgs";
}

template<>
inline const char * name<swift_msgs::msg::SwiftMsgs>()
{
  return "swift_msgs/msg/SwiftMsgs";
}

template<>
struct has_fixed_size<swift_msgs::msg::SwiftMsgs>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<swift_msgs::msg::SwiftMsgs>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<swift_msgs::msg::SwiftMsgs>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SWIFT_MSGS__MSG__DETAIL__SWIFT_MSGS__TRAITS_HPP_
