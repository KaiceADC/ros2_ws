// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ti_mmwave_msgs:msg/DataFrame.idl
// generated code does not contain a copyright notice

#ifndef TI_MMWAVE_MSGS__MSG__DETAIL__DATA_FRAME__BUILDER_HPP_
#define TI_MMWAVE_MSGS__MSG__DETAIL__DATA_FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ti_mmwave_msgs/msg/detail/data_frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ti_mmwave_msgs
{

namespace msg
{

namespace builder
{

class Init_DataFrame_data
{
public:
  explicit Init_DataFrame_data(::ti_mmwave_msgs::msg::DataFrame & msg)
  : msg_(msg)
  {}
  ::ti_mmwave_msgs::msg::DataFrame data(::ti_mmwave_msgs::msg::DataFrame::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ti_mmwave_msgs::msg::DataFrame msg_;
};

class Init_DataFrame_header
{
public:
  Init_DataFrame_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DataFrame_data header(::ti_mmwave_msgs::msg::DataFrame::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DataFrame_data(msg_);
  }

private:
  ::ti_mmwave_msgs::msg::DataFrame msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ti_mmwave_msgs::msg::DataFrame>()
{
  return ti_mmwave_msgs::msg::builder::Init_DataFrame_header();
}

}  // namespace ti_mmwave_msgs

#endif  // TI_MMWAVE_MSGS__MSG__DETAIL__DATA_FRAME__BUILDER_HPP_
