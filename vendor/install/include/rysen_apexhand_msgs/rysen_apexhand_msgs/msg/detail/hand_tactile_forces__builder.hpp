// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rysen_apexhand_msgs:msg/HandTactileForces.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__HAND_TACTILE_FORCES__BUILDER_HPP_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__HAND_TACTILE_FORCES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rysen_apexhand_msgs/msg/detail/hand_tactile_forces__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rysen_apexhand_msgs
{

namespace msg
{

namespace builder
{

class Init_HandTactileForces_palm_center
{
public:
  explicit Init_HandTactileForces_palm_center(::rysen_apexhand_msgs::msg::HandTactileForces & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::msg::HandTactileForces palm_center(::rysen_apexhand_msgs::msg::HandTactileForces::_palm_center_type arg)
  {
    msg_.palm_center = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::HandTactileForces msg_;
};

class Init_HandTactileForces_thumb
{
public:
  explicit Init_HandTactileForces_thumb(::rysen_apexhand_msgs::msg::HandTactileForces & msg)
  : msg_(msg)
  {}
  Init_HandTactileForces_palm_center thumb(::rysen_apexhand_msgs::msg::HandTactileForces::_thumb_type arg)
  {
    msg_.thumb = std::move(arg);
    return Init_HandTactileForces_palm_center(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::HandTactileForces msg_;
};

class Init_HandTactileForces_little
{
public:
  explicit Init_HandTactileForces_little(::rysen_apexhand_msgs::msg::HandTactileForces & msg)
  : msg_(msg)
  {}
  Init_HandTactileForces_thumb little(::rysen_apexhand_msgs::msg::HandTactileForces::_little_type arg)
  {
    msg_.little = std::move(arg);
    return Init_HandTactileForces_thumb(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::HandTactileForces msg_;
};

class Init_HandTactileForces_ring
{
public:
  explicit Init_HandTactileForces_ring(::rysen_apexhand_msgs::msg::HandTactileForces & msg)
  : msg_(msg)
  {}
  Init_HandTactileForces_little ring(::rysen_apexhand_msgs::msg::HandTactileForces::_ring_type arg)
  {
    msg_.ring = std::move(arg);
    return Init_HandTactileForces_little(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::HandTactileForces msg_;
};

class Init_HandTactileForces_middle
{
public:
  explicit Init_HandTactileForces_middle(::rysen_apexhand_msgs::msg::HandTactileForces & msg)
  : msg_(msg)
  {}
  Init_HandTactileForces_ring middle(::rysen_apexhand_msgs::msg::HandTactileForces::_middle_type arg)
  {
    msg_.middle = std::move(arg);
    return Init_HandTactileForces_ring(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::HandTactileForces msg_;
};

class Init_HandTactileForces_index
{
public:
  explicit Init_HandTactileForces_index(::rysen_apexhand_msgs::msg::HandTactileForces & msg)
  : msg_(msg)
  {}
  Init_HandTactileForces_middle index(::rysen_apexhand_msgs::msg::HandTactileForces::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_HandTactileForces_middle(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::HandTactileForces msg_;
};

class Init_HandTactileForces_stamp
{
public:
  Init_HandTactileForces_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HandTactileForces_index stamp(::rysen_apexhand_msgs::msg::HandTactileForces::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_HandTactileForces_index(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::HandTactileForces msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::msg::HandTactileForces>()
{
  return rysen_apexhand_msgs::msg::builder::Init_HandTactileForces_stamp();
}

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__HAND_TACTILE_FORCES__BUILDER_HPP_
