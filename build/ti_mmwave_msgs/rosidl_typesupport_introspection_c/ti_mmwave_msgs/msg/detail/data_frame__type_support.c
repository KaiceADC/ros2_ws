// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ti_mmwave_msgs:msg/DataFrame.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ti_mmwave_msgs/msg/detail/data_frame__rosidl_typesupport_introspection_c.h"
#include "ti_mmwave_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ti_mmwave_msgs/msg/detail/data_frame__functions.h"
#include "ti_mmwave_msgs/msg/detail/data_frame__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__DataFrame_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ti_mmwave_msgs__msg__DataFrame__init(message_memory);
}

void ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__DataFrame_fini_function(void * message_memory)
{
  ti_mmwave_msgs__msg__DataFrame__fini(message_memory);
}

size_t ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__size_function__DataFrame__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__get_const_function__DataFrame__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__get_function__DataFrame__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__fetch_function__DataFrame__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__get_const_function__DataFrame__data(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__assign_function__DataFrame__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__get_function__DataFrame__data(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__resize_function__DataFrame__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__DataFrame_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ti_mmwave_msgs__msg__DataFrame, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ti_mmwave_msgs__msg__DataFrame, data),  // bytes offset in struct
    NULL,  // default value
    ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__size_function__DataFrame__data,  // size() function pointer
    ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__get_const_function__DataFrame__data,  // get_const(index) function pointer
    ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__get_function__DataFrame__data,  // get(index) function pointer
    ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__fetch_function__DataFrame__data,  // fetch(index, &value) function pointer
    ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__assign_function__DataFrame__data,  // assign(index, value) function pointer
    ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__resize_function__DataFrame__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__DataFrame_message_members = {
  "ti_mmwave_msgs__msg",  // message namespace
  "DataFrame",  // message name
  2,  // number of fields
  sizeof(ti_mmwave_msgs__msg__DataFrame),
  ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__DataFrame_message_member_array,  // message members
  ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__DataFrame_init_function,  // function to initialize message memory (memory has to be allocated)
  ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__DataFrame_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__DataFrame_message_type_support_handle = {
  0,
  &ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__DataFrame_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ti_mmwave_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ti_mmwave_msgs, msg, DataFrame)() {
  ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__DataFrame_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__DataFrame_message_type_support_handle.typesupport_identifier) {
    ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__DataFrame_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ti_mmwave_msgs__msg__DataFrame__rosidl_typesupport_introspection_c__DataFrame_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
