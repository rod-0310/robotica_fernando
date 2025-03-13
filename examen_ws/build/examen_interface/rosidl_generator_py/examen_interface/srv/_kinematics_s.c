// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from examen_interface:srv/Kinematics.idl
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
#include "examen_interface/srv/detail/kinematics__struct.h"
#include "examen_interface/srv/detail/kinematics__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool examen_interface__srv__kinematics__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("examen_interface.srv._kinematics.Kinematics_Request", full_classname_dest, 51) == 0);
  }
  examen_interface__srv__Kinematics_Request * ros_message = _ros_message;
  {  // theta1
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta2
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta3
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta4
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta4 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * examen_interface__srv__kinematics__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Kinematics_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("examen_interface.srv._kinematics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Kinematics_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  examen_interface__srv__Kinematics_Request * ros_message = (examen_interface__srv__Kinematics_Request *)raw_ros_message;
  {  // theta1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "examen_interface/srv/detail/kinematics__struct.h"
// already included above
// #include "examen_interface/srv/detail/kinematics__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool examen_interface__srv__kinematics__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("examen_interface.srv._kinematics.Kinematics_Response", full_classname_dest, 52) == 0);
  }
  examen_interface__srv__Kinematics_Response * ros_message = _ros_message;
  {  // pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * examen_interface__srv__kinematics__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Kinematics_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("examen_interface.srv._kinematics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Kinematics_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  examen_interface__srv__Kinematics_Response * ros_message = (examen_interface__srv__Kinematics_Response *)raw_ros_message;
  {  // pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
