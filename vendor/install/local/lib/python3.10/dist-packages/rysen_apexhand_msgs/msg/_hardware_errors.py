# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rysen_apexhand_msgs:msg/HardwareErrors.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HardwareErrors(type):
    """Metaclass of message 'HardwareErrors'."""

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
                'rysen_apexhand_msgs.msg.HardwareErrors')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hardware_errors
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hardware_errors
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hardware_errors
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hardware_errors
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hardware_errors

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HardwareErrors(metaclass=Metaclass_HardwareErrors):
    """Message class 'HardwareErrors'."""

    __slots__ = [
        '_header',
        '_device_error_code',
        '_thumb_error_code',
        '_index_error_code',
        '_middle_error_code',
        '_ring_error_code',
        '_little_error_code',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'device_error_code': 'uint64',
        'thumb_error_code': 'uint64',
        'index_error_code': 'uint64',
        'middle_error_code': 'uint64',
        'ring_error_code': 'uint64',
        'little_error_code': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.device_error_code = kwargs.get('device_error_code', int())
        self.thumb_error_code = kwargs.get('thumb_error_code', int())
        self.index_error_code = kwargs.get('index_error_code', int())
        self.middle_error_code = kwargs.get('middle_error_code', int())
        self.ring_error_code = kwargs.get('ring_error_code', int())
        self.little_error_code = kwargs.get('little_error_code', int())

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
        if self.header != other.header:
            return False
        if self.device_error_code != other.device_error_code:
            return False
        if self.thumb_error_code != other.thumb_error_code:
            return False
        if self.index_error_code != other.index_error_code:
            return False
        if self.middle_error_code != other.middle_error_code:
            return False
        if self.ring_error_code != other.ring_error_code:
            return False
        if self.little_error_code != other.little_error_code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def device_error_code(self):
        """Message field 'device_error_code'."""
        return self._device_error_code

    @device_error_code.setter
    def device_error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device_error_code' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'device_error_code' field must be an unsigned integer in [0, 18446744073709551615]"
        self._device_error_code = value

    @builtins.property
    def thumb_error_code(self):
        """Message field 'thumb_error_code'."""
        return self._thumb_error_code

    @thumb_error_code.setter
    def thumb_error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'thumb_error_code' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'thumb_error_code' field must be an unsigned integer in [0, 18446744073709551615]"
        self._thumb_error_code = value

    @builtins.property
    def index_error_code(self):
        """Message field 'index_error_code'."""
        return self._index_error_code

    @index_error_code.setter
    def index_error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'index_error_code' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'index_error_code' field must be an unsigned integer in [0, 18446744073709551615]"
        self._index_error_code = value

    @builtins.property
    def middle_error_code(self):
        """Message field 'middle_error_code'."""
        return self._middle_error_code

    @middle_error_code.setter
    def middle_error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'middle_error_code' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'middle_error_code' field must be an unsigned integer in [0, 18446744073709551615]"
        self._middle_error_code = value

    @builtins.property
    def ring_error_code(self):
        """Message field 'ring_error_code'."""
        return self._ring_error_code

    @ring_error_code.setter
    def ring_error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ring_error_code' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'ring_error_code' field must be an unsigned integer in [0, 18446744073709551615]"
        self._ring_error_code = value

    @builtins.property
    def little_error_code(self):
        """Message field 'little_error_code'."""
        return self._little_error_code

    @little_error_code.setter
    def little_error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'little_error_code' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'little_error_code' field must be an unsigned integer in [0, 18446744073709551615]"
        self._little_error_code = value
