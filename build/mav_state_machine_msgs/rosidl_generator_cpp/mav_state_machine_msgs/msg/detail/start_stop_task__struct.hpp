// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mav_state_machine_msgs:msg/StartStopTask.idl
// generated code does not contain a copyright notice

#ifndef MAV_STATE_MACHINE_MSGS__MSG__DETAIL__START_STOP_TASK__STRUCT_HPP_
#define MAV_STATE_MACHINE_MSGS__MSG__DETAIL__START_STOP_TASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mav_state_machine_msgs__msg__StartStopTask __attribute__((deprecated))
#else
# define DEPRECATED__mav_state_machine_msgs__msg__StartStopTask __declspec(deprecated)
#endif

namespace mav_state_machine_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StartStopTask_
{
  using Type = StartStopTask_<ContainerAllocator>;

  explicit StartStopTask_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_name = "";
      this->start = false;
    }
  }

  explicit StartStopTask_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    task_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_name = "";
      this->start = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _task_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_name_type task_name;
  using _start_type =
    bool;
  _start_type start;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__task_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_name = _arg;
    return *this;
  }
  Type & set__start(
    const bool & _arg)
  {
    this->start = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mav_state_machine_msgs::msg::StartStopTask_<ContainerAllocator> *;
  using ConstRawPtr =
    const mav_state_machine_msgs::msg::StartStopTask_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mav_state_machine_msgs::msg::StartStopTask_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mav_state_machine_msgs::msg::StartStopTask_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mav_state_machine_msgs::msg::StartStopTask_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mav_state_machine_msgs::msg::StartStopTask_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mav_state_machine_msgs::msg::StartStopTask_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mav_state_machine_msgs::msg::StartStopTask_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mav_state_machine_msgs::msg::StartStopTask_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mav_state_machine_msgs::msg::StartStopTask_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mav_state_machine_msgs__msg__StartStopTask
    std::shared_ptr<mav_state_machine_msgs::msg::StartStopTask_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mav_state_machine_msgs__msg__StartStopTask
    std::shared_ptr<mav_state_machine_msgs::msg::StartStopTask_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartStopTask_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->task_name != other.task_name) {
      return false;
    }
    if (this->start != other.start) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartStopTask_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartStopTask_

// alias to use template instance with default allocator
using StartStopTask =
  mav_state_machine_msgs::msg::StartStopTask_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mav_state_machine_msgs

#endif  // MAV_STATE_MACHINE_MSGS__MSG__DETAIL__START_STOP_TASK__STRUCT_HPP_
