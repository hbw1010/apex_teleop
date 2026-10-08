// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rysen_apexhand_msgs:srv/ClearTactileCalibration.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__CLEAR_TACTILE_CALIBRATION__BUILDER_HPP_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__CLEAR_TACTILE_CALIBRATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rysen_apexhand_msgs/srv/detail/clear_tactile_calibration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rysen_apexhand_msgs
{

namespace srv
{

namespace builder
{

class Init_ClearTactileCalibration_Request_ip
{
public:
  Init_ClearTactileCalibration_Request_ip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rysen_apexhand_msgs::srv::ClearTactileCalibration_Request ip(::rysen_apexhand_msgs::srv::ClearTactileCalibration_Request::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::ClearTactileCalibration_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::ClearTactileCalibration_Request>()
{
  return rysen_apexhand_msgs::srv::builder::Init_ClearTactileCalibration_Request_ip();
}

}  // namespace rysen_apexhand_msgs


namespace rysen_apexhand_msgs
{

namespace srv
{

namespace builder
{

class Init_ClearTactileCalibration_Response_message
{
public:
  explicit Init_ClearTactileCalibration_Response_message(::rysen_apexhand_msgs::srv::ClearTactileCalibration_Response & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::srv::ClearTactileCalibration_Response message(::rysen_apexhand_msgs::srv::ClearTactileCalibration_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::ClearTactileCalibration_Response msg_;
};

class Init_ClearTactileCalibration_Response_success
{
public:
  Init_ClearTactileCalibration_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClearTactileCalibration_Response_message success(::rysen_apexhand_msgs::srv::ClearTactileCalibration_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ClearTactileCalibration_Response_message(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::ClearTactileCalibration_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::ClearTactileCalibration_Response>()
{
  return rysen_apexhand_msgs::srv::builder::Init_ClearTactileCalibration_Response_success();
}

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__CLEAR_TACTILE_CALIBRATION__BUILDER_HPP_
