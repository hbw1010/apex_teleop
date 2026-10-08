// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rysen_apexhand_msgs:msg/HandTactileForces.idl
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
#include "rysen_apexhand_msgs/msg/detail/hand_tactile_forces__struct.h"
#include "rysen_apexhand_msgs/msg/detail/hand_tactile_forces__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
bool rysen_apexhand_msgs__msg__common_finger_tactile__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rysen_apexhand_msgs__msg__common_finger_tactile__convert_to_py(void * raw_ros_message);
bool rysen_apexhand_msgs__msg__common_finger_tactile__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rysen_apexhand_msgs__msg__common_finger_tactile__convert_to_py(void * raw_ros_message);
bool rysen_apexhand_msgs__msg__common_finger_tactile__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rysen_apexhand_msgs__msg__common_finger_tactile__convert_to_py(void * raw_ros_message);
bool rysen_apexhand_msgs__msg__common_finger_tactile__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rysen_apexhand_msgs__msg__common_finger_tactile__convert_to_py(void * raw_ros_message);
bool rysen_apexhand_msgs__msg__thumb_finger_tactile__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rysen_apexhand_msgs__msg__thumb_finger_tactile__convert_to_py(void * raw_ros_message);
bool rysen_apexhand_msgs__msg__tactile_image__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rysen_apexhand_msgs__msg__tactile_image__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rysen_apexhand_msgs__msg__hand_tactile_forces__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("rysen_apexhand_msgs.msg._hand_tactile_forces.HandTactileForces", full_classname_dest, 62) == 0);
  }
  rysen_apexhand_msgs__msg__HandTactileForces * ros_message = _ros_message;
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // index
    PyObject * field = PyObject_GetAttrString(_pymsg, "index");
    if (!field) {
      return false;
    }
    if (!rysen_apexhand_msgs__msg__common_finger_tactile__convert_from_py(field, &ros_message->index)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // middle
    PyObject * field = PyObject_GetAttrString(_pymsg, "middle");
    if (!field) {
      return false;
    }
    if (!rysen_apexhand_msgs__msg__common_finger_tactile__convert_from_py(field, &ros_message->middle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ring
    PyObject * field = PyObject_GetAttrString(_pymsg, "ring");
    if (!field) {
      return false;
    }
    if (!rysen_apexhand_msgs__msg__common_finger_tactile__convert_from_py(field, &ros_message->ring)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // little
    PyObject * field = PyObject_GetAttrString(_pymsg, "little");
    if (!field) {
      return false;
    }
    if (!rysen_apexhand_msgs__msg__common_finger_tactile__convert_from_py(field, &ros_message->little)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // thumb
    PyObject * field = PyObject_GetAttrString(_pymsg, "thumb");
    if (!field) {
      return false;
    }
    if (!rysen_apexhand_msgs__msg__thumb_finger_tactile__convert_from_py(field, &ros_message->thumb)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // palm_center
    PyObject * field = PyObject_GetAttrString(_pymsg, "palm_center");
    if (!field) {
      return false;
    }
    if (!rysen_apexhand_msgs__msg__tactile_image__convert_from_py(field, &ros_message->palm_center)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rysen_apexhand_msgs__msg__hand_tactile_forces__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HandTactileForces */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rysen_apexhand_msgs.msg._hand_tactile_forces");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HandTactileForces");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rysen_apexhand_msgs__msg__HandTactileForces * ros_message = (rysen_apexhand_msgs__msg__HandTactileForces *)raw_ros_message;
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // index
    PyObject * field = NULL;
    field = rysen_apexhand_msgs__msg__common_finger_tactile__convert_to_py(&ros_message->index);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // middle
    PyObject * field = NULL;
    field = rysen_apexhand_msgs__msg__common_finger_tactile__convert_to_py(&ros_message->middle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "middle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ring
    PyObject * field = NULL;
    field = rysen_apexhand_msgs__msg__common_finger_tactile__convert_to_py(&ros_message->ring);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ring", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // little
    PyObject * field = NULL;
    field = rysen_apexhand_msgs__msg__common_finger_tactile__convert_to_py(&ros_message->little);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "little", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thumb
    PyObject * field = NULL;
    field = rysen_apexhand_msgs__msg__thumb_finger_tactile__convert_to_py(&ros_message->thumb);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "thumb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // palm_center
    PyObject * field = NULL;
    field = rysen_apexhand_msgs__msg__tactile_image__convert_to_py(&ros_message->palm_center);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "palm_center", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
