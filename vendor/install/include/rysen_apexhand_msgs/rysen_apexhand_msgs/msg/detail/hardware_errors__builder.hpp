// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rysen_apexhand_msgs:msg/HardwareErrors.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__HARDWARE_ERRORS__BUILDER_HPP_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__HARDWARE_ERRORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rysen_apexhand_msgs/msg/detail/hardware_errors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rysen_apexhand_msgs
{

namespace msg
{

namespace builder
{

class Init_HardwareErrors_little_error_code
{
public:
  explicit Init_HardwareErrors_little_error_code(::rysen_apexhand_msgs::msg::HardwareErrors & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::msg::HardwareErrors little_error_code(::rysen_apexhand_msgs::msg::HardwareErrors::_little_error_code_type arg)
  {
    msg_.little_error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::HardwareErrors msg_;
};

class Init_HardwareErrors_ring_error_code
{
public:
  explicit Init_HardwareErrors_ring_error_code(::rysen_apexhand_msgs::msg::HardwareErrors & msg)
  : msg_(msg)
  {}
  Init_HardwareErrors_little_error_code ring_error_code(::rysen_apexhand_msgs::msg::HardwareErrors::_ring_error_code_type arg)
  {
    msg_.ring_error_code = std::move(arg);
    return Init_HardwareErrors_little_error_code(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::HardwareErrors msg_;
};

class Init_HardwareErrors_middle_error_code
{
public:
  explicit Init_HardwareErrors_middle_error_code(::rysen_apexhand_msgs::msg::HardwareErrors & msg)
  : msg_(msg)
  {}
  Init_HardwareErrors_ring_error_code middle_error_code(::rysen_apexhand_msgs::msg::HardwareErrors::_middle_error_code_type arg)
  {
    msg_.middle_error_code = std::move(arg);
    return Init_HardwareErrors_ring_error_code(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::HardwareErrors msg_;
};

class Init_HardwareErrors_index_error_code
{
public:
  explicit Init_HardwareErrors_index_error_code(::rysen_apexhand_msgs::msg::HardwareErrors & msg)
  : msg_(msg)
  {}
  Init_HardwareErrors_middle_error_code index_error_code(::rysen_apexhand_msgs::msg::HardwareErrors::_index_error_code_type arg)
  {
    msg_.index_error_code = std::move(arg);
    return Init_HardwareErrors_middle_error_code(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::HardwareErrors msg_;
};

class Init_HardwareErrors_thumb_error_code
{
public:
  explicit Init_HardwareErrors_thumb_error_code(::rysen_apexhand_msgs::msg::HardwareErrors & msg)
  : msg_(msg)
  {}
  Init_HardwareErrors_index_error_code thumb_error_code(::rysen_apexhand_msgs::msg::HardwareErrors::_thumb_error_code_type arg)
  {
    msg_.thumb_error_code = std::move(arg);
    return Init_HardwareErrors_index_error_code(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::HardwareErrors msg_;
};

class Init_HardwareErrors_device_error_code
{
public:
  explicit Init_HardwareErrors_device_error_code(::rysen_apexhand_msgs::msg::HardwareErrors & msg)
  : msg_(msg)
  {}
  Init_HardwareErrors_thumb_error_code device_error_code(::rysen_apexhand_msgs::msg::HardwareErrors::_device_error_code_type arg)
  {
    msg_.device_error_code = std::move(arg);
    return Init_HardwareErrors_thumb_error_code(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::HardwareErrors msg_;
};

class Init_HardwareErrors_header
{
public:
  Init_HardwareErrors_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HardwareErrors_device_error_code header(::rysen_apexhand_msgs::msg::HardwareErrors::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HardwareErrors_device_error_code(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::HardwareErrors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::msg::HardwareErrors>()
{
  return rysen_apexhand_msgs::msg::builder::Init_HardwareErrors_header();
}

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__HARDWARE_ERRORS__BUILDER_HPP_
