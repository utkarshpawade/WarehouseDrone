// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mav_state_machine_msgs:srv/RunTaskService.idl
// generated code does not contain a copyright notice

#ifndef MAV_STATE_MACHINE_MSGS__SRV__DETAIL__RUN_TASK_SERVICE__STRUCT_HPP_
#define MAV_STATE_MACHINE_MSGS__SRV__DETAIL__RUN_TASK_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mav_state_machine_msgs__srv__RunTaskService_Request __attribute__((deprecated))
#else
# define DEPRECATED__mav_state_machine_msgs__srv__RunTaskService_Request __declspec(deprecated)
#endif

namespace mav_state_machine_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RunTaskService_Request_
{
  using Type = RunTaskService_Request_<ContainerAllocator>;

  explicit RunTaskService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_name = "";
      this->start = false;
    }
  }

  explicit RunTaskService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_name = "";
      this->start = false;
    }
  }

  // field types and members
  using _task_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_name_type task_name;
  using _start_type =
    bool;
  _start_type start;

  // setters for named parameter idiom
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
    mav_state_machine_msgs::srv::RunTaskService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mav_state_machine_msgs::srv::RunTaskService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mav_state_machine_msgs::srv::RunTaskService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mav_state_machine_msgs::srv::RunTaskService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mav_state_machine_msgs::srv::RunTaskService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mav_state_machine_msgs::srv::RunTaskService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mav_state_machine_msgs::srv::RunTaskService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mav_state_machine_msgs::srv::RunTaskService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mav_state_machine_msgs::srv::RunTaskService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mav_state_machine_msgs::srv::RunTaskService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mav_state_machine_msgs__srv__RunTaskService_Request
    std::shared_ptr<mav_state_machine_msgs::srv::RunTaskService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mav_state_machine_msgs__srv__RunTaskService_Request
    std::shared_ptr<mav_state_machine_msgs::srv::RunTaskService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RunTaskService_Request_ & other) const
  {
    if (this->task_name != other.task_name) {
      return false;
    }
    if (this->start != other.start) {
      return false;
    }
    return true;
  }
  bool operator!=(const RunTaskService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RunTaskService_Request_

// alias to use template instance with default allocator
using RunTaskService_Request =
  mav_state_machine_msgs::srv::RunTaskService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mav_state_machine_msgs


#ifndef _WIN32
# define DEPRECATED__mav_state_machine_msgs__srv__RunTaskService_Response __attribute__((deprecated))
#else
# define DEPRECATED__mav_state_machine_msgs__srv__RunTaskService_Response __declspec(deprecated)
#endif

namespace mav_state_machine_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RunTaskService_Response_
{
  using Type = RunTaskService_Response_<ContainerAllocator>;

  explicit RunTaskService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit RunTaskService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mav_state_machine_msgs::srv::RunTaskService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mav_state_machine_msgs::srv::RunTaskService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mav_state_machine_msgs::srv::RunTaskService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mav_state_machine_msgs::srv::RunTaskService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mav_state_machine_msgs::srv::RunTaskService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mav_state_machine_msgs::srv::RunTaskService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mav_state_machine_msgs::srv::RunTaskService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mav_state_machine_msgs::srv::RunTaskService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mav_state_machine_msgs::srv::RunTaskService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mav_state_machine_msgs::srv::RunTaskService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mav_state_machine_msgs__srv__RunTaskService_Response
    std::shared_ptr<mav_state_machine_msgs::srv::RunTaskService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mav_state_machine_msgs__srv__RunTaskService_Response
    std::shared_ptr<mav_state_machine_msgs::srv::RunTaskService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RunTaskService_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const RunTaskService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RunTaskService_Response_

// alias to use template instance with default allocator
using RunTaskService_Response =
  mav_state_machine_msgs::srv::RunTaskService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mav_state_machine_msgs

namespace mav_state_machine_msgs
{

namespace srv
{

struct RunTaskService
{
  using Request = mav_state_machine_msgs::srv::RunTaskService_Request;
  using Response = mav_state_machine_msgs::srv::RunTaskService_Response;
};

}  // namespace srv

}  // namespace mav_state_machine_msgs

#endif  // MAV_STATE_MACHINE_MSGS__SRV__DETAIL__RUN_TASK_SERVICE__STRUCT_HPP_
