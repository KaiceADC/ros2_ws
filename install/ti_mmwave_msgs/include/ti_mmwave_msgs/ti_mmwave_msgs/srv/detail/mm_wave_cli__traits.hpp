// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ti_mmwave_msgs:srv/MMWaveCLI.idl
// generated code does not contain a copyright notice

#ifndef TI_MMWAVE_MSGS__SRV__DETAIL__MM_WAVE_CLI__TRAITS_HPP_
#define TI_MMWAVE_MSGS__SRV__DETAIL__MM_WAVE_CLI__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ti_mmwave_msgs/srv/detail/mm_wave_cli__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ti_mmwave_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MMWaveCLI_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: comm
  {
    out << "comm: ";
    rosidl_generator_traits::value_to_yaml(msg.comm, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MMWaveCLI_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: comm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "comm: ";
    rosidl_generator_traits::value_to_yaml(msg.comm, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MMWaveCLI_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ti_mmwave_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ti_mmwave_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ti_mmwave_msgs::srv::MMWaveCLI_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ti_mmwave_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ti_mmwave_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ti_mmwave_msgs::srv::MMWaveCLI_Request & msg)
{
  return ti_mmwave_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ti_mmwave_msgs::srv::MMWaveCLI_Request>()
{
  return "ti_mmwave_msgs::srv::MMWaveCLI_Request";
}

template<>
inline const char * name<ti_mmwave_msgs::srv::MMWaveCLI_Request>()
{
  return "ti_mmwave_msgs/srv/MMWaveCLI_Request";
}

template<>
struct has_fixed_size<ti_mmwave_msgs::srv::MMWaveCLI_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ti_mmwave_msgs::srv::MMWaveCLI_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ti_mmwave_msgs::srv::MMWaveCLI_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ti_mmwave_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MMWaveCLI_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: resp
  {
    out << "resp: ";
    rosidl_generator_traits::value_to_yaml(msg.resp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MMWaveCLI_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: resp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resp: ";
    rosidl_generator_traits::value_to_yaml(msg.resp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MMWaveCLI_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ti_mmwave_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ti_mmwave_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ti_mmwave_msgs::srv::MMWaveCLI_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ti_mmwave_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ti_mmwave_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ti_mmwave_msgs::srv::MMWaveCLI_Response & msg)
{
  return ti_mmwave_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ti_mmwave_msgs::srv::MMWaveCLI_Response>()
{
  return "ti_mmwave_msgs::srv::MMWaveCLI_Response";
}

template<>
inline const char * name<ti_mmwave_msgs::srv::MMWaveCLI_Response>()
{
  return "ti_mmwave_msgs/srv/MMWaveCLI_Response";
}

template<>
struct has_fixed_size<ti_mmwave_msgs::srv::MMWaveCLI_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ti_mmwave_msgs::srv::MMWaveCLI_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ti_mmwave_msgs::srv::MMWaveCLI_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ti_mmwave_msgs::srv::MMWaveCLI>()
{
  return "ti_mmwave_msgs::srv::MMWaveCLI";
}

template<>
inline const char * name<ti_mmwave_msgs::srv::MMWaveCLI>()
{
  return "ti_mmwave_msgs/srv/MMWaveCLI";
}

template<>
struct has_fixed_size<ti_mmwave_msgs::srv::MMWaveCLI>
  : std::integral_constant<
    bool,
    has_fixed_size<ti_mmwave_msgs::srv::MMWaveCLI_Request>::value &&
    has_fixed_size<ti_mmwave_msgs::srv::MMWaveCLI_Response>::value
  >
{
};

template<>
struct has_bounded_size<ti_mmwave_msgs::srv::MMWaveCLI>
  : std::integral_constant<
    bool,
    has_bounded_size<ti_mmwave_msgs::srv::MMWaveCLI_Request>::value &&
    has_bounded_size<ti_mmwave_msgs::srv::MMWaveCLI_Response>::value
  >
{
};

template<>
struct is_service<ti_mmwave_msgs::srv::MMWaveCLI>
  : std::true_type
{
};

template<>
struct is_service_request<ti_mmwave_msgs::srv::MMWaveCLI_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ti_mmwave_msgs::srv::MMWaveCLI_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TI_MMWAVE_MSGS__SRV__DETAIL__MM_WAVE_CLI__TRAITS_HPP_
