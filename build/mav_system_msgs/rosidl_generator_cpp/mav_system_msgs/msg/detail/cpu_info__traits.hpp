// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mav_system_msgs:msg/CpuInfo.idl
// generated code does not contain a copyright notice

#ifndef MAV_SYSTEM_MSGS__MSG__DETAIL__CPU_INFO__TRAITS_HPP_
#define MAV_SYSTEM_MSGS__MSG__DETAIL__CPU_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mav_system_msgs/msg/detail/cpu_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'heaviest_processes'
#include "mav_system_msgs/msg/detail/process_info__traits.hpp"

namespace mav_system_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CpuInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: cpu_percent
  {
    if (msg.cpu_percent.size() == 0) {
      out << "cpu_percent: []";
    } else {
      out << "cpu_percent: [";
      size_t pending_items = msg.cpu_percent.size();
      for (auto item : msg.cpu_percent) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: heaviest_processes
  {
    if (msg.heaviest_processes.size() == 0) {
      out << "heaviest_processes: []";
    } else {
      out << "heaviest_processes: [";
      size_t pending_items = msg.heaviest_processes.size();
      for (auto item : msg.heaviest_processes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CpuInfo & msg,
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

  // member: cpu_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cpu_percent.size() == 0) {
      out << "cpu_percent: []\n";
    } else {
      out << "cpu_percent:\n";
      for (auto item : msg.cpu_percent) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: heaviest_processes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.heaviest_processes.size() == 0) {
      out << "heaviest_processes: []\n";
    } else {
      out << "heaviest_processes:\n";
      for (auto item : msg.heaviest_processes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CpuInfo & msg, bool use_flow_style = false)
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
  const mav_system_msgs::msg::CpuInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  mav_system_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mav_system_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mav_system_msgs::msg::CpuInfo & msg)
{
  return mav_system_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mav_system_msgs::msg::CpuInfo>()
{
  return "mav_system_msgs::msg::CpuInfo";
}

template<>
inline const char * name<mav_system_msgs::msg::CpuInfo>()
{
  return "mav_system_msgs/msg/CpuInfo";
}

template<>
struct has_fixed_size<mav_system_msgs::msg::CpuInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mav_system_msgs::msg::CpuInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mav_system_msgs::msg::CpuInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAV_SYSTEM_MSGS__MSG__DETAIL__CPU_INFO__TRAITS_HPP_
