// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rysen_apexhand_msgs:msg/TactileImage.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__TACTILE_IMAGE__STRUCT_HPP_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__TACTILE_IMAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'tangential_forces'
#include "rysen_apexhand_msgs/msg/detail/tangential_force__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rysen_apexhand_msgs__msg__TactileImage __attribute__((deprecated))
#else
# define DEPRECATED__rysen_apexhand_msgs__msg__TactileImage __declspec(deprecated)
#endif

namespace rysen_apexhand_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TactileImage_
{
  using Type = TactileImage_<ContainerAllocator>;

  explicit TactileImage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tangential_forces(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0ul;
      this->height = 0ul;
    }
  }

  explicit TactileImage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tangential_forces(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0ul;
      this->height = 0ul;
    }
  }

  // field types and members
  using _width_type =
    uint32_t;
  _width_type width;
  using _height_type =
    uint32_t;
  _height_type height;
  using _gray_image_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _gray_image_type gray_image;
  using _tangential_forces_type =
    rysen_apexhand_msgs::msg::TangentialForce_<ContainerAllocator>;
  _tangential_forces_type tangential_forces;

  // setters for named parameter idiom
  Type & set__width(
    const uint32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const uint32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__gray_image(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->gray_image = _arg;
    return *this;
  }
  Type & set__tangential_forces(
    const rysen_apexhand_msgs::msg::TangentialForce_<ContainerAllocator> & _arg)
  {
    this->tangential_forces = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rysen_apexhand_msgs::msg::TactileImage_<ContainerAllocator> *;
  using ConstRawPtr =
    const rysen_apexhand_msgs::msg::TactileImage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::msg::TactileImage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rysen_apexhand_msgs::msg::TactileImage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::msg::TactileImage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::msg::TactileImage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rysen_apexhand_msgs::msg::TactileImage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rysen_apexhand_msgs::msg::TactileImage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::msg::TactileImage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rysen_apexhand_msgs::msg::TactileImage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rysen_apexhand_msgs__msg__TactileImage
    std::shared_ptr<rysen_apexhand_msgs::msg::TactileImage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rysen_apexhand_msgs__msg__TactileImage
    std::shared_ptr<rysen_apexhand_msgs::msg::TactileImage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TactileImage_ & other) const
  {
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->gray_image != other.gray_image) {
      return false;
    }
    if (this->tangential_forces != other.tangential_forces) {
      return false;
    }
    return true;
  }
  bool operator!=(const TactileImage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TactileImage_

// alias to use template instance with default allocator
using TactileImage =
  rysen_apexhand_msgs::msg::TactileImage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__TACTILE_IMAGE__STRUCT_HPP_
