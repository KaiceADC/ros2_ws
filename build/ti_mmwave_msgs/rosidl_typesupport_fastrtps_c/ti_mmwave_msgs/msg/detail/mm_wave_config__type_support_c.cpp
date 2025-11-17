// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ti_mmwave_msgs:msg/MMWaveConfig.idl
// generated code does not contain a copyright notice
#include "ti_mmwave_msgs/msg/detail/mm_wave_config__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ti_mmwave_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ti_mmwave_msgs/msg/detail/mm_wave_config__struct.h"
#include "ti_mmwave_msgs/msg/detail/mm_wave_config__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // raw_commands
#include "rosidl_runtime_c/string_functions.h"  // raw_commands

// forward declare type support functions


using _MMWaveConfig__ros_msg_type = ti_mmwave_msgs__msg__MMWaveConfig;

static bool _MMWaveConfig__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MMWaveConfig__ros_msg_type * ros_message = static_cast<const _MMWaveConfig__ros_msg_type *>(untyped_ros_message);
  // Field name: num_adc_samples
  {
    cdr << ros_message->num_adc_samples;
  }

  // Field name: num_loops
  {
    cdr << ros_message->num_loops;
  }

  // Field name: num_tx
  {
    cdr << ros_message->num_tx;
  }

  // Field name: num_lvds_lanes
  {
    cdr << ros_message->num_lvds_lanes;
  }

  // Field name: f_s
  {
    cdr << ros_message->f_s;
  }

  // Field name: f_c
  {
    cdr << ros_message->f_c;
  }

  // Field name: bw
  {
    cdr << ros_message->bw;
  }

  // Field name: pri
  {
    cdr << ros_message->pri;
  }

  // Field name: t_fr
  {
    cdr << ros_message->t_fr;
  }

  // Field name: range_max
  {
    cdr << ros_message->range_max;
  }

  // Field name: range_res
  {
    cdr << ros_message->range_res;
  }

  // Field name: doppler_max
  {
    cdr << ros_message->doppler_max;
  }

  // Field name: doppler_res
  {
    cdr << ros_message->doppler_res;
  }

  // Field name: raw_commands
  {
    const rosidl_runtime_c__String * str = &ros_message->raw_commands;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _MMWaveConfig__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MMWaveConfig__ros_msg_type * ros_message = static_cast<_MMWaveConfig__ros_msg_type *>(untyped_ros_message);
  // Field name: num_adc_samples
  {
    cdr >> ros_message->num_adc_samples;
  }

  // Field name: num_loops
  {
    cdr >> ros_message->num_loops;
  }

  // Field name: num_tx
  {
    cdr >> ros_message->num_tx;
  }

  // Field name: num_lvds_lanes
  {
    cdr >> ros_message->num_lvds_lanes;
  }

  // Field name: f_s
  {
    cdr >> ros_message->f_s;
  }

  // Field name: f_c
  {
    cdr >> ros_message->f_c;
  }

  // Field name: bw
  {
    cdr >> ros_message->bw;
  }

  // Field name: pri
  {
    cdr >> ros_message->pri;
  }

  // Field name: t_fr
  {
    cdr >> ros_message->t_fr;
  }

  // Field name: range_max
  {
    cdr >> ros_message->range_max;
  }

  // Field name: range_res
  {
    cdr >> ros_message->range_res;
  }

  // Field name: doppler_max
  {
    cdr >> ros_message->doppler_max;
  }

  // Field name: doppler_res
  {
    cdr >> ros_message->doppler_res;
  }

  // Field name: raw_commands
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->raw_commands.data) {
      rosidl_runtime_c__String__init(&ros_message->raw_commands);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->raw_commands,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'raw_commands'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ti_mmwave_msgs
size_t get_serialized_size_ti_mmwave_msgs__msg__MMWaveConfig(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MMWaveConfig__ros_msg_type * ros_message = static_cast<const _MMWaveConfig__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name num_adc_samples
  {
    size_t item_size = sizeof(ros_message->num_adc_samples);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_loops
  {
    size_t item_size = sizeof(ros_message->num_loops);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_tx
  {
    size_t item_size = sizeof(ros_message->num_tx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_lvds_lanes
  {
    size_t item_size = sizeof(ros_message->num_lvds_lanes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f_s
  {
    size_t item_size = sizeof(ros_message->f_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f_c
  {
    size_t item_size = sizeof(ros_message->f_c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bw
  {
    size_t item_size = sizeof(ros_message->bw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pri
  {
    size_t item_size = sizeof(ros_message->pri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_fr
  {
    size_t item_size = sizeof(ros_message->t_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name range_max
  {
    size_t item_size = sizeof(ros_message->range_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name range_res
  {
    size_t item_size = sizeof(ros_message->range_res);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name doppler_max
  {
    size_t item_size = sizeof(ros_message->doppler_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name doppler_res
  {
    size_t item_size = sizeof(ros_message->doppler_res);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name raw_commands
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->raw_commands.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _MMWaveConfig__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ti_mmwave_msgs__msg__MMWaveConfig(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ti_mmwave_msgs
size_t max_serialized_size_ti_mmwave_msgs__msg__MMWaveConfig(
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

  // member: num_adc_samples
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: num_loops
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: num_tx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: num_lvds_lanes
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: f_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: f_c
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: t_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: range_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: range_res
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: doppler_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: doppler_res
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: raw_commands
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
    using DataType = ti_mmwave_msgs__msg__MMWaveConfig;
    is_plain =
      (
      offsetof(DataType, raw_commands) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MMWaveConfig__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ti_mmwave_msgs__msg__MMWaveConfig(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MMWaveConfig = {
  "ti_mmwave_msgs::msg",
  "MMWaveConfig",
  _MMWaveConfig__cdr_serialize,
  _MMWaveConfig__cdr_deserialize,
  _MMWaveConfig__get_serialized_size,
  _MMWaveConfig__max_serialized_size
};

static rosidl_message_type_support_t _MMWaveConfig__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MMWaveConfig,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ti_mmwave_msgs, msg, MMWaveConfig)() {
  return &_MMWaveConfig__type_support;
}

#if defined(__cplusplus)
}
#endif
