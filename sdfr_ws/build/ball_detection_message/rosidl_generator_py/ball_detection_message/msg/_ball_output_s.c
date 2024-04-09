// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ball_detection_message:msg/BallOutput.idl
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
#include "ball_detection_message/msg/detail/ball_output__struct.h"
#include "ball_detection_message/msg/detail/ball_output__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ball_detection_message__msg__ball_output__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("ball_detection_message.msg._ball_output.BallOutput", full_classname_dest, 50) == 0);
  }
  ball_detection_message__msg__BallOutput * ros_message = _ros_message;
  {  // x_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->x_1 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // y_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->y_1 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // x_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->x_2 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // y_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->y_2 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ball_check
    PyObject * field = PyObject_GetAttrString(_pymsg, "ball_check");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ball_check = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ball_detection_message__msg__ball_output__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BallOutput */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ball_detection_message.msg._ball_output");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BallOutput");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ball_detection_message__msg__BallOutput * ros_message = (ball_detection_message__msg__BallOutput *)raw_ros_message;
  {  // x_1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->x_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->y_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->x_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->y_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ball_check
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ball_check ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ball_check", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
