// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mav_state_machine_msgs:msg/StartStopTask.idl
// generated code does not contain a copyright notice

#ifndef MAV_STATE_MACHINE_MSGS__MSG__DETAIL__START_STOP_TASK__BUILDER_HPP_
#define MAV_STATE_MACHINE_MSGS__MSG__DETAIL__START_STOP_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mav_state_machine_msgs/msg/detail/start_stop_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mav_state_machine_msgs
{

namespace msg
{

namespace builder
{

class Init_StartStopTask_start
{
public:
  explicit Init_StartStopTask_start(::mav_state_machine_msgs::msg::StartStopTask & msg)
  : msg_(msg)
  {}
  ::mav_state_machine_msgs::msg::StartStopTask start(::mav_state_machine_msgs::msg::StartStopTask::_start_type arg)
  {
    msg_.start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mav_state_machine_msgs::msg::StartStopTask msg_;
};

class Init_StartStopTask_task_name
{
public:
  explicit Init_StartStopTask_task_name(::mav_state_machine_msgs::msg::StartStopTask & msg)
  : msg_(msg)
  {}
  Init_StartStopTask_start task_name(::mav_state_machine_msgs::msg::StartStopTask::_task_name_type arg)
  {
    msg_.task_name = std::move(arg);
    return Init_StartStopTask_start(msg_);
  }

private:
  ::mav_state_machine_msgs::msg::StartStopTask msg_;
};

class Init_StartStopTask_header
{
public:
  Init_StartStopTask_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartStopTask_task_name header(::mav_state_machine_msgs::msg::StartStopTask::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StartStopTask_task_name(msg_);
  }

private:
  ::mav_state_machine_msgs::msg::StartStopTask msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mav_state_machine_msgs::msg::StartStopTask>()
{
  return mav_state_machine_msgs::msg::builder::Init_StartStopTask_header();
}

}  // namespace mav_state_machine_msgs

#endif  // MAV_STATE_MACHINE_MSGS__MSG__DETAIL__START_STOP_TASK__BUILDER_HPP_
