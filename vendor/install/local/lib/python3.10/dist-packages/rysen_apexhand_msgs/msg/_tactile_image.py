# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rysen_apexhand_msgs:msg/TactileImage.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'gray_image'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TactileImage(type):
    """Metaclass of message 'TactileImage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rysen_apexhand_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rysen_apexhand_msgs.msg.TactileImage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tactile_image
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tactile_image
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tactile_image
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tactile_image
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tactile_image

            from rysen_apexhand_msgs.msg import TangentialForce
            if TangentialForce.__class__._TYPE_SUPPORT is None:
                TangentialForce.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TactileImage(metaclass=Metaclass_TactileImage):
    """Message class 'TactileImage'."""

    __slots__ = [
        '_width',
        '_height',
        '_gray_image',
        '_tangential_forces',
    ]

    _fields_and_field_types = {
        'width': 'uint32',
        'height': 'uint32',
        'gray_image': 'sequence<uint16>',
        'tangential_forces': 'rysen_apexhand_msgs/TangentialForce',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rysen_apexhand_msgs', 'msg'], 'TangentialForce'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.width = kwargs.get('width', int())
        self.height = kwargs.get('height', int())
        self.gray_image = array.array('H', kwargs.get('gray_image', []))
        from rysen_apexhand_msgs.msg import TangentialForce
        self.tangential_forces = kwargs.get('tangential_forces', TangentialForce())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        if self.gray_image != other.gray_image:
            return False
        if self.tangential_forces != other.tangential_forces:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'width' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'width' field must be an unsigned integer in [0, 4294967295]"
        self._width = value

    @builtins.property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'height' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'height' field must be an unsigned integer in [0, 4294967295]"
        self._height = value

    @builtins.property
    def gray_image(self):
        """Message field 'gray_image'."""
        return self._gray_image

    @gray_image.setter
    def gray_image(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'gray_image' array.array() must have the type code of 'H'"
            self._gray_image = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'gray_image' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._gray_image = array.array('H', value)

    @builtins.property
    def tangential_forces(self):
        """Message field 'tangential_forces'."""
        return self._tangential_forces

    @tangential_forces.setter
    def tangential_forces(self, value):
        if __debug__:
            from rysen_apexhand_msgs.msg import TangentialForce
            assert \
                isinstance(value, TangentialForce), \
                "The 'tangential_forces' field must be a sub message of type 'TangentialForce'"
        self._tangential_forces = value
