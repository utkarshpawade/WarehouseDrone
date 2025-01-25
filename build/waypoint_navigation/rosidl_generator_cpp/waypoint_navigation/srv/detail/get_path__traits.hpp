// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from waypoint_navigation:srv/GetPath.idl
// generated code does not contain a copyright notice

#ifndef WAYPOINT_NAVIGATION__SRV__DETAIL__GET_PATH__TRAITS_HPP_
#define WAYPOINT_NAVIGATION__SRV__DETAIL__GET_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "waypoint_navigation/srv/detail/get_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start_point'
// Member 'end_point'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace waypoint_navigation
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPath_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_point
  {
    out << "start_point: ";
    to_flow_style_yaml(msg.start_point, out);
    out << ", ";
  }

  // member: end_point
  {
    out << "end_point: ";
    to_flow_style_yaml(msg.end_point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_point:\n";
    to_block_style_yaml(msg.start_point, out, indentation + 2);
  }

  // member: end_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_point:\n";
    to_block_style_yaml(msg.end_point, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPath_Request & msg, bool use_flow_style = false)
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
  const waypoint_navigation::srv::GetPath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  waypoint_navigation::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use waypoint_navigation::srv::to_yaml() instead")]]
inline std::string to_yaml(const waypoint_navigation::srv::GetPath_Request & msg)
{
  return waypoint_navigation::srv::to_yaml(msg);
}

template<>
inline const char * data_type<waypoint_navigation::srv::GetPath_Request>()
{
  return "waypoint_navigation::srv::GetPath_Request";
}

template<>
inline const char * name<waypoint_navigation::srv::GetPath_Request>()
{
  return "waypoint_navigation/srv/GetPath_Request";
}

template<>
struct has_fixed_size<waypoint_navigation::srv::GetPath_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<waypoint_navigation::srv::GetPath_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<waypoint_navigation::srv::GetPath_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'path'
#include "geometry_msgs/msg/detail/pose_array__traits.hpp"

namespace waypoint_navigation
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPath_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: path
  {
    out << "path: ";
    to_flow_style_yaml(msg.path, out);
    out << ", ";
  }

  // member: is_on_first_path
  {
    out << "is_on_first_path: ";
    rosidl_generator_traits::value_to_yaml(msg.is_on_first_path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path:\n";
    to_block_style_yaml(msg.path, out, indentation + 2);
  }

  // member: is_on_first_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_on_first_path: ";
    rosidl_generator_traits::value_to_yaml(msg.is_on_first_path, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPath_Response & msg, bool use_flow_style = false)
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
  const waypoint_navigation::srv::GetPath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  waypoint_navigation::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use waypoint_navigation::srv::to_yaml() instead")]]
inline std::string to_yaml(const waypoint_navigation::srv::GetPath_Response & msg)
{
  return waypoint_navigation::srv::to_yaml(msg);
}

template<>
inline const char * data_type<waypoint_navigation::srv::GetPath_Response>()
{
  return "waypoint_navigation::srv::GetPath_Response";
}

template<>
inline const char * name<waypoint_navigation::srv::GetPath_Response>()
{
  return "waypoint_navigation/srv/GetPath_Response";
}

template<>
struct has_fixed_size<waypoint_navigation::srv::GetPath_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseArray>::value> {};

template<>
struct has_bounded_size<waypoint_navigation::srv::GetPath_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseArray>::value> {};

template<>
struct is_message<waypoint_navigation::srv::GetPath_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<waypoint_navigation::srv::GetPath>()
{
  return "waypoint_navigation::srv::GetPath";
}

template<>
inline const char * name<waypoint_navigation::srv::GetPath>()
{
  return "waypoint_navigation/srv/GetPath";
}

template<>
struct has_fixed_size<waypoint_navigation::srv::GetPath>
  : std::integral_constant<
    bool,
    has_fixed_size<waypoint_navigation::srv::GetPath_Request>::value &&
    has_fixed_size<waypoint_navigation::srv::GetPath_Response>::value
  >
{
};

template<>
struct has_bounded_size<waypoint_navigation::srv::GetPath>
  : std::integral_constant<
    bool,
    has_bounded_size<waypoint_navigation::srv::GetPath_Request>::value &&
    has_bounded_size<waypoint_navigation::srv::GetPath_Response>::value
  >
{
};

template<>
struct is_service<waypoint_navigation::srv::GetPath>
  : std::true_type
{
};

template<>
struct is_service_request<waypoint_navigation::srv::GetPath_Request>
  : std::true_type
{
};

template<>
struct is_service_response<waypoint_navigation::srv::GetPath_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WAYPOINT_NAVIGATION__SRV__DETAIL__GET_PATH__TRAITS_HPP_
