// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_simulator:msg/RadarObject.idl
// generated code does not contain a copyright notice

#ifndef RADAR_SIMULATOR__MSG__DETAIL__RADAR_OBJECT__BUILDER_HPP_
#define RADAR_SIMULATOR__MSG__DETAIL__RADAR_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_simulator/msg/detail/radar_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_simulator
{

namespace msg
{

namespace builder
{

class Init_RadarObject_object_id
{
public:
  explicit Init_RadarObject_object_id(::radar_simulator::msg::RadarObject & msg)
  : msg_(msg)
  {}
  ::radar_simulator::msg::RadarObject object_id(::radar_simulator::msg::RadarObject::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_simulator::msg::RadarObject msg_;
};

class Init_RadarObject_rcs
{
public:
  explicit Init_RadarObject_rcs(::radar_simulator::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_object_id rcs(::radar_simulator::msg::RadarObject::_rcs_type arg)
  {
    msg_.rcs = std::move(arg);
    return Init_RadarObject_object_id(msg_);
  }

private:
  ::radar_simulator::msg::RadarObject msg_;
};

class Init_RadarObject_angle
{
public:
  explicit Init_RadarObject_angle(::radar_simulator::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_rcs angle(::radar_simulator::msg::RadarObject::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_RadarObject_rcs(msg_);
  }

private:
  ::radar_simulator::msg::RadarObject msg_;
};

class Init_RadarObject_velocity
{
public:
  explicit Init_RadarObject_velocity(::radar_simulator::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_angle velocity(::radar_simulator::msg::RadarObject::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_RadarObject_angle(msg_);
  }

private:
  ::radar_simulator::msg::RadarObject msg_;
};

class Init_RadarObject_distance
{
public:
  Init_RadarObject_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarObject_velocity distance(::radar_simulator::msg::RadarObject::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_RadarObject_velocity(msg_);
  }

private:
  ::radar_simulator::msg::RadarObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_simulator::msg::RadarObject>()
{
  return radar_simulator::msg::builder::Init_RadarObject_distance();
}

}  // namespace radar_simulator

#endif  // RADAR_SIMULATOR__MSG__DETAIL__RADAR_OBJECT__BUILDER_HPP_
