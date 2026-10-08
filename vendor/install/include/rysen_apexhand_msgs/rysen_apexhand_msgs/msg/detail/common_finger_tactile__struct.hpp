// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rysen_apexhand_msgs:msg/CommonFingerTactile.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__COMMON_FINGER_TACTILE__STRUCT_HPP_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__COMMON_FINGER_TACTILE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'prox_pad'
// Member 'mid_pad'
// Member 'dist_pad'
#include "rysen_apexhand_msgs/msg/detail/tactile_image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rysen_apexhand_msgs__msg__CommonFingerTactile __attribute__((deprecated))
#else
# define DEPRECATED__rysen_apexhand_msgs__msg__CommonFingerTactile __declspec(deprecated)
#endif

namespace rysen_apexhand_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CommonFingerTactile_
{
  using Type = CommonFingerTactile_<ContainerAllocator>;

  explicit CommonFingerTactile_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : prox_pad(_init),
    mid_pad(_init),
    dist_pad(_init)
  {
    (void)_init;
  }

  explicit CommonFingerTactile_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : prox_pad(_alloc, _init),
    mid_pad(_alloc, _init),
    dist_pad(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _prox_pad_type =
    rysen_apexhand_msgs::msg::TactileImage_<ContainerAllocator>;
  _prox_pad_type prox_pad;
  using _mid_pad_type =
    rysen_apexhand_msgs::msg::TactileImage_<ContainerAllocator>;
  _mid_pad_type mid_pad;
  using _dist_pad_type =
    rysen_apexhand_msgs::msg::TactileImage_<ContainerAllocator>;
  _dist_pad_type dist_pad;

  // setters for named parameter idiom
  Type & set__prox_pad(
    const rysen_apexhand_msgs::msg::TactileImage_<ContainerAllocator> & _arg)
  {
    this->prox_pad = _arg;
    return *this;
  }
  Type & set__mid_pad(
    const rysen_apexhand_msgs::msg::TactileImage_<ContainerAllocator> & _arg)
  {
    this->mid_pad = _arg;
    return *this;
  }
  Type & set__dist_pad(
    const rysen_apexhand_msgs::msg::TactileImage_<ContainerAllocator> & _arg)
  {
    this->dist_pad = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rysen_apexhand_msgs::msg::CommonFingerTactile_<ContainerAllocator> *;
  using ConstRawPtr =
    const rysen_apexhand_msgs::msg::CommonFingerTactile_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::msg::CommonFingerTactile_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::msg::CommonFingerTactile_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::msg::CommonFingerTactile_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::msg::CommonFingerTactile_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::msg::CommonFingerTactile_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::msg::CommonFingerTactile_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::msg::CommonFingerTactile_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::msg::CommonFingerTactile_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rysen_apexhand_msgs__msg__CommonFingerTactile
    std::shared_ptr<rysen_apexhand_msgs::msg::CommonFingerTactile_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rysen_apexhand_msgs__msg__CommonFingerTactile
    std::shared_ptr<rysen_apexhand_msgs::msg::CommonFingerTactile_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CommonFingerTactile_ & other) const
  {
    if (this->prox_pad != other.prox_pad) {
      return false;
    }
    if (this->mid_pad != other.mid_pad) {
      return false;
    }
    if (this->dist_pad != other.dist_pad) {
      return false;
    }
    return true;
  }
  bool operator!=(const CommonFingerTactile_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CommonFingerTactile_

// alias to use template instance with default allocator
using CommonFingerTactile =
  rysen_apexhand_msgs::msg::CommonFingerTactile_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__COMMON_FINGER_TACTILE__STRUCT_HPP_
