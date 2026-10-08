// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rysen_apexhand_msgs:msg/TactileImage.idl
// generated code does not contain a copyright notice

#ifndef RYSEN_APEXHAND_MSGS__MSG__DETAIL__TACTILE_IMAGE__BUILDER_HPP_
#define RYSEN_APEXHAND_MSGS__MSG__DETAIL__TACTILE_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rysen_apexhand_msgs/msg/detail/tactile_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rysen_apexhand_msgs
{

namespace msg
{

namespace builder
{

class Init_TactileImage_tangential_forces
{
public:
  explicit Init_TactileImage_tangential_forces(::rysen_apexhand_msgs::msg::TactileImage & msg)
  : msg_(msg)
  {}
  ::rysen_apexhand_msgs::msg::TactileImage tangential_forces(::rysen_apexhand_msgs::msg::TactileImage::_tangential_forces_type arg)
  {
    msg_.tangential_forces = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::TactileImage msg_;
};

class Init_TactileImage_gray_image
{
public:
  explicit Init_TactileImage_gray_image(::rysen_apexhand_msgs::msg::TactileImage & msg)
  : msg_(msg)
  {}
  Init_TactileImage_tangential_forces gray_image(::rysen_apexhand_msgs::msg::TactileImage::_gray_image_type arg)
  {
    msg_.gray_image = std::move(arg);
    return Init_TactileImage_tangential_forces(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::TactileImage msg_;
};

class Init_TactileImage_height
{
public:
  explicit Init_TactileImage_height(::rysen_apexhand_msgs::msg::TactileImage & msg)
  : msg_(msg)
  {}
  Init_TactileImage_gray_image height(::rysen_apexhand_msgs::msg::TactileImage::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_TactileImage_gray_image(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::TactileImage msg_;
};

class Init_TactileImage_width
{
public:
  Init_TactileImage_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TactileImage_height width(::rysen_apexhand_msgs::msg::TactileImage::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_TactileImage_height(msg_);
  }

private:
  ::rysen_apexhand_msgs::msg::TactileImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rysen_apexhand_msgs::msg::TactileImage>()
{
  return rysen_apexhand_msgs::msg::builder::Init_TactileImage_width();
}

}  // namespace rysen_apexhand_msgs

#endif  // RYSEN_APEXHAND_MSGS__MSG__DETAIL__TACTILE_IMAGE__BUILDER_HPP_
