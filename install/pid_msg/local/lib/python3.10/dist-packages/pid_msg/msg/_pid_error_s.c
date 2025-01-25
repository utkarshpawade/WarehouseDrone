// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pid_msg:msg/PIDError.idl
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
#include "pid_msg/msg/detail/pid_error__struct.h"
#include "pid_msg/msg/detail/pid_error__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool pid_msg__msg__pid_error__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[32];
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
    assert(strncmp("pid_msg.msg._pid_error.PIDError", full_classname_dest, 31) == 0);
  }
  pid_msg__msg__PIDError * ros_message = _ros_message;
  {  // roll_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll_error = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_error = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_error = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_error = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pid_msg__msg__pid_error__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PIDError */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pid_msg.msg._pid_error");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PIDError");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pid_msg__msg__PIDError * ros_message = (pid_msg__msg__PIDError *)raw_ros_message;
  {  // roll_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
