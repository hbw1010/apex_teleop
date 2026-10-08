// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from manus_ros2_msgs:srv/CalibrateGloveTheta.idl
// generated code does not contain a copyright notice

#ifndef MANUS_ROS2_MSGS__SRV__DETAIL__CALIBRATE_GLOVE_THETA__STRUCT_HPP_
#define MANUS_ROS2_MSGS__SRV__DETAIL__CALIBRATE_GLOVE_THETA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__manus_ros2_msgs__srv__CalibrateGloveTheta_Request __attribute__((deprecated))
#else
# define DEPRECATED__manus_ros2_msgs__srv__CalibrateGloveTheta_Request __declspec(deprecated)
#endif

namespace manus_ros2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CalibrateGloveTheta_Request_
{
  using Type = CalibrateGloveTheta_Request_<ContainerAllocator>;

  explicit CalibrateGloveTheta_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->side = "";
    }
  }

  explicit CalibrateGloveTheta_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    manus_ros2_msgs::srv::CalibrateGloveTheta_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const manus_ros2_msgs::srv::CalibrateGloveTheta_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<manus_ros2_msgs::srv::CalibrateGloveTheta_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<manus_ros2_msgs::srv::CalibrateGloveTheta_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      manus_ros2_msgs::srv::CalibrateGloveTheta_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<manus_ros2_msgs::srv::CalibrateGloveTheta_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      manus_ros2_msgs::srv::CalibrateGloveTheta_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<manus_ros2_msgs::srv::CalibrateGloveTheta_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<manus_ros2_msgs::srv::CalibrateGloveTheta_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<manus_ros2_msgs::srv::CalibrateGloveTheta_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__manus_ros2_msgs__srv__CalibrateGloveTheta_Request
    std::shared_ptr<manus_ros2_msgs::srv::CalibrateGloveTheta_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__manus_ros2_msgs__srv__CalibrateGloveTheta_Request
    std::shared_ptr<manus_ros2_msgs::srv::CalibrateGloveTheta_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CalibrateGloveTheta_Request_ & other) const
  {
    if (this->side != other.side) {
      return false;
    }
    return true;
  }
  bool operator!=(const CalibrateGloveTheta_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CalibrateGloveTheta_Request_

// alias to use template instance with default allocator
using CalibrateGloveTheta_Request =
  manus_ros2_msgs::srv::CalibrateGloveTheta_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace manus_ros2_msgs


// Include directives for member types
// Member 'four_fingers_together_tips'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__manus_ros2_msgs__srv__CalibrateGloveTheta_Response __attribute__((deprecated))
#else
# define DEPRECATED__manus_ros2_msgs__srv__CalibrateGloveTheta_Response __declspec(deprecated)
#endif

namespace manus_ros2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CalibrateGloveTheta_Response_
{
  using Type = CalibrateGloveTheta_Response_<ContainerAllocator>;

  explicit CalibrateGloveTheta_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->theta_rad = 0.0;
      this->theta_deg = 0.0;
      this->four_fingers_together_tips.fill(geometry_msgs::msg::Point_<ContainerAllocator>{_init});
      this->midpoint_y = 0.0;
      this->midpoint_z = 0.0;
      this->sample_count = 0ul;
      this->message = "";
    }
  }

  explicit CalibrateGloveTheta_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : four_fingers_together_tips(_alloc),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->theta_rad = 0.0;
      this->theta_deg = 0.0;
      this->four_fingers_together_tips.fill(geometry_msgs::msg::Point_<ContainerAllocator>{_alloc, _init});
      this->midpoint_y = 0.0;
      this->midpoint_z = 0.0;
      this->sample_count = 0ul;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _theta_rad_type =
    double;
  _theta_rad_type theta_rad;
  using _theta_deg_type =
    double;
  _theta_deg_type theta_deg;
  using _four_fingers_together_tips_type =
    std::array<geometry_msgs::msg::Point_<ContainerAllocator>, 5>;
  _four_fingers_together_tips_type four_fingers_together_tips;
  using _midpoint_y_type =
    double;
  _midpoint_y_type midpoint_y;
  using _midpoint_z_type =
    double;
  _midpoint_z_type midpoint_z;
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
  Type & set__theta_rad(
    const double & _arg)
  {
    this->theta_rad = _arg;
    return *this;
  }
  Type & set__theta_deg(
    const double & _arg)
  {
    this->theta_deg = _arg;
    return *this;
  }
  Type & set__four_fingers_together_tips(
    const std::array<geometry_msgs::msg::Point_<ContainerAllocator>, 5> & _arg)
  {
    this->four_fingers_together_tips = _arg;
    return *this;
  }
  Type & set__midpoint_y(
    const double & _arg)
  {
    this->midpoint_y = _arg;
    return *this;
  }
  Type & set__midpoint_z(
    const double & _arg)
  {
    this->midpoint_z = _arg;
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
    manus_ros2_msgs::srv::CalibrateGloveTheta_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const manus_ros2_msgs::srv::CalibrateGloveTheta_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<manus_ros2_msgs::srv::CalibrateGloveTheta_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<manus_ros2_msgs::srv::CalibrateGloveTheta_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      manus_ros2_msgs::srv::CalibrateGloveTheta_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<manus_ros2_msgs::srv::CalibrateGloveTheta_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      manus_ros2_msgs::srv::CalibrateGloveTheta_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<manus_ros2_msgs::srv::CalibrateGloveTheta_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<manus_ros2_msgs::srv::CalibrateGloveTheta_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<manus_ros2_msgs::srv::CalibrateGloveTheta_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__manus_ros2_msgs__srv__CalibrateGloveTheta_Response
    std::shared_ptr<manus_ros2_msgs::srv::CalibrateGloveTheta_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__manus_ros2_msgs__srv__CalibrateGloveTheta_Response
    std::shared_ptr<manus_ros2_msgs::srv::CalibrateGloveTheta_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CalibrateGloveTheta_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->theta_rad != other.theta_rad) {
      return false;
    }
    if (this->theta_deg != other.theta_deg) {
      return false;
    }
    if (this->four_fingers_together_tips != other.four_fingers_together_tips) {
      return false;
    }
    if (this->midpoint_y != other.midpoint_y) {
      return false;
    }
    if (this->midpoint_z != other.midpoint_z) {
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
  bool operator!=(const CalibrateGloveTheta_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CalibrateGloveTheta_Response_

// alias to use template instance with default allocator
using CalibrateGloveTheta_Response =
  manus_ros2_msgs::srv::CalibrateGloveTheta_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace manus_ros2_msgs

namespace manus_ros2_msgs
{

namespace srv
{

struct CalibrateGloveTheta
{
  using Request = manus_ros2_msgs::srv::CalibrateGloveTheta_Request;
  using Response = manus_ros2_msgs::srv::CalibrateGloveTheta_Response;
};

}  // namespace srv

}  // namespace manus_ros2_msgs

#endif  // MANUS_ROS2_MSGS__SRV__DETAIL__CALIBRATE_GLOVE_THETA__STRUCT_HPP_
