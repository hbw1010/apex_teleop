// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rysen_apexhand_msgs:srv/GetVersionInfo.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__GET_VERSION_INFO__BUILDER_HPP_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__GET_VERSION_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rysen_apexhand_msgs/srv/detail/get_version_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rysen_apexhand_msgs
{

namespace srv
{

namespace builder
{

class Init_GetVersionInfo_Request_ip
{
public:
  Init_GetVersionInfo_Request_ip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rysen_apexhand_msgs::srv::GetVersionInfo_Request ip(::rysen_apexhand_msgs::srv::GetVersionInfo_Request::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::GetVersionInfo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::GetVersionInfo_Request>()
{
  return rysen_apexhand_msgs::srv::builder::Init_GetVersionInfo_Request_ip();
}

}  // namespace rysen_apexhand_msgs


namespace rysen_apexhand_msgs
{

namespace srv
{

namespace builder
{

class Init_GetVersionInfo_Response_touch_sensor_version
{
public:
  explicit Init_GetVersionInfo_Response_touch_sensor_version(::rysen_apexhand_msgs::srv::GetVersionInfo_Response & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::srv::GetVersionInfo_Response touch_sensor_version(::rysen_apexhand_msgs::srv::GetVersionInfo_Response::_touch_sensor_version_type arg)
  {
    msg_.touch_sensor_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::GetVersionInfo_Response msg_;
};

class Init_GetVersionInfo_Response_hand_firmware_version
{
public:
  explicit Init_GetVersionInfo_Response_hand_firmware_version(::rysen_apexhand_msgs::srv::GetVersionInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetVersionInfo_Response_touch_sensor_version hand_firmware_version(::rysen_apexhand_msgs::srv::GetVersionInfo_Response::_hand_firmware_version_type arg)
  {
    msg_.hand_firmware_version = std::move(arg);
    return Init_GetVersionInfo_Response_touch_sensor_version(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::GetVersionInfo_Response msg_;
};

class Init_GetVersionInfo_Response_sdk_version
{
public:
  Init_GetVersionInfo_Response_sdk_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetVersionInfo_Response_hand_firmware_version sdk_version(::rysen_apexhand_msgs::srv::GetVersionInfo_Response::_sdk_version_type arg)
  {
    msg_.sdk_version = std::move(arg);
    return Init_GetVersionInfo_Response_hand_firmware_version(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::GetVersionInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::GetVersionInfo_Response>()
{
  return rysen_apexhand_msgs::srv::builder::Init_GetVersionInfo_Response_sdk_version();
}

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__GET_VERSION_INFO__BUILDER_HPP_
