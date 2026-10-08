// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from manus_ros2_msgs:srv/CalibrateGloveTheta.idl
// generated code does not contain a copyright notice

#ifndef MANUS_ROS2_MSGS__SRV__DETAIL__CALIBRATE_GLOVE_THETA__BUILDER_HPP_
#define MANUS_ROS2_MSGS__SRV__DETAIL__CALIBRATE_GLOVE_THETA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "manus_ros2_msgs/srv/detail/calibrate_glove_theta__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace manus_ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_CalibrateGloveTheta_Request_side
{
public:
  Init_CalibrateGloveTheta_Request_side()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::manus_ros2_msgs::srv::CalibrateGloveTheta_Request side(::manus_ros2_msgs::srv::CalibrateGloveTheta_Request::_side_type arg)
  {
    msg_.side = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manus_ros2_msgs::srv::CalibrateGloveTheta_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::manus_ros2_msgs::srv::CalibrateGloveTheta_Request>()
{
  return manus_ros2_msgs::srv::builder::Init_CalibrateGloveTheta_Request_side();
}

}  // namespace manus_ros2_msgs


namespace manus_ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_CalibrateGloveTheta_Response_message
{
public:
  explicit Init_CalibrateGloveTheta_Response_message(::manus_ros2_msgs::srv::CalibrateGloveTheta_Response & msg)
  : msg_(msg)
  {}
  ::manus_ros2_msgs::srv::CalibrateGloveTheta_Response message(::manus_ros2_msgs::srv::CalibrateGloveTheta_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manus_ros2_msgs::srv::CalibrateGloveTheta_Response msg_;
};

class Init_CalibrateGloveTheta_Response_sample_count
{
public:
  explicit Init_CalibrateGloveTheta_Response_sample_count(::manus_ros2_msgs::srv::CalibrateGloveTheta_Response & msg)
  : msg_(msg)
  {}
  Init_CalibrateGloveTheta_Response_message sample_count(::manus_ros2_msgs::srv::CalibrateGloveTheta_Response::_sample_count_type arg)
  {
    msg_.sample_count = std::move(arg);
    return Init_CalibrateGloveTheta_Response_message(msg_);
  }

private:
  ::manus_ros2_msgs::srv::CalibrateGloveTheta_Response msg_;
};

class Init_CalibrateGloveTheta_Response_midpoint_z
{
public:
  explicit Init_CalibrateGloveTheta_Response_midpoint_z(::manus_ros2_msgs::srv::CalibrateGloveTheta_Response & msg)
  : msg_(msg)
  {}
  Init_CalibrateGloveTheta_Response_sample_count midpoint_z(::manus_ros2_msgs::srv::CalibrateGloveTheta_Response::_midpoint_z_type arg)
  {
    msg_.midpoint_z = std::move(arg);
    return Init_CalibrateGloveTheta_Response_sample_count(msg_);
  }

private:
  ::manus_ros2_msgs::srv::CalibrateGloveTheta_Response msg_;
};

class Init_CalibrateGloveTheta_Response_midpoint_y
{
public:
  explicit Init_CalibrateGloveTheta_Response_midpoint_y(::manus_ros2_msgs::srv::CalibrateGloveTheta_Response & msg)
  : msg_(msg)
  {}
  Init_CalibrateGloveTheta_Response_midpoint_z midpoint_y(::manus_ros2_msgs::srv::CalibrateGloveTheta_Response::_midpoint_y_type arg)
  {
    msg_.midpoint_y = std::move(arg);
    return Init_CalibrateGloveTheta_Response_midpoint_z(msg_);
  }

private:
  ::manus_ros2_msgs::srv::CalibrateGloveTheta_Response msg_;
};

class Init_CalibrateGloveTheta_Response_four_fingers_together_tips
{
public:
  explicit Init_CalibrateGloveTheta_Response_four_fingers_together_tips(::manus_ros2_msgs::srv::CalibrateGloveTheta_Response & msg)
  : msg_(msg)
  {}
  Init_CalibrateGloveTheta_Response_midpoint_y four_fingers_together_tips(::manus_ros2_msgs::srv::CalibrateGloveTheta_Response::_four_fingers_together_tips_type arg)
  {
    msg_.four_fingers_together_tips = std::move(arg);
    return Init_CalibrateGloveTheta_Response_midpoint_y(msg_);
  }

private:
  ::manus_ros2_msgs::srv::CalibrateGloveTheta_Response msg_;
};

class Init_CalibrateGloveTheta_Response_theta_deg
{
public:
  explicit Init_CalibrateGloveTheta_Response_theta_deg(::manus_ros2_msgs::srv::CalibrateGloveTheta_Response & msg)
  : msg_(msg)
  {}
  Init_CalibrateGloveTheta_Response_four_fingers_together_tips theta_deg(::manus_ros2_msgs::srv::CalibrateGloveTheta_Response::_theta_deg_type arg)
  {
    msg_.theta_deg = std::move(arg);
    return Init_CalibrateGloveTheta_Response_four_fingers_together_tips(msg_);
  }

private:
  ::manus_ros2_msgs::srv::CalibrateGloveTheta_Response msg_;
};

class Init_CalibrateGloveTheta_Response_theta_rad
{
public:
  explicit Init_CalibrateGloveTheta_Response_theta_rad(::manus_ros2_msgs::srv::CalibrateGloveTheta_Response & msg)
  : msg_(msg)
  {}
  Init_CalibrateGloveTheta_Response_theta_deg theta_rad(::manus_ros2_msgs::srv::CalibrateGloveTheta_Response::_theta_rad_type arg)
  {
    msg_.theta_rad = std::move(arg);
    return Init_CalibrateGloveTheta_Response_theta_deg(msg_);
  }

private:
  ::manus_ros2_msgs::srv::CalibrateGloveTheta_Response msg_;
};

class Init_CalibrateGloveTheta_Response_success
{
public:
  Init_CalibrateGloveTheta_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalibrateGloveTheta_Response_theta_rad success(::manus_ros2_msgs::srv::CalibrateGloveTheta_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CalibrateGloveTheta_Response_theta_rad(msg_);
  }

private:
  ::manus_ros2_msgs::srv::CalibrateGloveTheta_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::manus_ros2_msgs::srv::CalibrateGloveTheta_Response>()
{
  return manus_ros2_msgs::srv::builder::Init_CalibrateGloveTheta_Response_success();
}

}  // namespace manus_ros2_msgs

#endif  // MANUS_ROS2_MSGS__SRV__DETAIL__CALIBRATE_GLOVE_THETA__BUILDER_HPP_
