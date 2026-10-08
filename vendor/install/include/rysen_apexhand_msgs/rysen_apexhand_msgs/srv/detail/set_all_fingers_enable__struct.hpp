// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rysen_apexhand_msgs:srv/SetAllFingersEnable.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_ALL_FINGERS_ENABLE__STRUCT_HPP_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_ALL_FINGERS_ENABLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rysen_apexhand_msgs__srv__SetAllFingersEnable_Request __attribute__((deprecated))
#else
# define DEPRECATED__rysen_apexhand_msgs__srv__SetAllFingersEnable_Request __declspec(deprecated)
#endif

namespace rysen_apexhand_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetAllFingersEnable_Request_
{
  using Type = SetAllFingersEnable_Request_<ContainerAllocator>;

  explicit SetAllFingersEnable_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ip = "";
      this->enable = false;
    }
  }

  explicit SetAllFingersEnable_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ip(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ip = "";
      this->enable = false;
    }
  }

  // field types and members
  using _ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ip_type ip;
  using _enable_type =
    bool;
  _enable_type enable;

  // setters for named parameter idiom
  Type & set__ip(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ip = _arg;
    return *this;
  }
  Type & set__enable(
    const bool & _arg)
  {
    this->enable = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rysen_apexhand_msgs::srv::SetAllFingersEnable_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rysen_apexhand_msgs::srv::SetAllFingersEnable_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::srv::SetAllFingersEnable_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::srv::SetAllFingersEnable_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::srv::SetAllFingersEnable_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::srv::SetAllFingersEnable_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::srv::SetAllFingersEnable_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::srv::SetAllFingersEnable_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::srv::SetAllFingersEnable_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::srv::SetAllFingersEnable_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rysen_apexhand_msgs__srv__SetAllFingersEnable_Request
    std::shared_ptr<rysen_apexhand_msgs::srv::SetAllFingersEnable_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rysen_apexhand_msgs__srv__SetAllFingersEnable_Request
    std::shared_ptr<rysen_apexhand_msgs::srv::SetAllFingersEnable_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetAllFingersEnable_Request_ & other) const
  {
    if (this->ip != other.ip) {
      return false;
    }
    if (this->enable != other.enable) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetAllFingersEnable_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetAllFingersEnable_Request_

// alias to use template instance with default allocator
using SetAllFingersEnable_Request =
  rysen_apexhand_msgs::srv::SetAllFingersEnable_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rysen_apexhand_msgs


#ifndef _WIN32
# define DEPRECATED__rysen_apexhand_msgs__srv__SetAllFingersEnable_Response __attribute__((deprecated))
#else
# define DEPRECATED__rysen_apexhand_msgs__srv__SetAllFingersEnable_Response __declspec(deprecated)
#endif

namespace rysen_apexhand_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetAllFingersEnable_Response_
{
  using Type = SetAllFingersEnable_Response_<ContainerAllocator>;

  explicit SetAllFingersEnable_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetAllFingersEnable_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rysen_apexhand_msgs::srv::SetAllFingersEnable_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rysen_apexhand_msgs::srv::SetAllFingersEnable_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::srv::SetAllFingersEnable_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::srv::SetAllFingersEnable_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::srv::SetAllFingersEnable_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::srv::SetAllFingersEnable_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::srv::SetAllFingersEnable_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::srv::SetAllFingersEnable_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::srv::SetAllFingersEnable_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::srv::SetAllFingersEnable_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rysen_apexhand_msgs__srv__SetAllFingersEnable_Response
    std::shared_ptr<rysen_apexhand_msgs::srv::SetAllFingersEnable_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rysen_apexhand_msgs__srv__SetAllFingersEnable_Response
    std::shared_ptr<rysen_apexhand_msgs::srv::SetAllFingersEnable_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetAllFingersEnable_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetAllFingersEnable_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetAllFingersEnable_Response_

// alias to use template instance with default allocator
using SetAllFingersEnable_Response =
  rysen_apexhand_msgs::srv::SetAllFingersEnable_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rysen_apexhand_msgs

namespace rysen_apexhand_msgs
{

namespace srv
{

struct SetAllFingersEnable
{
  using Request = rysen_apexhand_msgs::srv::SetAllFingersEnable_Request;
  using Response = rysen_apexhand_msgs::srv::SetAllFingersEnable_Response;
};

}  // namespace srv

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_ALL_FINGERS_ENABLE__STRUCT_HPP_
