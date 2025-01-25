// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pid_msg:msg/PIDError.idl
// generated code does not contain a copyright notice

#ifndef PID_MSG__MSG__DETAIL__PID_ERROR__BUILDER_HPP_
#define PID_MSG__MSG__DETAIL__PID_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pid_msg/msg/detail/pid_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pid_msg
{

namespace msg
{

namespace builder
{

class Init_PIDError_yaw_error
{
public:
  explicit Init_PIDError_yaw_error(::pid_msg::msg::PIDError & msg)
  : msg_(msg)
  {}
  ::pid_msg::msg::PIDError yaw_error(::pid_msg::msg::PIDError::_yaw_error_type arg)
  {
    msg_.yaw_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pid_msg::msg::PIDError msg_;
};

class Init_PIDError_throttle_error
{
public:
  explicit Init_PIDError_throttle_error(::pid_msg::msg::PIDError & msg)
  : msg_(msg)
  {}
  Init_PIDError_yaw_error throttle_error(::pid_msg::msg::PIDError::_throttle_error_type arg)
  {
    msg_.throttle_error = std::move(arg);
    return Init_PIDError_yaw_error(msg_);
  }

private:
  ::pid_msg::msg::PIDError msg_;
};

class Init_PIDError_pitch_error
{
public:
  explicit Init_PIDError_pitch_error(::pid_msg::msg::PIDError & msg)
  : msg_(msg)
  {}
  Init_PIDError_throttle_error pitch_error(::pid_msg::msg::PIDError::_pitch_error_type arg)
  {
    msg_.pitch_error = std::move(arg);
    return Init_PIDError_throttle_error(msg_);
  }

private:
  ::pid_msg::msg::PIDError msg_;
};

class Init_PIDError_roll_error
{
public:
  Init_PIDError_roll_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PIDError_pitch_error roll_error(::pid_msg::msg::PIDError::_roll_error_type arg)
  {
    msg_.roll_error = std::move(arg);
    return Init_PIDError_pitch_error(msg_);
  }

private:
  ::pid_msg::msg::PIDError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pid_msg::msg::PIDError>()
{
  return pid_msg::msg::builder::Init_PIDError_roll_error();
}

}  // namespace pid_msg

#endif  // PID_MSG__MSG__DETAIL__PID_ERROR__BUILDER_HPP_
