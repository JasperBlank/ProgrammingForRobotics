// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_introduction_message:msg/Brightness.idl
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
#include "ros2_introduction_message/msg/detail/brightness__struct.h"
#include "ros2_introduction_message/msg/detail/brightness__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ros2_introduction_message__msg__brightness__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("ros2_introduction_message.msg._brightness.Brightness", full_classname_dest, 52) == 0);
  }
  ros2_introduction_message__msg__Brightness * ros_message = _ros_message;
  {  // brightness_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "brightness_level");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brightness_level = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brightness_classification
    PyObject * field = PyObject_GetAttrString(_pymsg, "brightness_classification");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->brightness_classification, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_introduction_message__msg__brightness__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Brightness */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_introduction_message.msg._brightness");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Brightness");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_introduction_message__msg__Brightness * ros_message = (ros2_introduction_message__msg__Brightness *)raw_ros_message;
  {  // brightness_level
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brightness_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brightness_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brightness_classification
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->brightness_classification.data,
      strlen(ros_message->brightness_classification.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "brightness_classification", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
