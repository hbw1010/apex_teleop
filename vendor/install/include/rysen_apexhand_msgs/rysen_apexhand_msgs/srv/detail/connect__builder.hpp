// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rysen_apexhand_msgs:srv/Connect.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__SRV__DETAIL__CONNECT__BUILDER_HPP_
#define RYSEN_APEXHAND_MSGS__SRV__DETAIL__CONNECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rysen_apexhand_msgs/srv/detail/connect__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rysen_apexhand_msgs
{

namespace srv
{

namespace builder
{

class Init_Connect_Request_connection_type
{
public:
  explicit Init_Connect_Request_connection_type(::rysen_apexhand_msgs::srv::Connect_Request & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::srv::Connect_Request connection_type(::rysen_apexhand_msgs::srv::Connect_Request::_connection_type_type arg)
  {
    msg_.connection_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::Connect_Request msg_;
};

class Init_Connect_Request_ip
{
public:
  explicit Init_Connect_Request_ip(::rysen_apexhand_msgs::srv::Connect_Request & msg)
  : msg_(msg)
  {}
  Init_Connect_Request_connection_type ip(::rysen_apexhand_msgs::srv::Connect_Request::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_Connect_Request_connection_type(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::Connect_Request msg_;
};

class Init_Connect_Request_connect
{
public:
  Init_Connect_Request_connect()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Connect_Request_ip connect(::rysen_apexhand_msgs::srv::Connect_Request::_connect_type arg)
  {
    msg_.connect = std::move(arg);
    return Init_Connect_Request_ip(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::Connect_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::Connect_Request>()
{
  return rysen_apexhand_msgs::srv::builder::Init_Connect_Request_connect();
}

}  // namespace rysen_apexhand_msgs


namespace rysen_apexhand_msgs
{

namespace srv
{

namespace builder
{

class Init_Connect_Response_message
{
public:
  explicit Init_Connect_Response_message(::rysen_apexhand_msgs::srv::Connect_Response & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::srv::Connect_Response message(::rysen_apexhand_msgs::srv::Connect_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::Connect_Response msg_;
};

class Init_Connect_Response_success
{
public:
  Init_Connect_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Connect_Response_message success(::rysen_apexhand_msgs::srv::Connect_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Connect_Response_message(msg_);
  }

private:
  ::rysen_apexhand_msgs::srv::Connect_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::srv::Connect_Response>()
{
  return rysen_apexhand_msgs::srv::builder::Init_Connect_Response_success();
}

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__SRV__DETAIL__CONNECT__BUILDER_HPP_
