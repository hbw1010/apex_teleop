// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rysen_apexhand_msgs:msg/TangentialForce.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__TANGENTIAL_FORCE__STRUCT_HPP_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__TANGENTIAL_FORCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rysen_apexhand_msgs__msg__TangentialForce __attribute__((deprecated))
#else
# define DEPRECATED__rysen_apexhand_msgs__msg__TangentialForce __declspec(deprecated)
#endif

namespace rysen_apexhand_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TangentialForce_
{
  using Type = TangentialForce_<ContainerAllocator>;

  explicit TangentialForce_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->theta = 0.0;
      this->magnitude = 0.0;
    }
  }

  explicit TangentialForce_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->theta = 0.0;
      this->magnitude = 0.0;
    }
  }

  // field types and members
  using _theta_type =
    double;
  _theta_type theta;
  using _magnitude_type =
    double;
  _magnitude_type magnitude;

  // setters for named parameter idiom
  Type & set__theta(
    const double & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__magnitude(
    const double & _arg)
  {
    this->magnitude = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rysen_apexhand_msgs::msg::TangentialForce_<ContainerAllocator> *;
  using ConstRawPtr =
    const rysen_apexhand_msgs::msg::TangentialForce_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::msg::TangentialForce_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::msg::TangentialForce_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::msg::TangentialForce_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::msg::TangentialForce_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::msg::TangentialForce_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::msg::TangentialForce_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::msg::TangentialForce_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::msg::TangentialForce_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rysen_apexhand_msgs__msg__TangentialForce
    std::shared_ptr<rysen_apexhand_msgs::msg::TangentialForce_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rysen_apexhand_msgs__msg__TangentialForce
    std::shared_ptr<rysen_apexhand_msgs::msg::TangentialForce_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TangentialForce_ & other) const
  {
    if (this->theta != other.theta) {
      return false;
    }
    if (this->magnitude != other.magnitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const TangentialForce_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TangentialForce_

// alias to use template instance with default allocator
using TangentialForce =
  rysen_apexhand_msgs::msg::TangentialForce_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__TANGENTIAL_FORCE__STRUCT_HPP_
