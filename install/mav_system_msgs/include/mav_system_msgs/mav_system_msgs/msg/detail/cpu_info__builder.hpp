// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mav_system_msgs:msg/CpuInfo.idl
// generated code does not contain a copyright notice

#ifndef MAV_SYSTEM_MSGS__MSG__DETAIL__CPU_INFO__BUILDER_HPP_
#define MAV_SYSTEM_MSGS__MSG__DETAIL__CPU_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mav_system_msgs/msg/detail/cpu_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mav_system_msgs
{

namespace msg
{

namespace builder
{

class Init_CpuInfo_heaviest_processes
{
public:
  explicit Init_CpuInfo_heaviest_processes(::mav_system_msgs::msg::CpuInfo & msg)
  : msg_(msg)
  {}
  ::mav_system_msgs::msg::CpuInfo heaviest_processes(::mav_system_msgs::msg::CpuInfo::_heaviest_processes_type arg)
  {
    msg_.heaviest_processes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mav_system_msgs::msg::CpuInfo msg_;
};

class Init_CpuInfo_cpu_percent
{
public:
  explicit Init_CpuInfo_cpu_percent(::mav_system_msgs::msg::CpuInfo & msg)
  : msg_(msg)
  {}
  Init_CpuInfo_heaviest_processes cpu_percent(::mav_system_msgs::msg::CpuInfo::_cpu_percent_type arg)
  {
    msg_.cpu_percent = std::move(arg);
    return Init_CpuInfo_heaviest_processes(msg_);
  }

private:
  ::mav_system_msgs::msg::CpuInfo msg_;
};

class Init_CpuInfo_header
{
public:
  Init_CpuInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CpuInfo_cpu_percent header(::mav_system_msgs::msg::CpuInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CpuInfo_cpu_percent(msg_);
  }

private:
  ::mav_system_msgs::msg::CpuInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mav_system_msgs::msg::CpuInfo>()
{
  return mav_system_msgs::msg::builder::Init_CpuInfo_header();
}

}  // namespace mav_system_msgs

#endif  // MAV_SYSTEM_MSGS__MSG__DETAIL__CPU_INFO__BUILDER_HPP_
