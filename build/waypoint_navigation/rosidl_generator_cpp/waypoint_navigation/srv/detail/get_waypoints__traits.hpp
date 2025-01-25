// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from waypoint_navigation:srv/GetWaypoints.idl
// generated code does not contain a copyright notice

#ifndef WAYPOINT_NAVIGATION__SRV__DETAIL__GET_WAYPOINTS__TRAITS_HPP_
#define WAYPOINT_NAVIGATION__SRV__DETAIL__GET_WAYPOINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "waypoint_navigation/srv/detail/get_waypoints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace waypoint_navigation
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetWaypoints_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: get_waypoints
  {
    out << "get_waypoints: ";
    rosidl_generator_traits::value_to_yaml(msg.get_waypoints, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetWaypoints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: get_waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "get_waypoints: ";
    rosidl_generator_traits::value_to_yaml(msg.get_waypoints, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetWaypoints_Request & msg, bool use_flow_style = false)
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

}  // namespace waypoint_navigation

namespace rosidl_generator_traits
{

[[deprecated("use waypoint_navigation::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const waypoint_navigation::srv::GetWaypoints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  waypoint_navigation::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use waypoint_navigation::srv::to_yaml() instead")]]
inline std::string to_yaml(const waypoint_navigation::srv::GetWaypoints_Request & msg)
{
  return waypoint_navigation::srv::to_yaml(msg);
}

template<>
inline const char * data_type<waypoint_navigation::srv::GetWaypoints_Request>()
{
  return "waypoint_navigation::srv::GetWaypoints_Request";
}

template<>
inline const char * name<waypoint_navigation::srv::GetWaypoints_Request>()
{
  return "waypoint_navigation/srv/GetWaypoints_Request";
}

template<>
struct has_fixed_size<waypoint_navigation::srv::GetWaypoints_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<waypoint_navigation::srv::GetWaypoints_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<waypoint_navigation::srv::GetWaypoints_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'waypoints'
#include "geometry_msgs/msg/detail/pose_array__traits.hpp"

namespace waypoint_navigation
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetWaypoints_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: waypoints
  {
    out << "waypoints: ";
    to_flow_style_yaml(msg.waypoints, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetWaypoints_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoints:\n";
    to_block_style_yaml(msg.waypoints, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetWaypoints_Response & msg, bool use_flow_style = false)
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

}  // namespace waypoint_navigation

namespace rosidl_generator_traits
{

[[deprecated("use waypoint_navigation::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const waypoint_navigation::srv::GetWaypoints_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  waypoint_navigation::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use waypoint_navigation::srv::to_yaml() instead")]]
inline std::string to_yaml(const waypoint_navigation::srv::GetWaypoints_Response & msg)
{
  return waypoint_navigation::srv::to_yaml(msg);
}

template<>
inline const char * data_type<waypoint_navigation::srv::GetWaypoints_Response>()
{
  return "waypoint_navigation::srv::GetWaypoints_Response";
}

template<>
inline const char * name<waypoint_navigation::srv::GetWaypoints_Response>()
{
  return "waypoint_navigation/srv/GetWaypoints_Response";
}

template<>
struct has_fixed_size<waypoint_navigation::srv::GetWaypoints_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseArray>::value> {};

template<>
struct has_bounded_size<waypoint_navigation::srv::GetWaypoints_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseArray>::value> {};

template<>
struct is_message<waypoint_navigation::srv::GetWaypoints_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<waypoint_navigation::srv::GetWaypoints>()
{
  return "waypoint_navigation::srv::GetWaypoints";
}

template<>
inline const char * name<waypoint_navigation::srv::GetWaypoints>()
{
  return "waypoint_navigation/srv/GetWaypoints";
}

template<>
struct has_fixed_size<waypoint_navigation::srv::GetWaypoints>
  : std::integral_constant<
    bool,
    has_fixed_size<waypoint_navigation::srv::GetWaypoints_Request>::value &&
    has_fixed_size<waypoint_navigation::srv::GetWaypoints_Response>::value
  >
{
};

template<>
struct has_bounded_size<waypoint_navigation::srv::GetWaypoints>
  : std::integral_constant<
    bool,
    has_bounded_size<waypoint_navigation::srv::GetWaypoints_Request>::value &&
    has_bounded_size<waypoint_navigation::srv::GetWaypoints_Response>::value
  >
{
};

template<>
struct is_service<waypoint_navigation::srv::GetWaypoints>
  : std::true_type
{
};

template<>
struct is_service_request<waypoint_navigation::srv::GetWaypoints_Request>
  : std::true_type
{
};

template<>
struct is_service_response<waypoint_navigation::srv::GetWaypoints_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WAYPOINT_NAVIGATION__SRV__DETAIL__GET_WAYPOINTS__TRAITS_HPP_
