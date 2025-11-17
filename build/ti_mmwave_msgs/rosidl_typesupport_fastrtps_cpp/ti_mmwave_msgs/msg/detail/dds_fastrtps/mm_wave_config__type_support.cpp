// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ti_mmwave_msgs:msg/MMWaveConfig.idl
// generated code does not contain a copyright notice
#include "ti_mmwave_msgs/msg/detail/mm_wave_config__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ti_mmwave_msgs/msg/detail/mm_wave_config__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ti_mmwave_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ti_mmwave_msgs
cdr_serialize(
  const ti_mmwave_msgs::msg::MMWaveConfig & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: num_adc_samples
  cdr << ros_message.num_adc_samples;
  // Member: num_loops
  cdr << ros_message.num_loops;
  // Member: num_tx
  cdr << ros_message.num_tx;
  // Member: num_lvds_lanes
  cdr << ros_message.num_lvds_lanes;
  // Member: f_s
  cdr << ros_message.f_s;
  // Member: f_c
  cdr << ros_message.f_c;
  // Member: bw
  cdr << ros_message.bw;
  // Member: pri
  cdr << ros_message.pri;
  // Member: t_fr
  cdr << ros_message.t_fr;
  // Member: range_max
  cdr << ros_message.range_max;
  // Member: range_res
  cdr << ros_message.range_res;
  // Member: doppler_max
  cdr << ros_message.doppler_max;
  // Member: doppler_res
  cdr << ros_message.doppler_res;
  // Member: raw_commands
  cdr << ros_message.raw_commands;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ti_mmwave_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ti_mmwave_msgs::msg::MMWaveConfig & ros_message)
{
  // Member: num_adc_samples
  cdr >> ros_message.num_adc_samples;

  // Member: num_loops
  cdr >> ros_message.num_loops;

  // Member: num_tx
  cdr >> ros_message.num_tx;

  // Member: num_lvds_lanes
  cdr >> ros_message.num_lvds_lanes;

  // Member: f_s
  cdr >> ros_message.f_s;

  // Member: f_c
  cdr >> ros_message.f_c;

  // Member: bw
  cdr >> ros_message.bw;

  // Member: pri
  cdr >> ros_message.pri;

  // Member: t_fr
  cdr >> ros_message.t_fr;

  // Member: range_max
  cdr >> ros_message.range_max;

  // Member: range_res
  cdr >> ros_message.range_res;

  // Member: doppler_max
  cdr >> ros_message.doppler_max;

  // Member: doppler_res
  cdr >> ros_message.doppler_res;

  // Member: raw_commands
  cdr >> ros_message.raw_commands;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ti_mmwave_msgs
get_serialized_size(
  const ti_mmwave_msgs::msg::MMWaveConfig & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: num_adc_samples
  {
    size_t item_size = sizeof(ros_message.num_adc_samples);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_loops
  {
    size_t item_size = sizeof(ros_message.num_loops);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_tx
  {
    size_t item_size = sizeof(ros_message.num_tx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_lvds_lanes
  {
    size_t item_size = sizeof(ros_message.num_lvds_lanes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f_s
  {
    size_t item_size = sizeof(ros_message.f_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f_c
  {
    size_t item_size = sizeof(ros_message.f_c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bw
  {
    size_t item_size = sizeof(ros_message.bw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pri
  {
    size_t item_size = sizeof(ros_message.pri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_fr
  {
    size_t item_size = sizeof(ros_message.t_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: range_max
  {
    size_t item_size = sizeof(ros_message.range_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: range_res
  {
    size_t item_size = sizeof(ros_message.range_res);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: doppler_max
  {
    size_t item_size = sizeof(ros_message.doppler_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: doppler_res
  {
    size_t item_size = sizeof(ros_message.doppler_res);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: raw_commands
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.raw_commands.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ti_mmwave_msgs
max_serialized_size_MMWaveConfig(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: num_adc_samples
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: num_loops
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: num_tx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: num_lvds_lanes
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: f_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: f_c
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: t_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: range_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: range_res
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: doppler_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: doppler_res
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: raw_commands
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ti_mmwave_msgs::msg::MMWaveConfig;
    is_plain =
      (
      offsetof(DataType, raw_commands) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MMWaveConfig__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ti_mmwave_msgs::msg::MMWaveConfig *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MMWaveConfig__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ti_mmwave_msgs::msg::MMWaveConfig *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MMWaveConfig__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ti_mmwave_msgs::msg::MMWaveConfig *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MMWaveConfig__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MMWaveConfig(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MMWaveConfig__callbacks = {
  "ti_mmwave_msgs::msg",
  "MMWaveConfig",
  _MMWaveConfig__cdr_serialize,
  _MMWaveConfig__cdr_deserialize,
  _MMWaveConfig__get_serialized_size,
  _MMWaveConfig__max_serialized_size
};

static rosidl_message_type_support_t _MMWaveConfig__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MMWaveConfig__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ti_mmwave_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ti_mmwave_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ti_mmwave_msgs::msg::MMWaveConfig>()
{
  return &ti_mmwave_msgs::msg::typesupport_fastrtps_cpp::_MMWaveConfig__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ti_mmwave_msgs, msg, MMWaveConfig)() {
  return &ti_mmwave_msgs::msg::typesupport_fastrtps_cpp::_MMWaveConfig__handle;
}

#ifdef __cplusplus
}
#endif
