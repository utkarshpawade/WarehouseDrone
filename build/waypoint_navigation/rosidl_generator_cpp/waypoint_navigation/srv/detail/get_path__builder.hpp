// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from waypoint_navigation:srv/GetPath.idl
// generated code does not contain a copyright notice

#ifndef WAYPOINT_NAVIGATION__SRV__DETAIL__GET_PATH__BUILDER_HPP_
#define WAYPOINT_NAVIGATION__SRV__DETAIL__GET_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "waypoint_navigation/srv/detail/get_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace waypoint_navigation
{

namespace srv
{

namespace builder
{

class Init_GetPath_Request_end_point
{
public:
  explicit Init_GetPath_Request_end_point(::waypoint_navigation::srv::GetPath_Request & msg)
  : msg_(msg)
  {}
  ::waypoint_navigation::srv::GetPath_Request end_point(::waypoint_navigation::srv::GetPath_Request::_end_point_type arg)
  {
    msg_.end_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::waypoint_navigation::srv::GetPath_Request msg_;
};

class Init_GetPath_Request_start_point
{
public:
  Init_GetPath_Request_start_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPath_Request_end_point start_point(::waypoint_navigation::srv::GetPath_Request::_start_point_type arg)
  {
    msg_.start_point = std::move(arg);
    return Init_GetPath_Request_end_point(msg_);
  }

private:
  ::waypoint_navigation::srv::GetPath_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::waypoint_navigation::srv::GetPath_Request>()
{
  return waypoint_navigation::srv::builder::Init_GetPath_Request_start_point();
}

}  // namespace waypoint_navigation


namespace waypoint_navigation
{

namespace srv
{

namespace builder
{

class Init_GetPath_Response_is_on_first_path
{
public:
  explicit Init_GetPath_Response_is_on_first_path(::waypoint_navigation::srv::GetPath_Response & msg)
  : msg_(msg)
  {}
  ::waypoint_navigation::srv::GetPath_Response is_on_first_path(::waypoint_navigation::srv::GetPath_Response::_is_on_first_path_type arg)
  {
    msg_.is_on_first_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::waypoint_navigation::srv::GetPath_Response msg_;
};

class Init_GetPath_Response_path
{
public:
  Init_GetPath_Response_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPath_Response_is_on_first_path path(::waypoint_navigation::srv::GetPath_Response::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_GetPath_Response_is_on_first_path(msg_);
  }

private:
  ::waypoint_navigation::srv::GetPath_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::waypoint_navigation::srv::GetPath_Response>()
{
  return waypoint_navigation::srv::builder::Init_GetPath_Response_path();
}

}  // namespace waypoint_navigation

#endif  // WAYPOINT_NAVIGATION__SRV__DETAIL__GET_PATH__BUILDER_HPP_
