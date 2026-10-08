// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rysen_apexhand_msgs:msg/CommonFingerTactile.idl
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
#include "rysen_apexhand_msgs/msg/detail/common_finger_tactile__struct.h"
#include "rysen_apexhand_msgs/msg/detail/common_finger_tactile__functions.h"

bool rysen_apexhand_msgs__msg__tactile_image__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rysen_apexhand_msgs__msg__tactile_image__convert_to_py(void * raw_ros_message);
bool rysen_apexhand_msgs__msg__tactile_image__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rysen_apexhand_msgs__msg__tactile_image__convert_to_py(void * raw_ros_message);
bool rysen_apexhand_msgs__msg__tactile_image__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rysen_apexhand_msgs__msg__tactile_image__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rysen_apexhand_msgs__msg__common_finger_tactile__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
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
    assert(strncmp("rysen_apexhand_msgs.msg._common_finger_tactile.CommonFingerTactile", full_classname_dest, 66) == 0);
  }
  rysen_apexhand_msgs__msg__CommonFingerTactile * ros_message = _ros_message;
  {  // prox_pad
    PyObject * field = PyObject_GetAttrString(_pymsg, "prox_pad");
    if (!field) {
      return false;
    }
    if (!rysen_apexhand_msgs__msg__tactile_image__convert_from_py(field, &ros_message->prox_pad)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // mid_pad
    PyObject * field = PyObject_GetAttrString(_pymsg, "mid_pad");
    if (!field) {
      return false;
    }
    if (!rysen_apexhand_msgs__msg__tactile_image__convert_from_py(field, &ros_message->mid_pad)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // dist_pad
    PyObject * field = PyObject_GetAttrString(_pymsg, "dist_pad");
    if (!field) {
      return false;
    }
    if (!rysen_apexhand_msgs__msg__tactile_image__convert_from_py(field, &ros_message->dist_pad)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rysen_apexhand_msgs__msg__common_finger_tactile__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CommonFingerTactile */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rysen_apexhand_msgs.msg._common_finger_tactile");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CommonFingerTactile");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rysen_apexhand_msgs__msg__CommonFingerTactile * ros_message = (rysen_apexhand_msgs__msg__CommonFingerTactile *)raw_ros_message;
  {  // prox_pad
    PyObject * field = NULL;
    field = rysen_apexhand_msgs__msg__tactile_image__convert_to_py(&ros_message->prox_pad);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "prox_pad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mid_pad
    PyObject * field = NULL;
    field = rysen_apexhand_msgs__msg__tactile_image__convert_to_py(&ros_message->mid_pad);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mid_pad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dist_pad
    PyObject * field = NULL;
    field = rysen_apexhand_msgs__msg__tactile_image__convert_to_py(&ros_message->dist_pad);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "dist_pad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
