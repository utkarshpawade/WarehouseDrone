// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mav_planning_msgs:srv/PolygonService.idl
// generated code does not contain a copyright notice

#ifndef MAV_PLANNING_MSGS__SRV__DETAIL__POLYGON_SERVICE__TRAITS_HPP_
#define MAV_PLANNING_MSGS__SRV__DETAIL__POLYGON_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mav_planning_msgs/srv/detail/polygon_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'polygon'
#include "mav_planning_msgs/msg/detail/polygon_with_holes_stamped__traits.hpp"

namespace mav_planning_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PolygonService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: polygon
  {
    out << "polygon: ";
    to_flow_style_yaml(msg.polygon, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PolygonService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: polygon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "polygon:\n";
    to_block_style_yaml(msg.polygon, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PolygonService_Request & msg, bool use_flow_style = false)
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

}  // namespace mav_planning_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mav_planning_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mav_planning_msgs::srv::PolygonService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mav_planning_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mav_planning_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mav_planning_msgs::srv::PolygonService_Request & msg)
{
  return mav_planning_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mav_planning_msgs::srv::PolygonService_Request>()
{
  return "mav_planning_msgs::srv::PolygonService_Request";
}

template<>
inline const char * name<mav_planning_msgs::srv::PolygonService_Request>()
{
  return "mav_planning_msgs/srv/PolygonService_Request";
}

template<>
struct has_fixed_size<mav_planning_msgs::srv::PolygonService_Request>
  : std::integral_constant<bool, has_fixed_size<mav_planning_msgs::msg::PolygonWithHolesStamped>::value> {};

template<>
struct has_bounded_size<mav_planning_msgs::srv::PolygonService_Request>
  : std::integral_constant<bool, has_bounded_size<mav_planning_msgs::msg::PolygonWithHolesStamped>::value> {};

template<>
struct is_message<mav_planning_msgs::srv::PolygonService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mav_planning_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PolygonService_Response & msg,
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
  const PolygonService_Response & msg,
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

inline std::string to_yaml(const PolygonService_Response & msg, bool use_flow_style = false)
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

}  // namespace mav_planning_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mav_planning_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mav_planning_msgs::srv::PolygonService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mav_planning_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mav_planning_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mav_planning_msgs::srv::PolygonService_Response & msg)
{
  return mav_planning_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mav_planning_msgs::srv::PolygonService_Response>()
{
  return "mav_planning_msgs::srv::PolygonService_Response";
}

template<>
inline const char * name<mav_planning_msgs::srv::PolygonService_Response>()
{
  return "mav_planning_msgs/srv/PolygonService_Response";
}

template<>
struct has_fixed_size<mav_planning_msgs::srv::PolygonService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mav_planning_msgs::srv::PolygonService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mav_planning_msgs::srv::PolygonService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mav_planning_msgs::srv::PolygonService>()
{
  return "mav_planning_msgs::srv::PolygonService";
}

template<>
inline const char * name<mav_planning_msgs::srv::PolygonService>()
{
  return "mav_planning_msgs/srv/PolygonService";
}

template<>
struct has_fixed_size<mav_planning_msgs::srv::PolygonService>
  : std::integral_constant<
    bool,
    has_fixed_size<mav_planning_msgs::srv::PolygonService_Request>::value &&
    has_fixed_size<mav_planning_msgs::srv::PolygonService_Response>::value
  >
{
};

template<>
struct has_bounded_size<mav_planning_msgs::srv::PolygonService>
  : std::integral_constant<
    bool,
    has_bounded_size<mav_planning_msgs::srv::PolygonService_Request>::value &&
    has_bounded_size<mav_planning_msgs::srv::PolygonService_Response>::value
  >
{
};

template<>
struct is_service<mav_planning_msgs::srv::PolygonService>
  : std::true_type
{
};

template<>
struct is_service_request<mav_planning_msgs::srv::PolygonService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mav_planning_msgs::srv::PolygonService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MAV_PLANNING_MSGS__SRV__DETAIL__POLYGON_SERVICE__TRAITS_HPP_
