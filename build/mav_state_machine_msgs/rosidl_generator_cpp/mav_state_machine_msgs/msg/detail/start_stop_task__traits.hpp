// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mav_state_machine_msgs:msg/StartStopTask.idl
// generated code does not contain a copyright notice

#ifndef MAV_STATE_MACHINE_MSGS__MSG__DETAIL__START_STOP_TASK__TRAITS_HPP_
#define MAV_STATE_MACHINE_MSGS__MSG__DETAIL__START_STOP_TASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mav_state_machine_msgs/msg/detail/start_stop_task__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace mav_state_machine_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StartStopTask & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: task_name
  {
    out << "task_name: ";
    rosidl_generator_traits::value_to_yaml(msg.task_name, out);
    out << ", ";
  }

  // member: start
  {
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StartStopTask & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: task_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_name: ";
    rosidl_generator_traits::value_to_yaml(msg.task_name, out);
    out << "\n";
  }

  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StartStopTask & msg, bool use_flow_style = false)
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

}  // namespace mav_state_machine_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mav_state_machine_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mav_state_machine_msgs::msg::StartStopTask & msg,
  std::ostream & out, size_t indentation = 0)
{
  mav_state_machine_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mav_state_machine_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mav_state_machine_msgs::msg::StartStopTask & msg)
{
  return mav_state_machine_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mav_state_machine_msgs::msg::StartStopTask>()
{
  return "mav_state_machine_msgs::msg::StartStopTask";
}

template<>
inline const char * name<mav_state_machine_msgs::msg::StartStopTask>()
{
  return "mav_state_machine_msgs/msg/StartStopTask";
}

template<>
struct has_fixed_size<mav_state_machine_msgs::msg::StartStopTask>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mav_state_machine_msgs::msg::StartStopTask>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mav_state_machine_msgs::msg::StartStopTask>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAV_STATE_MACHINE_MSGS__MSG__DETAIL__START_STOP_TASK__TRAITS_HPP_
