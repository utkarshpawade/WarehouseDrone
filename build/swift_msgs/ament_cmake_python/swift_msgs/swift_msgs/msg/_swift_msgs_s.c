// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from swift_msgs:msg/SwiftMsgs.idl
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
#include "swift_msgs/msg/detail/swift_msgs__struct.h"
#include "swift_msgs/msg/detail/swift_msgs__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool swift_msgs__msg__swift_msgs__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("swift_msgs.msg._swift_msgs.SwiftMsgs", full_classname_dest, 36) == 0);
  }
  swift_msgs__msg__SwiftMsgs * ros_message = _ros_message;
  {  // rc_roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_roll");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rc_roll = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // rc_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_pitch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rc_pitch = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // rc_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_yaw");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rc_yaw = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // rc_throttle
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_throttle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rc_throttle = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // rc_aux1
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_aux1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rc_aux1 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // rc_aux2
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_aux2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rc_aux2 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // rc_aux3
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_aux3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rc_aux3 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // rc_aux4
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_aux4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rc_aux4 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // drone_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "drone_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drone_index = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * swift_msgs__msg__swift_msgs__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SwiftMsgs */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("swift_msgs.msg._swift_msgs");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SwiftMsgs");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  swift_msgs__msg__SwiftMsgs * ros_message = (swift_msgs__msg__SwiftMsgs *)raw_ros_message;
  {  // rc_roll
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->rc_roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc_pitch
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->rc_pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc_yaw
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->rc_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc_throttle
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->rc_throttle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_throttle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc_aux1
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->rc_aux1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_aux1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc_aux2
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->rc_aux2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_aux2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc_aux3
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->rc_aux3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_aux3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc_aux4
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->rc_aux4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_aux4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drone_index
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->drone_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drone_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
