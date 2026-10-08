// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from manus_ros2_msgs:srv/RecordGloveFistCalibration.idl
// generated code does not contain a copyright notice

#ifndef MANUS_ROS2_MSGS__SRV__DETAIL__RECORD_GLOVE_FIST_CALIBRATION__STRUCT_HPP_
#define MANUS_ROS2_MSGS__SRV__DETAIL__RECORD_GLOVE_FIST_CALIBRATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__manus_ros2_msgs__srv__RecordGloveFistCalibration_Request __attribute__((deprecated))
#else
# define DEPRECATED__manus_ros2_msgs__srv__RecordGloveFistCalibration_Request __declspec(deprecated)
#endif

namespace manus_ros2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RecordGloveFistCalibration_Request_
{
  using Type = RecordGloveFistCalibration_Request_<ContainerAllocator>;

  explicit RecordGloveFistCalibration_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->side = "";
    }
  }

  explicit RecordGloveFistCalibration_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : side(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->side = "";
    }
  }

  // field types and members
  using _side_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _side_type side;

  // setters for named parameter idiom
  Type & set__side(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->side = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    manus_ros2_msgs::srv::RecordGloveFistCalibration_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const manus_ros2_msgs::srv::RecordGloveFistCalibration_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<manus_ros2_msgs::srv::RecordGloveFistCalibration_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<manus_ros2_msgs::srv::RecordGloveFistCalibration_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      manus_ros2_msgs::srv::RecordGloveFistCalibration_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<manus_ros2_msgs::srv::RecordGloveFistCalibration_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      manus_ros2_msgs::srv::RecordGloveFistCalibration_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<manus_ros2_msgs::srv::RecordGloveFistCalibration_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<manus_ros2_msgs::srv::RecordGloveFistCalibration_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<manus_ros2_msgs::srv::RecordGloveFistCalibration_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__manus_ros2_msgs__srv__RecordGloveFistCalibration_Request
    std::shared_ptr<manus_ros2_msgs::srv::RecordGloveFistCalibration_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__manus_ros2_msgs__srv__RecordGloveFistCalibration_Request
    std::shared_ptr<manus_ros2_msgs::srv::RecordGloveFistCalibration_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecordGloveFistCalibration_Request_ & other) const
  {
    if (this->side != other.side) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecordGloveFistCalibration_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecordGloveFistCalibration_Request_

// alias to use template instance with default allocator
using RecordGloveFistCalibration_Request =
  manus_ros2_msgs::srv::RecordGloveFistCalibration_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace manus_ros2_msgs


// Include directives for member types
// Member 'fist_tips'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__manus_ros2_msgs__srv__RecordGloveFistCalibration_Response __attribute__((deprecated))
#else
# define DEPRECATED__manus_ros2_msgs__srv__RecordGloveFistCalibration_Response __declspec(deprecated)
#endif

namespace manus_ros2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RecordGloveFistCalibration_Response_
{
  using Type = RecordGloveFistCalibration_Response_<ContainerAllocator>;

  explicit RecordGloveFistCalibration_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->fist_tips.fill(geometry_msgs::msg::Point_<ContainerAllocator>{_init});
      this->sample_count = 0ul;
      this->message = "";
    }
  }

  explicit RecordGloveFistCalibration_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fist_tips(_alloc),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->fist_tips.fill(geometry_msgs::msg::Point_<ContainerAllocator>{_alloc, _init});
      this->sample_count = 0ul;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _fist_tips_type =
    std::array<geometry_msgs::msg::Point_<ContainerAllocator>, 5>;
  _fist_tips_type fist_tips;
  using _sample_count_type =
    uint32_t;
  _sample_count_type sample_count;
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
  Type & set__fist_tips(
    const std::array<geometry_msgs::msg::Point_<ContainerAllocator>, 5> & _arg)
  {
    this->fist_tips = _arg;
    return *this;
  }
  Type & set__sample_count(
    const uint32_t & _arg)
  {
    this->sample_count = _arg;
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
    manus_ros2_msgs::srv::RecordGloveFistCalibration_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const manus_ros2_msgs::srv::RecordGloveFistCalibration_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<manus_ros2_msgs::srv::RecordGloveFistCalibration_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<manus_ros2_msgs::srv::RecordGloveFistCalibration_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      manus_ros2_msgs::srv::RecordGloveFistCalibration_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<manus_ros2_msgs::srv::RecordGloveFistCalibration_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      manus_ros2_msgs::srv::RecordGloveFistCalibration_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<manus_ros2_msgs::srv::RecordGloveFistCalibration_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<manus_ros2_msgs::srv::RecordGloveFistCalibration_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<manus_ros2_msgs::srv::RecordGloveFistCalibration_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__manus_ros2_msgs__srv__RecordGloveFistCalibration_Response
    std::shared_ptr<manus_ros2_msgs::srv::RecordGloveFistCalibration_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__manus_ros2_msgs__srv__RecordGloveFistCalibration_Response
    std::shared_ptr<manus_ros2_msgs::srv::RecordGloveFistCalibration_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecordGloveFistCalibration_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->fist_tips != other.fist_tips) {
      return false;
    }
    if (this->sample_count != other.sample_count) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecordGloveFistCalibration_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecordGloveFistCalibration_Response_

// alias to use template instance with default allocator
using RecordGloveFistCalibration_Response =
  manus_ros2_msgs::srv::RecordGloveFistCalibration_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace manus_ros2_msgs

namespace manus_ros2_msgs
{

namespace srv
{

struct RecordGloveFistCalibration
{
  using Request = manus_ros2_msgs::srv::RecordGloveFistCalibration_Request;
  using Response = manus_ros2_msgs::srv::RecordGloveFistCalibration_Response;
};

}  // namespace srv

}  // namespace manus_ros2_msgs

#endif  // MANUS_ROS2_MSGS__SRV__DETAIL__RECORD_GLOVE_FIST_CALIBRATION__STRUCT_HPP_
