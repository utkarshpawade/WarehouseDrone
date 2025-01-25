// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mav_state_machine_msgs:srv/RunTaskService.idl
// generated code does not contain a copyright notice

#ifndef MAV_STATE_MACHINE_MSGS__SRV__DETAIL__RUN_TASK_SERVICE__BUILDER_HPP_
#define MAV_STATE_MACHINE_MSGS__SRV__DETAIL__RUN_TASK_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mav_state_machine_msgs/srv/detail/run_task_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mav_state_machine_msgs
{

namespace srv
{

namespace builder
{

class Init_RunTaskService_Request_start
{
public:
  explicit Init_RunTaskService_Request_start(::mav_state_machine_msgs::srv::RunTaskService_Request & msg)
  : msg_(msg)
  {}
  ::mav_state_machine_msgs::srv::RunTaskService_Request start(::mav_state_machine_msgs::srv::RunTaskService_Request::_start_type arg)
  {
    msg_.start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mav_state_machine_msgs::srv::RunTaskService_Request msg_;
};

class Init_RunTaskService_Request_task_name
{
public:
  Init_RunTaskService_Request_task_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunTaskService_Request_start task_name(::mav_state_machine_msgs::srv::RunTaskService_Request::_task_name_type arg)
  {
    msg_.task_name = std::move(arg);
    return Init_RunTaskService_Request_start(msg_);
  }

private:
  ::mav_state_machine_msgs::srv::RunTaskService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mav_state_machine_msgs::srv::RunTaskService_Request>()
{
  return mav_state_machine_msgs::srv::builder::Init_RunTaskService_Request_task_name();
}

}  // namespace mav_state_machine_msgs


namespace mav_state_machine_msgs
{

namespace srv
{

namespace builder
{

class Init_RunTaskService_Response_success
{
public:
  Init_RunTaskService_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mav_state_machine_msgs::srv::RunTaskService_Response success(::mav_state_machine_msgs::srv::RunTaskService_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mav_state_machine_msgs::srv::RunTaskService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mav_state_machine_msgs::srv::RunTaskService_Response>()
{
  return mav_state_machine_msgs::srv::builder::Init_RunTaskService_Response_success();
}

}  // namespace mav_state_machine_msgs

#endif  // MAV_STATE_MACHINE_MSGS__SRV__DETAIL__RUN_TASK_SERVICE__BUILDER_HPP_
