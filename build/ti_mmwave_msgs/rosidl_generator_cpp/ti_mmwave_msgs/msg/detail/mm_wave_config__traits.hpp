// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ti_mmwave_msgs:msg/MMWaveConfig.idl
// generated code does not contain a copyright notice

#ifndef TI_MMWAVE_MSGS__MSG__DETAIL__MM_WAVE_CONFIG__TRAITS_HPP_
#define TI_MMWAVE_MSGS__MSG__DETAIL__MM_WAVE_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ti_mmwave_msgs/msg/detail/mm_wave_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ti_mmwave_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MMWaveConfig & msg,
  std::ostream & out)
{
  out << "{";
  // member: num_adc_samples
  {
    out << "num_adc_samples: ";
    rosidl_generator_traits::value_to_yaml(msg.num_adc_samples, out);
    out << ", ";
  }

  // member: num_loops
  {
    out << "num_loops: ";
    rosidl_generator_traits::value_to_yaml(msg.num_loops, out);
    out << ", ";
  }

  // member: num_tx
  {
    out << "num_tx: ";
    rosidl_generator_traits::value_to_yaml(msg.num_tx, out);
    out << ", ";
  }

  // member: num_lvds_lanes
  {
    out << "num_lvds_lanes: ";
    rosidl_generator_traits::value_to_yaml(msg.num_lvds_lanes, out);
    out << ", ";
  }

  // member: f_s
  {
    out << "f_s: ";
    rosidl_generator_traits::value_to_yaml(msg.f_s, out);
    out << ", ";
  }

  // member: f_c
  {
    out << "f_c: ";
    rosidl_generator_traits::value_to_yaml(msg.f_c, out);
    out << ", ";
  }

  // member: bw
  {
    out << "bw: ";
    rosidl_generator_traits::value_to_yaml(msg.bw, out);
    out << ", ";
  }

  // member: pri
  {
    out << "pri: ";
    rosidl_generator_traits::value_to_yaml(msg.pri, out);
    out << ", ";
  }

  // member: t_fr
  {
    out << "t_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.t_fr, out);
    out << ", ";
  }

  // member: range_max
  {
    out << "range_max: ";
    rosidl_generator_traits::value_to_yaml(msg.range_max, out);
    out << ", ";
  }

  // member: range_res
  {
    out << "range_res: ";
    rosidl_generator_traits::value_to_yaml(msg.range_res, out);
    out << ", ";
  }

  // member: doppler_max
  {
    out << "doppler_max: ";
    rosidl_generator_traits::value_to_yaml(msg.doppler_max, out);
    out << ", ";
  }

  // member: doppler_res
  {
    out << "doppler_res: ";
    rosidl_generator_traits::value_to_yaml(msg.doppler_res, out);
    out << ", ";
  }

  // member: raw_commands
  {
    out << "raw_commands: ";
    rosidl_generator_traits::value_to_yaml(msg.raw_commands, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MMWaveConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num_adc_samples
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_adc_samples: ";
    rosidl_generator_traits::value_to_yaml(msg.num_adc_samples, out);
    out << "\n";
  }

  // member: num_loops
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_loops: ";
    rosidl_generator_traits::value_to_yaml(msg.num_loops, out);
    out << "\n";
  }

  // member: num_tx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_tx: ";
    rosidl_generator_traits::value_to_yaml(msg.num_tx, out);
    out << "\n";
  }

  // member: num_lvds_lanes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_lvds_lanes: ";
    rosidl_generator_traits::value_to_yaml(msg.num_lvds_lanes, out);
    out << "\n";
  }

  // member: f_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_s: ";
    rosidl_generator_traits::value_to_yaml(msg.f_s, out);
    out << "\n";
  }

  // member: f_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_c: ";
    rosidl_generator_traits::value_to_yaml(msg.f_c, out);
    out << "\n";
  }

  // member: bw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bw: ";
    rosidl_generator_traits::value_to_yaml(msg.bw, out);
    out << "\n";
  }

  // member: pri
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pri: ";
    rosidl_generator_traits::value_to_yaml(msg.pri, out);
    out << "\n";
  }

  // member: t_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.t_fr, out);
    out << "\n";
  }

  // member: range_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range_max: ";
    rosidl_generator_traits::value_to_yaml(msg.range_max, out);
    out << "\n";
  }

  // member: range_res
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range_res: ";
    rosidl_generator_traits::value_to_yaml(msg.range_res, out);
    out << "\n";
  }

  // member: doppler_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "doppler_max: ";
    rosidl_generator_traits::value_to_yaml(msg.doppler_max, out);
    out << "\n";
  }

  // member: doppler_res
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "doppler_res: ";
    rosidl_generator_traits::value_to_yaml(msg.doppler_res, out);
    out << "\n";
  }

  // member: raw_commands
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "raw_commands: ";
    rosidl_generator_traits::value_to_yaml(msg.raw_commands, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MMWaveConfig & msg, bool use_flow_style = false)
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

}  // namespace ti_mmwave_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ti_mmwave_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ti_mmwave_msgs::msg::MMWaveConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  ti_mmwave_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ti_mmwave_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ti_mmwave_msgs::msg::MMWaveConfig & msg)
{
  return ti_mmwave_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ti_mmwave_msgs::msg::MMWaveConfig>()
{
  return "ti_mmwave_msgs::msg::MMWaveConfig";
}

template<>
inline const char * name<ti_mmwave_msgs::msg::MMWaveConfig>()
{
  return "ti_mmwave_msgs/msg/MMWaveConfig";
}

template<>
struct has_fixed_size<ti_mmwave_msgs::msg::MMWaveConfig>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ti_mmwave_msgs::msg::MMWaveConfig>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ti_mmwave_msgs::msg::MMWaveConfig>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TI_MMWAVE_MSGS__MSG__DETAIL__MM_WAVE_CONFIG__TRAITS_HPP_
