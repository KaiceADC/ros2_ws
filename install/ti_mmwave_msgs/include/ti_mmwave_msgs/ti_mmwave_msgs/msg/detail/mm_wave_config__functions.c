// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ti_mmwave_msgs:msg/MMWaveConfig.idl
// generated code does not contain a copyright notice
#include "ti_mmwave_msgs/msg/detail/mm_wave_config__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `raw_commands`
#include "rosidl_runtime_c/string_functions.h"

bool
ti_mmwave_msgs__msg__MMWaveConfig__init(ti_mmwave_msgs__msg__MMWaveConfig * msg)
{
  if (!msg) {
    return false;
  }
  // num_adc_samples
  // num_loops
  // num_tx
  // num_lvds_lanes
  // f_s
  // f_c
  // bw
  // pri
  // t_fr
  // range_max
  // range_res
  // doppler_max
  // doppler_res
  // raw_commands
  if (!rosidl_runtime_c__String__init(&msg->raw_commands)) {
    ti_mmwave_msgs__msg__MMWaveConfig__fini(msg);
    return false;
  }
  return true;
}

void
ti_mmwave_msgs__msg__MMWaveConfig__fini(ti_mmwave_msgs__msg__MMWaveConfig * msg)
{
  if (!msg) {
    return;
  }
  // num_adc_samples
  // num_loops
  // num_tx
  // num_lvds_lanes
  // f_s
  // f_c
  // bw
  // pri
  // t_fr
  // range_max
  // range_res
  // doppler_max
  // doppler_res
  // raw_commands
  rosidl_runtime_c__String__fini(&msg->raw_commands);
}

bool
ti_mmwave_msgs__msg__MMWaveConfig__are_equal(const ti_mmwave_msgs__msg__MMWaveConfig * lhs, const ti_mmwave_msgs__msg__MMWaveConfig * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // num_adc_samples
  if (lhs->num_adc_samples != rhs->num_adc_samples) {
    return false;
  }
  // num_loops
  if (lhs->num_loops != rhs->num_loops) {
    return false;
  }
  // num_tx
  if (lhs->num_tx != rhs->num_tx) {
    return false;
  }
  // num_lvds_lanes
  if (lhs->num_lvds_lanes != rhs->num_lvds_lanes) {
    return false;
  }
  // f_s
  if (lhs->f_s != rhs->f_s) {
    return false;
  }
  // f_c
  if (lhs->f_c != rhs->f_c) {
    return false;
  }
  // bw
  if (lhs->bw != rhs->bw) {
    return false;
  }
  // pri
  if (lhs->pri != rhs->pri) {
    return false;
  }
  // t_fr
  if (lhs->t_fr != rhs->t_fr) {
    return false;
  }
  // range_max
  if (lhs->range_max != rhs->range_max) {
    return false;
  }
  // range_res
  if (lhs->range_res != rhs->range_res) {
    return false;
  }
  // doppler_max
  if (lhs->doppler_max != rhs->doppler_max) {
    return false;
  }
  // doppler_res
  if (lhs->doppler_res != rhs->doppler_res) {
    return false;
  }
  // raw_commands
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->raw_commands), &(rhs->raw_commands)))
  {
    return false;
  }
  return true;
}

bool
ti_mmwave_msgs__msg__MMWaveConfig__copy(
  const ti_mmwave_msgs__msg__MMWaveConfig * input,
  ti_mmwave_msgs__msg__MMWaveConfig * output)
{
  if (!input || !output) {
    return false;
  }
  // num_adc_samples
  output->num_adc_samples = input->num_adc_samples;
  // num_loops
  output->num_loops = input->num_loops;
  // num_tx
  output->num_tx = input->num_tx;
  // num_lvds_lanes
  output->num_lvds_lanes = input->num_lvds_lanes;
  // f_s
  output->f_s = input->f_s;
  // f_c
  output->f_c = input->f_c;
  // bw
  output->bw = input->bw;
  // pri
  output->pri = input->pri;
  // t_fr
  output->t_fr = input->t_fr;
  // range_max
  output->range_max = input->range_max;
  // range_res
  output->range_res = input->range_res;
  // doppler_max
  output->doppler_max = input->doppler_max;
  // doppler_res
  output->doppler_res = input->doppler_res;
  // raw_commands
  if (!rosidl_runtime_c__String__copy(
      &(input->raw_commands), &(output->raw_commands)))
  {
    return false;
  }
  return true;
}

ti_mmwave_msgs__msg__MMWaveConfig *
ti_mmwave_msgs__msg__MMWaveConfig__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ti_mmwave_msgs__msg__MMWaveConfig * msg = (ti_mmwave_msgs__msg__MMWaveConfig *)allocator.allocate(sizeof(ti_mmwave_msgs__msg__MMWaveConfig), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ti_mmwave_msgs__msg__MMWaveConfig));
  bool success = ti_mmwave_msgs__msg__MMWaveConfig__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ti_mmwave_msgs__msg__MMWaveConfig__destroy(ti_mmwave_msgs__msg__MMWaveConfig * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ti_mmwave_msgs__msg__MMWaveConfig__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ti_mmwave_msgs__msg__MMWaveConfig__Sequence__init(ti_mmwave_msgs__msg__MMWaveConfig__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ti_mmwave_msgs__msg__MMWaveConfig * data = NULL;

  if (size) {
    data = (ti_mmwave_msgs__msg__MMWaveConfig *)allocator.zero_allocate(size, sizeof(ti_mmwave_msgs__msg__MMWaveConfig), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ti_mmwave_msgs__msg__MMWaveConfig__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ti_mmwave_msgs__msg__MMWaveConfig__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ti_mmwave_msgs__msg__MMWaveConfig__Sequence__fini(ti_mmwave_msgs__msg__MMWaveConfig__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ti_mmwave_msgs__msg__MMWaveConfig__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ti_mmwave_msgs__msg__MMWaveConfig__Sequence *
ti_mmwave_msgs__msg__MMWaveConfig__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ti_mmwave_msgs__msg__MMWaveConfig__Sequence * array = (ti_mmwave_msgs__msg__MMWaveConfig__Sequence *)allocator.allocate(sizeof(ti_mmwave_msgs__msg__MMWaveConfig__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ti_mmwave_msgs__msg__MMWaveConfig__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ti_mmwave_msgs__msg__MMWaveConfig__Sequence__destroy(ti_mmwave_msgs__msg__MMWaveConfig__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ti_mmwave_msgs__msg__MMWaveConfig__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ti_mmwave_msgs__msg__MMWaveConfig__Sequence__are_equal(const ti_mmwave_msgs__msg__MMWaveConfig__Sequence * lhs, const ti_mmwave_msgs__msg__MMWaveConfig__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ti_mmwave_msgs__msg__MMWaveConfig__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ti_mmwave_msgs__msg__MMWaveConfig__Sequence__copy(
  const ti_mmwave_msgs__msg__MMWaveConfig__Sequence * input,
  ti_mmwave_msgs__msg__MMWaveConfig__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ti_mmwave_msgs__msg__MMWaveConfig);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ti_mmwave_msgs__msg__MMWaveConfig * data =
      (ti_mmwave_msgs__msg__MMWaveConfig *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ti_mmwave_msgs__msg__MMWaveConfig__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ti_mmwave_msgs__msg__MMWaveConfig__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ti_mmwave_msgs__msg__MMWaveConfig__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
