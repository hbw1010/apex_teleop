// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rysen_apexhand_msgs:srv/SetDeviceIPAddress.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_DEVICE_IP_ADDRESS__BUILDER_HPP_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_DEVICE_IP_ADDRESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rysen_apexhand_msgs/srv/detail/set_device_ip_address__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rysen_apexhand_msgs
{

namespace srv
{

namespace builder
{

class Init_SetDeviceIPAddress_Request_new_ip
{
public:
  explicit Init_SetDeviceIPAddress_Request_new_ip(::rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request new_ip(::rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request::_new_ip_type arg)
  {
    msg_.new_ip = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request msg_;
};

class Init_SetDeviceIPAddress_Request_original_ip
{
public:
  Init_SetDeviceIPAddress_Request_original_ip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetDeviceIPAddress_Request_new_ip original_ip(::rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request::_original_ip_type arg)
  {
    msg_.original_ip = std::move(arg);
    return Init_SetDeviceIPAddress_Request_new_ip(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::SetDeviceIPAddress_Request>()
{
  return rysen_apexhand_msgs::srv::builder::Init_SetDeviceIPAddress_Request_original_ip();
}

}  // namespace rysen_apexhand_msgs


namespace rysen_apexhand_msgs
{

namespace srv
{

namespace builder
{

class Init_SetDeviceIPAddress_Response_message
{
public:
  explicit Init_SetDeviceIPAddress_Response_message(::rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response message(::rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response msg_;
};

class Init_SetDeviceIPAddress_Response_success
{
public:
  Init_SetDeviceIPAddress_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetDeviceIPAddress_Response_message success(::rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetDeviceIPAddress_Response_message(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::SetDeviceIPAddress_Response>()
{
  return rysen_apexhand_msgs::srv::builder::Init_SetDeviceIPAddress_Response_success();
}

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__SET_DEVICE_IP_ADDRESS__BUILDER_HPP_
