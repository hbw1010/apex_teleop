// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rysen_apexhand_msgs:srv/GetConnectionInfo.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__GET_CONNECTION_INFO__BUILDER_HPP_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__GET_CONNECTION_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rysen_apexhand_msgs/srv/detail/get_connection_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rysen_apexhand_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::GetConnectionInfo_Request>()
{
  return ::rysen_apexhand_msgs::srv::GetConnectionInfo_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rysen_apexhand_msgs


namespace rysen_apexhand_msgs
{

namespace srv
{

namespace builder
{

class Init_GetConnectionInfo_Response_hardware_uids
{
public:
  explicit Init_GetConnectionInfo_Response_hardware_uids(::rysen_apexhand_msgs::srv::GetConnectionInfo_Response & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::srv::GetConnectionInfo_Response hardware_uids(::rysen_apexhand_msgs::srv::GetConnectionInfo_Response::_hardware_uids_type arg)
  {
    msg_.hardware_uids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::GetConnectionInfo_Response msg_;
};

class Init_GetConnectionInfo_Response_hand_sides
{
public:
  explicit Init_GetConnectionInfo_Response_hand_sides(::rysen_apexhand_msgs::srv::GetConnectionInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetConnectionInfo_Response_hardware_uids hand_sides(::rysen_apexhand_msgs::srv::GetConnectionInfo_Response::_hand_sides_type arg)
  {
    msg_.hand_sides = std::move(arg);
    return Init_GetConnectionInfo_Response_hardware_uids(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::GetConnectionInfo_Response msg_;
};

class Init_GetConnectionInfo_Response_device_ips
{
public:
  explicit Init_GetConnectionInfo_Response_device_ips(::rysen_apexhand_msgs::srv::GetConnectionInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetConnectionInfo_Response_hand_sides device_ips(::rysen_apexhand_msgs::srv::GetConnectionInfo_Response::_device_ips_type arg)
  {
    msg_.device_ips = std::move(arg);
    return Init_GetConnectionInfo_Response_hand_sides(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::GetConnectionInfo_Response msg_;
};

class Init_GetConnectionInfo_Response_connected
{
public:
  explicit Init_GetConnectionInfo_Response_connected(::rysen_apexhand_msgs::srv::GetConnectionInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetConnectionInfo_Response_device_ips connected(::rysen_apexhand_msgs::srv::GetConnectionInfo_Response::_connected_type arg)
  {
    msg_.connected = std::move(arg);
    return Init_GetConnectionInfo_Response_device_ips(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::GetConnectionInfo_Response msg_;
};

class Init_GetConnectionInfo_Response_ips
{
public:
  Init_GetConnectionInfo_Response_ips()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetConnectionInfo_Response_connected ips(::rysen_apexhand_msgs::srv::GetConnectionInfo_Response::_ips_type arg)
  {
    msg_.ips = std::move(arg);
    return Init_GetConnectionInfo_Response_connected(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::GetConnectionInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::GetConnectionInfo_Response>()
{
  return rysen_apexhand_msgs::srv::builder::Init_GetConnectionInfo_Response_ips();
}

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__GET_CONNECTION_INFO__BUILDER_HPP_
