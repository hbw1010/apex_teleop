// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rysen_apexhand_msgs:msg/HandTactileForces.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__HAND_TACTILE_FORCES__STRUCT_HPP_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__HAND_TACTILE_FORCES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'index'
// Member 'middle'
// Member 'ring'
// Member 'little'
#include "rysen_apexhand_msgs/msg/detail/common_finger_tactile__struct.hpp"
// Member 'thumb'
#include "rysen_apexhand_msgs/msg/detail/thumb_finger_tactile__struct.hpp"
// Member 'palm_center'
#include "rysen_apexhand_msgs/msg/detail/tactile_image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rysen_apexhand_msgs__msg__HandTactileForces __attribute__((deprecated))
#else
# define DEPRECATED__rysen_apexhand_msgs__msg__HandTactileForces __declspec(deprecated)
#endif

namespace rysen_apexhand_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HandTactileForces_
{
  using Type = HandTactileForces_<ContainerAllocator>;

  explicit HandTactileForces_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    index(_init),
    middle(_init),
    ring(_init),
    little(_init),
    thumb(_init),
    palm_center(_init)
  {
    (void)_init;
  }

  explicit HandTactileForces_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    index(_alloc, _init),
    middle(_alloc, _init),
    ring(_alloc, _init),
    little(_alloc, _init),
    thumb(_alloc, _init),
    palm_center(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _index_type =
    rysen_apexhand_msgs::msg::CommonFingerTactile_<ContainerAllocator>;
  _index_type index;
  using _middle_type =
    rysen_apexhand_msgs::msg::CommonFingerTactile_<ContainerAllocator>;
  _middle_type middle;
  using _ring_type =
    rysen_apexhand_msgs::msg::CommonFingerTactile_<ContainerAllocator>;
  _ring_type ring;
  using _little_type =
    rysen_apexhand_msgs::msg::CommonFingerTactile_<ContainerAllocator>;
  _little_type little;
  using _thumb_type =
    rysen_apexhand_msgs::msg::ThumbFingerTactile_<ContainerAllocator>;
  _thumb_type thumb;
  using _palm_center_type =
    rysen_apexhand_msgs::msg::TactileImage_<ContainerAllocator>;
  _palm_center_type palm_center;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__index(
    const rysen_apexhand_msgs::msg::CommonFingerTactile_<ContainerAllocator> & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__middle(
    const rysen_apexhand_msgs::msg::CommonFingerTactile_<ContainerAllocator> & _arg)
  {
    this->middle = _arg;
    return *this;
  }
  Type & set__ring(
    const rysen_apexhand_msgs::msg::CommonFingerTactile_<ContainerAllocator> & _arg)
  {
    this->ring = _arg;
    return *this;
  }
  Type & set__little(
    const rysen_apexhand_msgs::msg::CommonFingerTactile_<ContainerAllocator> & _arg)
  {
    this->little = _arg;
    return *this;
  }
  Type & set__thumb(
    const rysen_apexhand_msgs::msg::ThumbFingerTactile_<ContainerAllocator> & _arg)
  {
    this->thumb = _arg;
    return *this;
  }
  Type & set__palm_center(
    const rysen_apexhand_msgs::msg::TactileImage_<ContainerAllocator> & _arg)
  {
    this->palm_center = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rysen_apexhand_msgs::msg::HandTactileForces_<ContainerAllocator> *;
  using ConstRawPtr =
    const rysen_apexhand_msgs::msg::HandTactileForces_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::msg::HandTactileForces_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::msg::HandTactileForces_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::msg::HandTactileForces_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::msg::HandTactileForces_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::msg::HandTactileForces_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::msg::HandTactileForces_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::msg::HandTactileForces_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::msg::HandTactileForces_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rysen_apexhand_msgs__msg__HandTactileForces
    std::shared_ptr<rysen_apexhand_msgs::msg::HandTactileForces_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rysen_apexhand_msgs__msg__HandTactileForces
    std::shared_ptr<rysen_apexhand_msgs::msg::HandTactileForces_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HandTactileForces_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->index != other.index) {
      return false;
    }
    if (this->middle != other.middle) {
      return false;
    }
    if (this->ring != other.ring) {
      return false;
    }
    if (this->little != other.little) {
      return false;
    }
    if (this->thumb != other.thumb) {
      return false;
    }
    if (this->palm_center != other.palm_center) {
      return false;
    }
    return true;
  }
  bool operator!=(const HandTactileForces_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HandTactileForces_

// alias to use template instance with default allocator
using HandTactileForces =
  rysen_apexhand_msgs::msg::HandTactileForces_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__HAND_TACTILE_FORCES__STRUCT_HPP_
