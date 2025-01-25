// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mav_system_msgs:msg/ProcessInfo.idl
// generated code does not contain a copyright notice

#ifndef MAV_SYSTEM_MSGS__MSG__DETAIL__PROCESS_INFO__STRUCT_HPP_
#define MAV_SYSTEM_MSGS__MSG__DETAIL__PROCESS_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mav_system_msgs__msg__ProcessInfo __attribute__((deprecated))
#else
# define DEPRECATED__mav_system_msgs__msg__ProcessInfo __declspec(deprecated)
#endif

namespace mav_system_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ProcessInfo_
{
  using Type = ProcessInfo_<ContainerAllocator>;

  explicit ProcessInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pid = 0ul;
      this->name = "";
      this->username = "";
      this->cpu_percent = 0.0f;
    }
  }

  explicit ProcessInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    username(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pid = 0ul;
      this->name = "";
      this->username = "";
      this->cpu_percent = 0.0f;
    }
  }

  // field types and members
  using _pid_type =
    uint32_t;
  _pid_type pid;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _username_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _username_type username;
  using _cpu_percent_type =
    float;
  _cpu_percent_type cpu_percent;

  // setters for named parameter idiom
  Type & set__pid(
    const uint32_t & _arg)
  {
    this->pid = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__username(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->username = _arg;
    return *this;
  }
  Type & set__cpu_percent(
    const float & _arg)
  {
    this->cpu_percent = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mav_system_msgs::msg::ProcessInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const mav_system_msgs::msg::ProcessInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mav_system_msgs::msg::ProcessInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mav_system_msgs::msg::ProcessInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mav_system_msgs::msg::ProcessInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mav_system_msgs::msg::ProcessInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mav_system_msgs::msg::ProcessInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mav_system_msgs::msg::ProcessInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mav_system_msgs::msg::ProcessInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mav_system_msgs::msg::ProcessInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mav_system_msgs__msg__ProcessInfo
    std::shared_ptr<mav_system_msgs::msg::ProcessInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mav_system_msgs__msg__ProcessInfo
    std::shared_ptr<mav_system_msgs::msg::ProcessInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessInfo_ & other) const
  {
    if (this->pid != other.pid) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->username != other.username) {
      return false;
    }
    if (this->cpu_percent != other.cpu_percent) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessInfo_

// alias to use template instance with default allocator
using ProcessInfo =
  mav_system_msgs::msg::ProcessInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mav_system_msgs

#endif  // MAV_SYSTEM_MSGS__MSG__DETAIL__PROCESS_INFO__STRUCT_HPP_
