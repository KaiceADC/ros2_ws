// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ti_mmwave_msgs:msg/MMWaveConfig.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "ti_mmwave_msgs/msg/detail/mm_wave_config__struct.h"
#include "ti_mmwave_msgs/msg/detail/mm_wave_config__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ti_mmwave_msgs__msg__mm_wave_config__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ti_mmwave_msgs.msg._mm_wave_config.MMWaveConfig", full_classname_dest, 47) == 0);
  }
  ti_mmwave_msgs__msg__MMWaveConfig * ros_message = _ros_message;
  {  // num_adc_samples
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_adc_samples");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_adc_samples = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // num_loops
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_loops");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_loops = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // num_tx
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_tx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_tx = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // num_lvds_lanes
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_lvds_lanes");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_lvds_lanes = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // f_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_s = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f_c
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_c");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_c = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bw
    PyObject * field = PyObject_GetAttrString(_pymsg, "bw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pri
    PyObject * field = PyObject_GetAttrString(_pymsg, "pri");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pri = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // t_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "t_fr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t_fr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // range_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "range_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // range_res
    PyObject * field = PyObject_GetAttrString(_pymsg, "range_res");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range_res = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // doppler_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "doppler_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->doppler_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // doppler_res
    PyObject * field = PyObject_GetAttrString(_pymsg, "doppler_res");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->doppler_res = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // raw_commands
    PyObject * field = PyObject_GetAttrString(_pymsg, "raw_commands");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->raw_commands, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ti_mmwave_msgs__msg__mm_wave_config__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MMWaveConfig */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ti_mmwave_msgs.msg._mm_wave_config");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MMWaveConfig");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ti_mmwave_msgs__msg__MMWaveConfig * ros_message = (ti_mmwave_msgs__msg__MMWaveConfig *)raw_ros_message;
  {  // num_adc_samples
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->num_adc_samples);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_adc_samples", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_loops
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->num_loops);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_loops", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_tx
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->num_tx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_tx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_lvds_lanes
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->num_lvds_lanes);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_lvds_lanes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_c
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_c);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_c", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pri
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pri);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pri", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t_fr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->range_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range_res
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->range_res);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range_res", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // doppler_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->doppler_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "doppler_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // doppler_res
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->doppler_res);
    {
      int rc = PyObject_SetAttrString(_pymessage, "doppler_res", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // raw_commands
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->raw_commands.data,
      strlen(ros_message->raw_commands.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "raw_commands", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
