// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pid_msg:msg/PIDTune.idl
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
#include "pid_msg/msg/detail/pid_tune__struct.h"
#include "pid_msg/msg/detail/pid_tune__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool pid_msg__msg__pid_tune__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[30];
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
    assert(strncmp("pid_msg.msg._pid_tune.PIDTune", full_classname_dest, 29) == 0);
  }
  pid_msg__msg__PIDTune * ros_message = _ros_message;
  {  // kp
    PyObject * field = PyObject_GetAttrString(_pymsg, "kp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->kp = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ki
    PyObject * field = PyObject_GetAttrString(_pymsg, "ki");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ki = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // kd
    PyObject * field = PyObject_GetAttrString(_pymsg, "kd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->kd = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pid_msg__msg__pid_tune__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PIDTune */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pid_msg.msg._pid_tune");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PIDTune");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pid_msg__msg__PIDTune * ros_message = (pid_msg__msg__PIDTune *)raw_ros_message;
  {  // kp
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->kp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ki
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ki);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ki", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kd
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->kd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
