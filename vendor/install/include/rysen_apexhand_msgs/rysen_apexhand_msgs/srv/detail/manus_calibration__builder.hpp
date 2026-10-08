// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rysen_apexhand_msgs:srv/ManusCalibration.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__MANUS_CALIBRATION__BUILDER_HPP_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__MANUS_CALIBRATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rysen_apexhand_msgs/srv/detail/manus_calibration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rysen_apexhand_msgs
{

namespace srv
{

namespace builder
{

class Init_ManusCalibration_Request_side
{
public:
  Init_ManusCalibration_Request_side()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rysen_apexhand_msgs::srv::ManusCalibration_Request side(::rysen_apexhand_msgs::srv::ManusCalibration_Request::_side_type arg)
  {
    msg_.side = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::ManusCalibration_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::ManusCalibration_Request>()
{
  return rysen_apexhand_msgs::srv::builder::Init_ManusCalibration_Request_side();
}

}  // namespace rysen_apexhand_msgs


namespace rysen_apexhand_msgs
{

namespace srv
{

namespace builder
{

class Init_ManusCalibration_Response_message
{
public:
  explicit Init_ManusCalibration_Response_message(::rysen_apexhand_msgs::srv::ManusCalibration_Response & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::srv::ManusCalibration_Response message(::rysen_apexhand_msgs::srv::ManusCalibration_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::ManusCalibration_Response msg_;
};

class Init_ManusCalibration_Response_sample_count
{
public:
  explicit Init_ManusCalibration_Response_sample_count(::rysen_apexhand_msgs::srv::ManusCalibration_Response & msg)
  : msg_(msg)
  {}
  Init_ManusCalibration_Response_message sample_count(::rysen_apexhand_msgs::srv::ManusCalibration_Response::_sample_count_type arg)
  {
    msg_.sample_count = std::move(arg);
    return Init_ManusCalibration_Response_message(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::ManusCalibration_Response msg_;
};

class Init_ManusCalibration_Response_fist_tips
{
public:
  explicit Init_ManusCalibration_Response_fist_tips(::rysen_apexhand_msgs::srv::ManusCalibration_Response & msg)
  : msg_(msg)
  {}
  Init_ManusCalibration_Response_sample_count fist_tips(::rysen_apexhand_msgs::srv::ManusCalibration_Response::_fist_tips_type arg)
  {
    msg_.fist_tips = std::move(arg);
    return Init_ManusCalibration_Response_sample_count(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::ManusCalibration_Response msg_;
};

class Init_ManusCalibration_Response_four_fingers_together_tips
{
public:
  explicit Init_ManusCalibration_Response_four_fingers_together_tips(::rysen_apexhand_msgs::srv::ManusCalibration_Response & msg)
  : msg_(msg)
  {}
  Init_ManusCalibration_Response_fist_tips four_fingers_together_tips(::rysen_apexhand_msgs::srv::ManusCalibration_Response::_four_fingers_together_tips_type arg)
  {
    msg_.four_fingers_together_tips = std::move(arg);
    return Init_ManusCalibration_Response_fist_tips(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::ManusCalibration_Response msg_;
};

class Init_ManusCalibration_Response_theta_deg
{
public:
  explicit Init_ManusCalibration_Response_theta_deg(::rysen_apexhand_msgs::srv::ManusCalibration_Response & msg)
  : msg_(msg)
  {}
  Init_ManusCalibration_Response_four_fingers_together_tips theta_deg(::rysen_apexhand_msgs::srv::ManusCalibration_Response::_theta_deg_type arg)
  {
    msg_.theta_deg = std::move(arg);
    return Init_ManusCalibration_Response_four_fingers_together_tips(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::ManusCalibration_Response msg_;
};

class Init_ManusCalibration_Response_theta_rad
{
public:
  explicit Init_ManusCalibration_Response_theta_rad(::rysen_apexhand_msgs::srv::ManusCalibration_Response & msg)
  : msg_(msg)
  {}
  Init_ManusCalibration_Response_theta_deg theta_rad(::rysen_apexhand_msgs::srv::ManusCalibration_Response::_theta_rad_type arg)
  {
    msg_.theta_rad = std::move(arg);
    return Init_ManusCalibration_Response_theta_deg(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::ManusCalibration_Response msg_;
};

class Init_ManusCalibration_Response_success
{
public:
  Init_ManusCalibration_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ManusCalibration_Response_theta_rad success(::rysen_apexhand_msgs::srv::ManusCalibration_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ManusCalibration_Response_theta_rad(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::ManusCalibration_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::ManusCalibration_Response>()
{
  return rysen_apexhand_msgs::srv::builder::Init_ManusCalibration_Response_success();
}

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__MANUS_CALIBRATION__BUILDER_HPP_
