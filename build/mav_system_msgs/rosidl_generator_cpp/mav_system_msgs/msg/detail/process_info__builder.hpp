// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mav_system_msgs:msg/ProcessInfo.idl
// generated code does not contain a copyright notice

#ifndef MAV_SYSTEM_MSGS__MSG__DETAIL__PROCESS_INFO__BUILDER_HPP_
#define MAV_SYSTEM_MSGS__MSG__DETAIL__PROCESS_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mav_system_msgs/msg/detail/process_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mav_system_msgs
{

namespace msg
{

namespace builder
{

class Init_ProcessInfo_cpu_percent
{
public:
  explicit Init_ProcessInfo_cpu_percent(::mav_system_msgs::msg::ProcessInfo & msg)
  : msg_(msg)
  {}
  ::mav_system_msgs::msg::ProcessInfo cpu_percent(::mav_system_msgs::msg::ProcessInfo::_cpu_percent_type arg)
  {
    msg_.cpu_percent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mav_system_msgs::msg::ProcessInfo msg_;
};

class Init_ProcessInfo_username
{
public:
  explicit Init_ProcessInfo_username(::mav_system_msgs::msg::ProcessInfo & msg)
  : msg_(msg)
  {}
  Init_ProcessInfo_cpu_percent username(::mav_system_msgs::msg::ProcessInfo::_username_type arg)
  {
    msg_.username = std::move(arg);
    return Init_ProcessInfo_cpu_percent(msg_);
  }

private:
  ::mav_system_msgs::msg::ProcessInfo msg_;
};

class Init_ProcessInfo_name
{
public:
  explicit Init_ProcessInfo_name(::mav_system_msgs::msg::ProcessInfo & msg)
  : msg_(msg)
  {}
  Init_ProcessInfo_username name(::mav_system_msgs::msg::ProcessInfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ProcessInfo_username(msg_);
  }

private:
  ::mav_system_msgs::msg::ProcessInfo msg_;
};

class Init_ProcessInfo_pid
{
public:
  Init_ProcessInfo_pid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProcessInfo_name pid(::mav_system_msgs::msg::ProcessInfo::_pid_type arg)
  {
    msg_.pid = std::move(arg);
    return Init_ProcessInfo_name(msg_);
  }

private:
  ::mav_system_msgs::msg::ProcessInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mav_system_msgs::msg::ProcessInfo>()
{
  return mav_system_msgs::msg::builder::Init_ProcessInfo_pid();
}

}  // namespace mav_system_msgs

#endif  // MAV_SYSTEM_MSGS__MSG__DETAIL__PROCESS_INFO__BUILDER_HPP_
