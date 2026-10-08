// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rysen_apexhand_msgs:msg/HardwareErrors.idl
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
#include "rysen_apexhand_msgs/msg/detail/hardware_errors__struct.h"
#include "rysen_apexhand_msgs/msg/detail/hardware_errors__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rysen_apexhand_msgs__msg__hardware_errors__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("rysen_apexhand_msgs.msg._hardware_errors.HardwareErrors", full_classname_dest, 55) == 0);
  }
  rysen_apexhand_msgs__msg__HardwareErrors * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // device_error_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_error_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->device_error_code = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // thumb_error_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "thumb_error_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->thumb_error_code = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // index_error_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "index_error_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->index_error_code = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // middle_error_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "middle_error_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->middle_error_code = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // ring_error_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "ring_error_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ring_error_code = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // little_error_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "little_error_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->little_error_code = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rysen_apexhand_msgs__msg__hardware_errors__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HardwareErrors */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rysen_apexhand_msgs.msg._hardware_errors");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HardwareErrors");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rysen_apexhand_msgs__msg__HardwareErrors * ros_message = (rysen_apexhand_msgs__msg__HardwareErrors *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // device_error_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->device_error_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "device_error_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thumb_error_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->thumb_error_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "thumb_error_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // index_error_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->index_error_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "index_error_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // middle_error_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->middle_error_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "middle_error_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ring_error_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->ring_error_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ring_error_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // little_error_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->little_error_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "little_error_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
