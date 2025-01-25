// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swift_msgs:msg/SwiftMsgs.idl
// generated code does not contain a copyright notice

#ifndef SWIFT_MSGS__MSG__DETAIL__SWIFT_MSGS__BUILDER_HPP_
#define SWIFT_MSGS__MSG__DETAIL__SWIFT_MSGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swift_msgs/msg/detail/swift_msgs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swift_msgs
{

namespace msg
{

namespace builder
{

class Init_SwiftMsgs_drone_index
{
public:
  explicit Init_SwiftMsgs_drone_index(::swift_msgs::msg::SwiftMsgs & msg)
  : msg_(msg)
  {}
  ::swift_msgs::msg::SwiftMsgs drone_index(::swift_msgs::msg::SwiftMsgs::_drone_index_type arg)
  {
    msg_.drone_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swift_msgs::msg::SwiftMsgs msg_;
};

class Init_SwiftMsgs_rc_aux4
{
public:
  explicit Init_SwiftMsgs_rc_aux4(::swift_msgs::msg::SwiftMsgs & msg)
  : msg_(msg)
  {}
  Init_SwiftMsgs_drone_index rc_aux4(::swift_msgs::msg::SwiftMsgs::_rc_aux4_type arg)
  {
    msg_.rc_aux4 = std::move(arg);
    return Init_SwiftMsgs_drone_index(msg_);
  }

private:
  ::swift_msgs::msg::SwiftMsgs msg_;
};

class Init_SwiftMsgs_rc_aux3
{
public:
  explicit Init_SwiftMsgs_rc_aux3(::swift_msgs::msg::SwiftMsgs & msg)
  : msg_(msg)
  {}
  Init_SwiftMsgs_rc_aux4 rc_aux3(::swift_msgs::msg::SwiftMsgs::_rc_aux3_type arg)
  {
    msg_.rc_aux3 = std::move(arg);
    return Init_SwiftMsgs_rc_aux4(msg_);
  }

private:
  ::swift_msgs::msg::SwiftMsgs msg_;
};

class Init_SwiftMsgs_rc_aux2
{
public:
  explicit Init_SwiftMsgs_rc_aux2(::swift_msgs::msg::SwiftMsgs & msg)
  : msg_(msg)
  {}
  Init_SwiftMsgs_rc_aux3 rc_aux2(::swift_msgs::msg::SwiftMsgs::_rc_aux2_type arg)
  {
    msg_.rc_aux2 = std::move(arg);
    return Init_SwiftMsgs_rc_aux3(msg_);
  }

private:
  ::swift_msgs::msg::SwiftMsgs msg_;
};

class Init_SwiftMsgs_rc_aux1
{
public:
  explicit Init_SwiftMsgs_rc_aux1(::swift_msgs::msg::SwiftMsgs & msg)
  : msg_(msg)
  {}
  Init_SwiftMsgs_rc_aux2 rc_aux1(::swift_msgs::msg::SwiftMsgs::_rc_aux1_type arg)
  {
    msg_.rc_aux1 = std::move(arg);
    return Init_SwiftMsgs_rc_aux2(msg_);
  }

private:
  ::swift_msgs::msg::SwiftMsgs msg_;
};

class Init_SwiftMsgs_rc_throttle
{
public:
  explicit Init_SwiftMsgs_rc_throttle(::swift_msgs::msg::SwiftMsgs & msg)
  : msg_(msg)
  {}
  Init_SwiftMsgs_rc_aux1 rc_throttle(::swift_msgs::msg::SwiftMsgs::_rc_throttle_type arg)
  {
    msg_.rc_throttle = std::move(arg);
    return Init_SwiftMsgs_rc_aux1(msg_);
  }

private:
  ::swift_msgs::msg::SwiftMsgs msg_;
};

class Init_SwiftMsgs_rc_yaw
{
public:
  explicit Init_SwiftMsgs_rc_yaw(::swift_msgs::msg::SwiftMsgs & msg)
  : msg_(msg)
  {}
  Init_SwiftMsgs_rc_throttle rc_yaw(::swift_msgs::msg::SwiftMsgs::_rc_yaw_type arg)
  {
    msg_.rc_yaw = std::move(arg);
    return Init_SwiftMsgs_rc_throttle(msg_);
  }

private:
  ::swift_msgs::msg::SwiftMsgs msg_;
};

class Init_SwiftMsgs_rc_pitch
{
public:
  explicit Init_SwiftMsgs_rc_pitch(::swift_msgs::msg::SwiftMsgs & msg)
  : msg_(msg)
  {}
  Init_SwiftMsgs_rc_yaw rc_pitch(::swift_msgs::msg::SwiftMsgs::_rc_pitch_type arg)
  {
    msg_.rc_pitch = std::move(arg);
    return Init_SwiftMsgs_rc_yaw(msg_);
  }

private:
  ::swift_msgs::msg::SwiftMsgs msg_;
};

class Init_SwiftMsgs_rc_roll
{
public:
  Init_SwiftMsgs_rc_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SwiftMsgs_rc_pitch rc_roll(::swift_msgs::msg::SwiftMsgs::_rc_roll_type arg)
  {
    msg_.rc_roll = std::move(arg);
    return Init_SwiftMsgs_rc_pitch(msg_);
  }

private:
  ::swift_msgs::msg::SwiftMsgs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swift_msgs::msg::SwiftMsgs>()
{
  return swift_msgs::msg::builder::Init_SwiftMsgs_rc_roll();
}

}  // namespace swift_msgs

#endif  // SWIFT_MSGS__MSG__DETAIL__SWIFT_MSGS__BUILDER_HPP_
