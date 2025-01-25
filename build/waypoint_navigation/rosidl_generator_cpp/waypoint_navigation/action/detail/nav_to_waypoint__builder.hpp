// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from waypoint_navigation:action/NavToWaypoint.idl
// generated code does not contain a copyright notice

#ifndef WAYPOINT_NAVIGATION__ACTION__DETAIL__NAV_TO_WAYPOINT__BUILDER_HPP_
#define WAYPOINT_NAVIGATION__ACTION__DETAIL__NAV_TO_WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "waypoint_navigation/action/detail/nav_to_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace waypoint_navigation
{

namespace action
{

namespace builder
{

class Init_NavToWaypoint_Goal_waypoint
{
public:
  Init_NavToWaypoint_Goal_waypoint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::waypoint_navigation::action::NavToWaypoint_Goal waypoint(::waypoint_navigation::action::NavToWaypoint_Goal::_waypoint_type arg)
  {
    msg_.waypoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::waypoint_navigation::action::NavToWaypoint_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::waypoint_navigation::action::NavToWaypoint_Goal>()
{
  return waypoint_navigation::action::builder::Init_NavToWaypoint_Goal_waypoint();
}

}  // namespace waypoint_navigation


namespace waypoint_navigation
{

namespace action
{

namespace builder
{

class Init_NavToWaypoint_Result_hov_time
{
public:
  Init_NavToWaypoint_Result_hov_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::waypoint_navigation::action::NavToWaypoint_Result hov_time(::waypoint_navigation::action::NavToWaypoint_Result::_hov_time_type arg)
  {
    msg_.hov_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::waypoint_navigation::action::NavToWaypoint_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::waypoint_navigation::action::NavToWaypoint_Result>()
{
  return waypoint_navigation::action::builder::Init_NavToWaypoint_Result_hov_time();
}

}  // namespace waypoint_navigation


namespace waypoint_navigation
{

namespace action
{

namespace builder
{

class Init_NavToWaypoint_Feedback_current_waypoint
{
public:
  Init_NavToWaypoint_Feedback_current_waypoint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::waypoint_navigation::action::NavToWaypoint_Feedback current_waypoint(::waypoint_navigation::action::NavToWaypoint_Feedback::_current_waypoint_type arg)
  {
    msg_.current_waypoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::waypoint_navigation::action::NavToWaypoint_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::waypoint_navigation::action::NavToWaypoint_Feedback>()
{
  return waypoint_navigation::action::builder::Init_NavToWaypoint_Feedback_current_waypoint();
}

}  // namespace waypoint_navigation


namespace waypoint_navigation
{

namespace action
{

namespace builder
{

class Init_NavToWaypoint_SendGoal_Request_goal
{
public:
  explicit Init_NavToWaypoint_SendGoal_Request_goal(::waypoint_navigation::action::NavToWaypoint_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::waypoint_navigation::action::NavToWaypoint_SendGoal_Request goal(::waypoint_navigation::action::NavToWaypoint_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::waypoint_navigation::action::NavToWaypoint_SendGoal_Request msg_;
};

class Init_NavToWaypoint_SendGoal_Request_goal_id
{
public:
  Init_NavToWaypoint_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavToWaypoint_SendGoal_Request_goal goal_id(::waypoint_navigation::action::NavToWaypoint_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavToWaypoint_SendGoal_Request_goal(msg_);
  }

private:
  ::waypoint_navigation::action::NavToWaypoint_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::waypoint_navigation::action::NavToWaypoint_SendGoal_Request>()
{
  return waypoint_navigation::action::builder::Init_NavToWaypoint_SendGoal_Request_goal_id();
}

}  // namespace waypoint_navigation


namespace waypoint_navigation
{

namespace action
{

namespace builder
{

class Init_NavToWaypoint_SendGoal_Response_stamp
{
public:
  explicit Init_NavToWaypoint_SendGoal_Response_stamp(::waypoint_navigation::action::NavToWaypoint_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::waypoint_navigation::action::NavToWaypoint_SendGoal_Response stamp(::waypoint_navigation::action::NavToWaypoint_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::waypoint_navigation::action::NavToWaypoint_SendGoal_Response msg_;
};

class Init_NavToWaypoint_SendGoal_Response_accepted
{
public:
  Init_NavToWaypoint_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavToWaypoint_SendGoal_Response_stamp accepted(::waypoint_navigation::action::NavToWaypoint_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_NavToWaypoint_SendGoal_Response_stamp(msg_);
  }

private:
  ::waypoint_navigation::action::NavToWaypoint_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::waypoint_navigation::action::NavToWaypoint_SendGoal_Response>()
{
  return waypoint_navigation::action::builder::Init_NavToWaypoint_SendGoal_Response_accepted();
}

}  // namespace waypoint_navigation


namespace waypoint_navigation
{

namespace action
{

namespace builder
{

class Init_NavToWaypoint_GetResult_Request_goal_id
{
public:
  Init_NavToWaypoint_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::waypoint_navigation::action::NavToWaypoint_GetResult_Request goal_id(::waypoint_navigation::action::NavToWaypoint_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::waypoint_navigation::action::NavToWaypoint_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::waypoint_navigation::action::NavToWaypoint_GetResult_Request>()
{
  return waypoint_navigation::action::builder::Init_NavToWaypoint_GetResult_Request_goal_id();
}

}  // namespace waypoint_navigation


namespace waypoint_navigation
{

namespace action
{

namespace builder
{

class Init_NavToWaypoint_GetResult_Response_result
{
public:
  explicit Init_NavToWaypoint_GetResult_Response_result(::waypoint_navigation::action::NavToWaypoint_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::waypoint_navigation::action::NavToWaypoint_GetResult_Response result(::waypoint_navigation::action::NavToWaypoint_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::waypoint_navigation::action::NavToWaypoint_GetResult_Response msg_;
};

class Init_NavToWaypoint_GetResult_Response_status
{
public:
  Init_NavToWaypoint_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavToWaypoint_GetResult_Response_result status(::waypoint_navigation::action::NavToWaypoint_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_NavToWaypoint_GetResult_Response_result(msg_);
  }

private:
  ::waypoint_navigation::action::NavToWaypoint_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::waypoint_navigation::action::NavToWaypoint_GetResult_Response>()
{
  return waypoint_navigation::action::builder::Init_NavToWaypoint_GetResult_Response_status();
}

}  // namespace waypoint_navigation


namespace waypoint_navigation
{

namespace action
{

namespace builder
{

class Init_NavToWaypoint_FeedbackMessage_feedback
{
public:
  explicit Init_NavToWaypoint_FeedbackMessage_feedback(::waypoint_navigation::action::NavToWaypoint_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::waypoint_navigation::action::NavToWaypoint_FeedbackMessage feedback(::waypoint_navigation::action::NavToWaypoint_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::waypoint_navigation::action::NavToWaypoint_FeedbackMessage msg_;
};

class Init_NavToWaypoint_FeedbackMessage_goal_id
{
public:
  Init_NavToWaypoint_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavToWaypoint_FeedbackMessage_feedback goal_id(::waypoint_navigation::action::NavToWaypoint_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_NavToWaypoint_FeedbackMessage_feedback(msg_);
  }

private:
  ::waypoint_navigation::action::NavToWaypoint_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::waypoint_navigation::action::NavToWaypoint_FeedbackMessage>()
{
  return waypoint_navigation::action::builder::Init_NavToWaypoint_FeedbackMessage_goal_id();
}

}  // namespace waypoint_navigation

#endif  // WAYPOINT_NAVIGATION__ACTION__DETAIL__NAV_TO_WAYPOINT__BUILDER_HPP_
