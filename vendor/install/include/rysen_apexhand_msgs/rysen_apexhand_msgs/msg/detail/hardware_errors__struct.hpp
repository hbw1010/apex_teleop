// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rysen_apexhand_msgs:msg/HardwareErrors.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__HARDWARE_ERRORS__STRUCT_HPP_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__HARDWARE_ERRORS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rysen_apexhand_msgs__msg__HardwareErrors __attribute__((deprecated))
#else
# define DEPRECATED__rysen_apexhand_msgs__msg__HardwareErrors __declspec(deprecated)
#endif

namespace rysen_apexhand_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HardwareErrors_
{
  using Type = HardwareErrors_<ContainerAllocator>;

  explicit HardwareErrors_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_error_code = 0ull;
      this->thumb_error_code = 0ull;
      this->index_error_code = 0ull;
      this->middle_error_code = 0ull;
      this->ring_error_code = 0ull;
      this->little_error_code = 0ull;
    }
  }

  explicit HardwareErrors_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_error_code = 0ull;
      this->thumb_error_code = 0ull;
      this->index_error_code = 0ull;
      this->middle_error_code = 0ull;
      this->ring_error_code = 0ull;
      this->little_error_code = 0ull;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _device_error_code_type =
    uint64_t;
  _device_error_code_type device_error_code;
  using _thumb_error_code_type =
    uint64_t;
  _thumb_error_code_type thumb_error_code;
  using _index_error_code_type =
    uint64_t;
  _index_error_code_type index_error_code;
  using _middle_error_code_type =
    uint64_t;
  _middle_error_code_type middle_error_code;
  using _ring_error_code_type =
    uint64_t;
  _ring_error_code_type ring_error_code;
  using _little_error_code_type =
    uint64_t;
  _little_error_code_type little_error_code;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__device_error_code(
    const uint64_t & _arg)
  {
    this->device_error_code = _arg;
    return *this;
  }
  Type & set__thumb_error_code(
    const uint64_t & _arg)
  {
    this->thumb_error_code = _arg;
    return *this;
  }
  Type & set__index_error_code(
    const uint64_t & _arg)
  {
    this->index_error_code = _arg;
    return *this;
  }
  Type & set__middle_error_code(
    const uint64_t & _arg)
  {
    this->middle_error_code = _arg;
    return *this;
  }
  Type & set__ring_error_code(
    const uint64_t & _arg)
  {
    this->ring_error_code = _arg;
    return *this;
  }
  Type & set__little_error_code(
    const uint64_t & _arg)
  {
    this->little_error_code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rysen_apexhand_msgs::msg::HardwareErrors_<ContainerAllocator> *;
  using ConstRawPtr =
    const rysen_apexhand_msgs::msg::HardwareErrors_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::msg::HardwareErrors_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::msg::HardwareErrors_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::msg::HardwareErrors_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::msg::HardwareErrors_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::msg::HardwareErrors_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::msg::HardwareErrors_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::msg::HardwareErrors_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::msg::HardwareErrors_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rysen_apexhand_msgs__msg__HardwareErrors
    std::shared_ptr<rysen_apexhand_msgs::msg::HardwareErrors_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rysen_apexhand_msgs__msg__HardwareErrors
    std::shared_ptr<rysen_apexhand_msgs::msg::HardwareErrors_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HardwareErrors_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->device_error_code != other.device_error_code) {
      return false;
    }
    if (this->thumb_error_code != other.thumb_error_code) {
      return false;
    }
    if (this->index_error_code != other.index_error_code) {
      return false;
    }
    if (this->middle_error_code != other.middle_error_code) {
      return false;
    }
    if (this->ring_error_code != other.ring_error_code) {
      return false;
    }
    if (this->little_error_code != other.little_error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const HardwareErrors_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HardwareErrors_

// alias to use template instance with default allocator
using HardwareErrors =
  rysen_apexhand_msgs::msg::HardwareErrors_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__HARDWARE_ERRORS__STRUCT_HPP_
