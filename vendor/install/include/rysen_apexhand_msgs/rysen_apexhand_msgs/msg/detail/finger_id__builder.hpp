// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rysen_apexhand_msgs:msg/FingerId.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__FINGER_ID__BUILDER_HPP_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__FINGER_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rysen_apexhand_msgs/msg/detail/finger_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rysen_apexhand_msgs
{

namespace msg
{

namespace builder
{

class Init_FingerId_finger_id
{
public:
  Init_FingerId_finger_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rysen_apexhand_msgs::msg::FingerId finger_id(::rysen_apexhand_msgs::msg::FingerId::_finger_id_type arg)
  {
    msg_.finger_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::FingerId msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::msg::FingerId>()
{
  return rysen_apexhand_msgs::msg::builder::Init_FingerId_finger_id();
}

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__FINGER_ID__BUILDER_HPP_
