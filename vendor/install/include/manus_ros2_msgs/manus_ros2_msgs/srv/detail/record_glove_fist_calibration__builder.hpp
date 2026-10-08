// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from manus_ros2_msgs:srv/RecordGloveFistCalibration.idl
// generated code does not contain a copyright notice

#ifndef MANUS_ROS2_MSGS__SRV__DETAIL__RECORD_GLOVE_FIST_CALIBRATION__BUILDER_HPP_
#define MANUS_ROS2_MSGS__SRV__DETAIL__RECORD_GLOVE_FIST_CALIBRATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "manus_ros2_msgs/srv/detail/record_glove_fist_calibration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace manus_ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_RecordGloveFistCalibration_Request_side
{
public:
  Init_RecordGloveFistCalibration_Request_side()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::manus_ros2_msgs::srv::RecordGloveFistCalibration_Request side(::manus_ros2_msgs::srv::RecordGloveFistCalibration_Request::_side_type arg)
  {
    msg_.side = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manus_ros2_msgs::srv::RecordGloveFistCalibration_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::manus_ros2_msgs::srv::RecordGloveFistCalibration_Request>()
{
  return manus_ros2_msgs::srv::builder::Init_RecordGloveFistCalibration_Request_side();
}

}  // namespace manus_ros2_msgs


namespace manus_ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_RecordGloveFistCalibration_Response_message
{
public:
  explicit Init_RecordGloveFistCalibration_Response_message(::manus_ros2_msgs::srv::RecordGloveFistCalibration_Response & msg)
  : msg_(msg)
  {}
  ::manus_ros2_msgs::srv::RecordGloveFistCalibration_Response message(::manus_ros2_msgs::srv::RecordGloveFistCalibration_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manus_ros2_msgs::srv::RecordGloveFistCalibration_Response msg_;
};

class Init_RecordGloveFistCalibration_Response_sample_count
{
public:
  explicit Init_RecordGloveFistCalibration_Response_sample_count(::manus_ros2_msgs::srv::RecordGloveFistCalibration_Response & msg)
  : msg_(msg)
  {}
  Init_RecordGloveFistCalibration_Response_message sample_count(::manus_ros2_msgs::srv::RecordGloveFistCalibration_Response::_sample_count_type arg)
  {
    msg_.sample_count = std::move(arg);
    return Init_RecordGloveFistCalibration_Response_message(msg_);
  }

private:
  ::manus_ros2_msgs::srv::RecordGloveFistCalibration_Response msg_;
};

class Init_RecordGloveFistCalibration_Response_fist_tips
{
public:
  explicit Init_RecordGloveFistCalibration_Response_fist_tips(::manus_ros2_msgs::srv::RecordGloveFistCalibration_Response & msg)
  : msg_(msg)
  {}
  Init_RecordGloveFistCalibration_Response_sample_count fist_tips(::manus_ros2_msgs::srv::RecordGloveFistCalibration_Response::_fist_tips_type arg)
  {
    msg_.fist_tips = std::move(arg);
    return Init_RecordGloveFistCalibration_Response_sample_count(msg_);
  }

private:
  ::manus_ros2_msgs::srv::RecordGloveFistCalibration_Response msg_;
};

class Init_RecordGloveFistCalibration_Response_success
{
public:
  Init_RecordGloveFistCalibration_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecordGloveFistCalibration_Response_fist_tips success(::manus_ros2_msgs::srv::RecordGloveFistCalibration_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_RecordGloveFistCalibration_Response_fist_tips(msg_);
  }

private:
  ::manus_ros2_msgs::srv::RecordGloveFistCalibration_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::manus_ros2_msgs::srv::RecordGloveFistCalibration_Response>()
{
  return manus_ros2_msgs::srv::builder::Init_RecordGloveFistCalibration_Response_success();
}

}  // namespace manus_ros2_msgs

#endif  // MANUS_ROS2_MSGS__SRV__DETAIL__RECORD_GLOVE_FIST_CALIBRATION__BUILDER_HPP_
