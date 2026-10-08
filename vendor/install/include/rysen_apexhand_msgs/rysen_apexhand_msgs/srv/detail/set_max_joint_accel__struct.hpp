// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rysen_apexhand_msgs:srv/SetMaxJointAccel.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_MAX_JOINT_ACCEL__STRUCT_HPP_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_MAX_JOINT_ACCEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rysen_apexhand_msgs__srv__SetMaxJointAccel_Request __attribute__((deprecated))
#else
# define DEPRECATED__rysen_apexhand_msgs__srv__SetMaxJointAccel_Request __declspec(deprecated)
#endif

namespace rysen_apexhand_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMaxJointAccel_Request_
{
  using Type = SetMaxJointAccel_Request_<ContainerAllocator>;

  explicit SetMaxJointAccel_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ip = "";
      this->get_only = false;
    }
  }

  explicit SetMaxJointAccel_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ip(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ip = "";
      this->get_only = false;
    }
  }

  // field types and members
  using _ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ip_type ip;
  using _get_only_type =
    bool;
  _get_only_type get_only;
  using _joint_ids_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _joint_ids_type joint_ids;
  using _max_accels_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _max_accels_type max_accels;

  // setters for named parameter idiom
  Type & set__ip(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ip = _arg;
    return *this;
  }
  Type & set__get_only(
    const bool & _arg)
  {
    this->get_only = _arg;
    return *this;
  }
  Type & set__joint_ids(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->joint_ids = _arg;
    return *this;
  }
  Type & set__max_accels(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->max_accels = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rysen_apexhand_msgs::srv::SetMaxJointAccel_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rysen_apexhand_msgs::srv::SetMaxJointAccel_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::srv::SetMaxJointAccel_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::srv::SetMaxJointAccel_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::srv::SetMaxJointAccel_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::srv::SetMaxJointAccel_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::srv::SetMaxJointAccel_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::srv::SetMaxJointAccel_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::srv::SetMaxJointAccel_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::srv::SetMaxJointAccel_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rysen_apexhand_msgs__srv__SetMaxJointAccel_Request
    std::shared_ptr<rysen_apexhand_msgs::srv::SetMaxJointAccel_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rysen_apexhand_msgs__srv__SetMaxJointAccel_Request
    std::shared_ptr<rysen_apexhand_msgs::srv::SetMaxJointAccel_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMaxJointAccel_Request_ & other) const
  {
    if (this->ip != other.ip) {
      return false;
    }
    if (this->get_only != other.get_only) {
      return false;
    }
    if (this->joint_ids != other.joint_ids) {
      return false;
    }
    if (this->max_accels != other.max_accels) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMaxJointAccel_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMaxJointAccel_Request_

// alias to use template instance with default allocator
using SetMaxJointAccel_Request =
  rysen_apexhand_msgs::srv::SetMaxJointAccel_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rysen_apexhand_msgs


#ifndef _WIN32
# define DEPRECATED__rysen_apexhand_msgs__srv__SetMaxJointAccel_Response __attribute__((deprecated))
#else
# define DEPRECATED__rysen_apexhand_msgs__srv__SetMaxJointAccel_Response __declspec(deprecated)
#endif

namespace rysen_apexhand_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMaxJointAccel_Response_
{
  using Type = SetMaxJointAccel_Response_<ContainerAllocator>;

  explicit SetMaxJointAccel_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetMaxJointAccel_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  using _max_accels_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _max_accels_type max_accels;

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
  Type & set__max_accels(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->max_accels = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rysen_apexhand_msgs::srv::SetMaxJointAccel_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rysen_apexhand_msgs::srv::SetMaxJointAccel_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::srv::SetMaxJointAccel_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::srv::SetMaxJointAccel_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::srv::SetMaxJointAccel_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::srv::SetMaxJointAccel_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::srv::SetMaxJointAccel_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::srv::SetMaxJointAccel_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::srv::SetMaxJointAccel_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::srv::SetMaxJointAccel_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rysen_apexhand_msgs__srv__SetMaxJointAccel_Response
    std::shared_ptr<rysen_apexhand_msgs::srv::SetMaxJointAccel_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rysen_apexhand_msgs__srv__SetMaxJointAccel_Response
    std::shared_ptr<rysen_apexhand_msgs::srv::SetMaxJointAccel_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMaxJointAccel_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->max_accels != other.max_accels) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMaxJointAccel_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMaxJointAccel_Response_

// alias to use template instance with default allocator
using SetMaxJointAccel_Response =
  rysen_apexhand_msgs::srv::SetMaxJointAccel_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rysen_apexhand_msgs

namespace rysen_apexhand_msgs
{

namespace srv
{

struct SetMaxJointAccel
{
  using Request = rysen_apexhand_msgs::srv::SetMaxJointAccel_Request;
  using Response = rysen_apexhand_msgs::srv::SetMaxJointAccel_Response;
};

}  // namespace srv

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_MAX_JOINT_ACCEL__STRUCT_HPP_
