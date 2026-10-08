// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rysen_apexhand_msgs:srv/SetDeviceIPAddress.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_DEVICE_IP_ADDRESS__STRUCT_HPP_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_DEVICE_IP_ADDRESS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rysen_apexhand_msgs__srv__SetDeviceIPAddress_Request __attribute__((deprecated))
#else
# define DEPRECATED__rysen_apexhand_msgs__srv__SetDeviceIPAddress_Request __declspec(deprecated)
#endif

namespace rysen_apexhand_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetDeviceIPAddress_Request_
{
  using Type = SetDeviceIPAddress_Request_<ContainerAllocator>;

  explicit SetDeviceIPAddress_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->original_ip = "";
      this->new_ip = "";
    }
  }

  explicit SetDeviceIPAddress_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : original_ip(_alloc),
    new_ip(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->original_ip = "";
      this->new_ip = "";
    }
  }

  // field types and members
  using _original_ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _original_ip_type original_ip;
  using _new_ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _new_ip_type new_ip;

  // setters for named parameter idiom
  Type & set__original_ip(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->original_ip = _arg;
    return *this;
  }
  Type & set__new_ip(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->new_ip = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rysen_apexhand_msgs__srv__SetDeviceIPAddress_Request
    std::shared_ptr<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rysen_apexhand_msgs__srv__SetDeviceIPAddress_Request
    std::shared_ptr<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetDeviceIPAddress_Request_ & other) const
  {
    if (this->original_ip != other.original_ip) {
      return false;
    }
    if (this->new_ip != other.new_ip) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetDeviceIPAddress_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetDeviceIPAddress_Request_

// alias to use template instance with default allocator
using SetDeviceIPAddress_Request =
  rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rysen_apexhand_msgs


#ifndef _WIN32
# define DEPRECATED__rysen_apexhand_msgs__srv__SetDeviceIPAddress_Response __attribute__((deprecated))
#else
# define DEPRECATED__rysen_apexhand_msgs__srv__SetDeviceIPAddress_Response __declspec(deprecated)
#endif

namespace rysen_apexhand_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetDeviceIPAddress_Response_
{
  using Type = SetDeviceIPAddress_Response_<ContainerAllocator>;

  explicit SetDeviceIPAddress_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetDeviceIPAddress_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rysen_apexhand_msgs__srv__SetDeviceIPAddress_Response
    std::shared_ptr<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rysen_apexhand_msgs__srv__SetDeviceIPAddress_Response
    std::shared_ptr<rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetDeviceIPAddress_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetDeviceIPAddress_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetDeviceIPAddress_Response_

// alias to use template instance with default allocator
using SetDeviceIPAddress_Response =
  rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rysen_apexhand_msgs

namespace rysen_apexhand_msgs
{

namespace srv
{

struct SetDeviceIPAddress
{
  using Request = rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request;
  using Response = rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response;
};

}  // namespace srv

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_DEVICE_IP_ADDRESS__STRUCT_HPP_
