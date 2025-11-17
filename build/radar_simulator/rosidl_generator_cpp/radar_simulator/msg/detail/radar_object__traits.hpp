// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_simulator:msg/RadarObject.idl
// generated code does not contain a copyright notice

#ifndef RADAR_SIMULATOR__MSG__DETAIL__RADAR_OBJECT__TRAITS_HPP_
#define RADAR_SIMULATOR__MSG__DETAIL__RADAR_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_simulator/msg/detail/radar_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace radar_simulator
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarObject & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << ", ";
  }

  // member: rcs
  {
    out << "rcs: ";
    rosidl_generator_traits::value_to_yaml(msg.rcs, out);
    out << ", ";
  }

  // member: object_id
  {
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadarObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: rcs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rcs: ";
    rosidl_generator_traits::value_to_yaml(msg.rcs, out);
    out << "\n";
  }

  // member: object_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarObject & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace radar_simulator

namespace rosidl_generator_traits
{

[[deprecated("use radar_simulator::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const radar_simulator::msg::RadarObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_simulator::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_simulator::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_simulator::msg::RadarObject & msg)
{
  return radar_simulator::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_simulator::msg::RadarObject>()
{
  return "radar_simulator::msg::RadarObject";
}

template<>
inline const char * name<radar_simulator::msg::RadarObject>()
{
  return "radar_simulator/msg/RadarObject";
}

template<>
struct has_fixed_size<radar_simulator::msg::RadarObject>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<radar_simulator::msg::RadarObject>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<radar_simulator::msg::RadarObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_SIMULATOR__MSG__DETAIL__RADAR_OBJECT__TRAITS_HPP_
