// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mav_state_machine_msgs:srv/RunTaskService.idl
// generated code does not contain a copyright notice

#ifndef MAV_STATE_MACHINE_MSGS__SRV__DETAIL__RUN_TASK_SERVICE__TRAITS_HPP_
#define MAV_STATE_MACHINE_MSGS__SRV__DETAIL__RUN_TASK_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mav_state_machine_msgs/srv/detail/run_task_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mav_state_machine_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RunTaskService_Request & msg,
  std::ostream & out)
{
  out << "{";
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
  const RunTaskService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const RunTaskService_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mav_state_machine_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mav_state_machine_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mav_state_machine_msgs::srv::RunTaskService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mav_state_machine_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mav_state_machine_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mav_state_machine_msgs::srv::RunTaskService_Request & msg)
{
  return mav_state_machine_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mav_state_machine_msgs::srv::RunTaskService_Request>()
{
  return "mav_state_machine_msgs::srv::RunTaskService_Request";
}

template<>
inline const char * name<mav_state_machine_msgs::srv::RunTaskService_Request>()
{
  return "mav_state_machine_msgs/srv/RunTaskService_Request";
}

template<>
struct has_fixed_size<mav_state_machine_msgs::srv::RunTaskService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mav_state_machine_msgs::srv::RunTaskService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mav_state_machine_msgs::srv::RunTaskService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mav_state_machine_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RunTaskService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RunTaskService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RunTaskService_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mav_state_machine_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mav_state_machine_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mav_state_machine_msgs::srv::RunTaskService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mav_state_machine_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mav_state_machine_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mav_state_machine_msgs::srv::RunTaskService_Response & msg)
{
  return mav_state_machine_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mav_state_machine_msgs::srv::RunTaskService_Response>()
{
  return "mav_state_machine_msgs::srv::RunTaskService_Response";
}

template<>
inline const char * name<mav_state_machine_msgs::srv::RunTaskService_Response>()
{
  return "mav_state_machine_msgs/srv/RunTaskService_Response";
}

template<>
struct has_fixed_size<mav_state_machine_msgs::srv::RunTaskService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mav_state_machine_msgs::srv::RunTaskService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mav_state_machine_msgs::srv::RunTaskService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mav_state_machine_msgs::srv::RunTaskService>()
{
  return "mav_state_machine_msgs::srv::RunTaskService";
}

template<>
inline const char * name<mav_state_machine_msgs::srv::RunTaskService>()
{
  return "mav_state_machine_msgs/srv/RunTaskService";
}

template<>
struct has_fixed_size<mav_state_machine_msgs::srv::RunTaskService>
  : std::integral_constant<
    bool,
    has_fixed_size<mav_state_machine_msgs::srv::RunTaskService_Request>::value &&
    has_fixed_size<mav_state_machine_msgs::srv::RunTaskService_Response>::value
  >
{
};

template<>
struct has_bounded_size<mav_state_machine_msgs::srv::RunTaskService>
  : std::integral_constant<
    bool,
    has_bounded_size<mav_state_machine_msgs::srv::RunTaskService_Request>::value &&
    has_bounded_size<mav_state_machine_msgs::srv::RunTaskService_Response>::value
  >
{
};

template<>
struct is_service<mav_state_machine_msgs::srv::RunTaskService>
  : std::true_type
{
};

template<>
struct is_service_request<mav_state_machine_msgs::srv::RunTaskService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mav_state_machine_msgs::srv::RunTaskService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MAV_STATE_MACHINE_MSGS__SRV__DETAIL__RUN_TASK_SERVICE__TRAITS_HPP_
