// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from manus_ros2_msgs:srv/ClearGloveThetaCalibration.idl
// generated code does not contain a copyright notice

#ifndef MANUS_ROS2_MSGS__SRV__DETAIL__CLEAR_GLOVE_THETA_CALIBRATION__BUILDER_HPP_
#define MANUS_ROS2_MSGS__SRV__DETAIL__CLEAR_GLOVE_THETA_CALIBRATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "manus_ros2_msgs/srv/detail/clear_glove_theta_calibration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace manus_ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_ClearGloveThetaCalibration_Request_side
{
public:
  Init_ClearGloveThetaCalibration_Request_side()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::manus_ros2_msgs::srv::ClearGloveThetaCalibration_Request side(::manus_ros2_msgs::srv::ClearGloveThetaCalibration_Request::_side_type arg)
  {
    msg_.side = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manus_ros2_msgs::srv::ClearGloveThetaCalibration_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::manus_ros2_msgs::srv::ClearGloveThetaCalibration_Request>()
{
  return manus_ros2_msgs::srv::builder::Init_ClearGloveThetaCalibration_Request_side();
}

}  // namespace manus_ros2_msgs


namespace manus_ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_ClearGloveThetaCalibration_Response_message
{
public:
  explicit Init_ClearGloveThetaCalibration_Response_message(::manus_ros2_msgs::srv::ClearGloveThetaCalibration_Response & msg)
  : msg_(msg)
  {}
  ::manus_ros2_msgs::srv::ClearGloveThetaCalibration_Response message(::manus_ros2_msgs::srv::ClearGloveThetaCalibration_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manus_ros2_msgs::srv::ClearGloveThetaCalibration_Response msg_;
};

class Init_ClearGloveThetaCalibration_Response_fist_tips
{
public:
  explicit Init_ClearGloveThetaCalibration_Response_fist_tips(::manus_ros2_msgs::srv::ClearGloveThetaCalibration_Response & msg)
  : msg_(msg)
  {}
  Init_ClearGloveThetaCalibration_Response_message fist_tips(::manus_ros2_msgs::srv::ClearGloveThetaCalibration_Response::_fist_tips_type arg)
  {
    msg_.fist_tips = std::move(arg);
    return Init_ClearGloveThetaCalibration_Response_message(msg_);
  }

private:
  ::manus_ros2_msgs::srv::ClearGloveThetaCalibration_Response msg_;
};

class Init_ClearGloveThetaCalibration_Response_four_fingers_together_tips
{
public:
  explicit Init_ClearGloveThetaCalibration_Response_four_fingers_together_tips(::manus_ros2_msgs::srv::ClearGloveThetaCalibration_Response & msg)
  : msg_(msg)
  {}
  Init_ClearGloveThetaCalibration_Response_fist_tips four_fingers_together_tips(::manus_ros2_msgs::srv::ClearGloveThetaCalibration_Response::_four_fingers_together_tips_type arg)
  {
    msg_.four_fingers_together_tips = std::move(arg);
    return Init_ClearGloveThetaCalibration_Response_fist_tips(msg_);
  }

private:
  ::manus_ros2_msgs::srv::ClearGloveThetaCalibration_Response msg_;
};

class Init_ClearGloveThetaCalibration_Response_theta_deg
{
public:
  explicit Init_ClearGloveThetaCalibration_Response_theta_deg(::manus_ros2_msgs::srv::ClearGloveThetaCalibration_Response & msg)
  : msg_(msg)
  {}
  Init_ClearGloveThetaCalibration_Response_four_fingers_together_tips theta_deg(::manus_ros2_msgs::srv::ClearGloveThetaCalibration_Response::_theta_deg_type arg)
  {
    msg_.theta_deg = std::move(arg);
    return Init_ClearGloveThetaCalibration_Response_four_fingers_together_tips(msg_);
  }

private:
  ::manus_ros2_msgs::srv::ClearGloveThetaCalibration_Response msg_;
};

class Init_ClearGloveThetaCalibration_Response_theta_rad
{
public:
  explicit Init_ClearGloveThetaCalibration_Response_theta_rad(::manus_ros2_msgs::srv::ClearGloveThetaCalibration_Response & msg)
  : msg_(msg)
  {}
  Init_ClearGloveThetaCalibration_Response_theta_deg theta_rad(::manus_ros2_msgs::srv::ClearGloveThetaCalibration_Response::_theta_rad_type arg)
  {
    msg_.theta_rad = std::move(arg);
    return Init_ClearGloveThetaCalibration_Response_theta_deg(msg_);
  }

private:
  ::manus_ros2_msgs::srv::ClearGloveThetaCalibration_Response msg_;
};

class Init_ClearGloveThetaCalibration_Response_success
{
public:
  Init_ClearGloveThetaCalibration_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClearGloveThetaCalibration_Response_theta_rad success(::manus_ros2_msgs::srv::ClearGloveThetaCalibration_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ClearGloveThetaCalibration_Response_theta_rad(msg_);
  }

private:
  ::manus_ros2_msgs::srv::ClearGloveThetaCalibration_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::manus_ros2_msgs::srv::ClearGloveThetaCalibration_Response>()
{
  return manus_ros2_msgs::srv::builder::Init_ClearGloveThetaCalibration_Response_success();
}

}  // namespace manus_ros2_msgs

#endif  // MANUS_ROS2_MSGS__SRV__DETAIL__CLEAR_GLOVE_THETA_CALIBRATION__BUILDER_HPP_
