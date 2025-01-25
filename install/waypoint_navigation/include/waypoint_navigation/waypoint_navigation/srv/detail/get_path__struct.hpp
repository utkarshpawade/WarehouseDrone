// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from waypoint_navigation:srv/GetPath.idl
// generated code does not contain a copyright notice

#ifndef WAYPOINT_NAVIGATION__SRV__DETAIL__GET_PATH__STRUCT_HPP_
#define WAYPOINT_NAVIGATION__SRV__DETAIL__GET_PATH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'start_point'
// Member 'end_point'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__waypoint_navigation__srv__GetPath_Request __attribute__((deprecated))
#else
# define DEPRECATED__waypoint_navigation__srv__GetPath_Request __declspec(deprecated)
#endif

namespace waypoint_navigation
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPath_Request_
{
  using Type = GetPath_Request_<ContainerAllocator>;

  explicit GetPath_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_point(_init),
    end_point(_init)
  {
    (void)_init;
  }

  explicit GetPath_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_point(_alloc, _init),
    end_point(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _start_point_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _start_point_type start_point;
  using _end_point_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _end_point_type end_point;

  // setters for named parameter idiom
  Type & set__start_point(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->start_point = _arg;
    return *this;
  }
  Type & set__end_point(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->end_point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    waypoint_navigation::srv::GetPath_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const waypoint_navigation::srv::GetPath_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<waypoint_navigation::srv::GetPath_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<waypoint_navigation::srv::GetPath_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      waypoint_navigation::srv::GetPath_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<waypoint_navigation::srv::GetPath_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      waypoint_navigation::srv::GetPath_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<waypoint_navigation::srv::GetPath_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<waypoint_navigation::srv::GetPath_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<waypoint_navigation::srv::GetPath_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__waypoint_navigation__srv__GetPath_Request
    std::shared_ptr<waypoint_navigation::srv::GetPath_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__waypoint_navigation__srv__GetPath_Request
    std::shared_ptr<waypoint_navigation::srv::GetPath_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPath_Request_ & other) const
  {
    if (this->start_point != other.start_point) {
      return false;
    }
    if (this->end_point != other.end_point) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPath_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPath_Request_

// alias to use template instance with default allocator
using GetPath_Request =
  waypoint_navigation::srv::GetPath_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace waypoint_navigation


// Include directives for member types
// Member 'path'
#include "geometry_msgs/msg/detail/pose_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__waypoint_navigation__srv__GetPath_Response __attribute__((deprecated))
#else
# define DEPRECATED__waypoint_navigation__srv__GetPath_Response __declspec(deprecated)
#endif

namespace waypoint_navigation
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPath_Response_
{
  using Type = GetPath_Response_<ContainerAllocator>;

  explicit GetPath_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_on_first_path = false;
    }
  }

  explicit GetPath_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_on_first_path = false;
    }
  }

  // field types and members
  using _path_type =
    geometry_msgs::msg::PoseArray_<ContainerAllocator>;
  _path_type path;
  using _is_on_first_path_type =
    bool;
  _is_on_first_path_type is_on_first_path;

  // setters for named parameter idiom
  Type & set__path(
    const geometry_msgs::msg::PoseArray_<ContainerAllocator> & _arg)
  {
    this->path = _arg;
    return *this;
  }
  Type & set__is_on_first_path(
    const bool & _arg)
  {
    this->is_on_first_path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    waypoint_navigation::srv::GetPath_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const waypoint_navigation::srv::GetPath_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<waypoint_navigation::srv::GetPath_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<waypoint_navigation::srv::GetPath_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      waypoint_navigation::srv::GetPath_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<waypoint_navigation::srv::GetPath_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      waypoint_navigation::srv::GetPath_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<waypoint_navigation::srv::GetPath_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<waypoint_navigation::srv::GetPath_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<waypoint_navigation::srv::GetPath_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__waypoint_navigation__srv__GetPath_Response
    std::shared_ptr<waypoint_navigation::srv::GetPath_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__waypoint_navigation__srv__GetPath_Response
    std::shared_ptr<waypoint_navigation::srv::GetPath_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPath_Response_ & other) const
  {
    if (this->path != other.path) {
      return false;
    }
    if (this->is_on_first_path != other.is_on_first_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPath_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPath_Response_

// alias to use template instance with default allocator
using GetPath_Response =
  waypoint_navigation::srv::GetPath_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace waypoint_navigation

namespace waypoint_navigation
{

namespace srv
{

struct GetPath
{
  using Request = waypoint_navigation::srv::GetPath_Request;
  using Response = waypoint_navigation::srv::GetPath_Response;
};

}  // namespace srv

}  // namespace waypoint_navigation

#endif  // WAYPOINT_NAVIGATION__SRV__DETAIL__GET_PATH__STRUCT_HPP_
