// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rysen_apexhand_msgs:msg/FingerId.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__FINGER_ID__STRUCT_HPP_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__FINGER_ID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rysen_apexhand_msgs__msg__FingerId __attribute__((deprecated))
#else
# define DEPRECATED__rysen_apexhand_msgs__msg__FingerId __declspec(deprecated)
#endif

namespace rysen_apexhand_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FingerId_
{
  using Type = FingerId_<ContainerAllocator>;

  explicit FingerId_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->finger_id = 0;
    }
  }

  explicit FingerId_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->finger_id = 0;
    }
  }

  // field types and members
  using _finger_id_type =
    uint8_t;
  _finger_id_type finger_id;

  // setters for named parameter idiom
  Type & set__finger_id(
    const uint8_t & _arg)
  {
    this->finger_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rysen_apexhand_msgs::msg::FingerId_<ContainerAllocator> *;
  using ConstRawPtr =
    const rysen_apexhand_msgs::msg::FingerId_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::msg::FingerId_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::msg::FingerId_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::msg::FingerId_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::msg::FingerId_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::msg::FingerId_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::msg::FingerId_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::msg::FingerId_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::msg::FingerId_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rysen_apexhand_msgs__msg__FingerId
    std::shared_ptr<rysen_apexhand_msgs::msg::FingerId_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rysen_apexhand_msgs__msg__FingerId
    std::shared_ptr<rysen_apexhand_msgs::msg::FingerId_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FingerId_ & other) const
  {
    if (this->finger_id != other.finger_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const FingerId_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FingerId_

// alias to use template instance with default allocator
using FingerId =
  rysen_apexhand_msgs::msg::FingerId_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__FINGER_ID__STRUCT_HPP_
