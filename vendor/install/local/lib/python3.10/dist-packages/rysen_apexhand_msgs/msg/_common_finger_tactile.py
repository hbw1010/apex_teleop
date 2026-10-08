# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rysen_apexhand_msgs:msg/CommonFingerTactile.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CommonFingerTactile(type):
    """Metaclass of message 'CommonFingerTactile'."""

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
                'rysen_apexhand_msgs.msg.CommonFingerTactile')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__common_finger_tactile
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__common_finger_tactile
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__common_finger_tactile
            cls._TYPE_SUPPORT = module.type_support_msg__msg__common_finger_tactile
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__common_finger_tactile

            from rysen_apexhand_msgs.msg import TactileImage
            if TactileImage.__class__._TYPE_SUPPORT is None:
                TactileImage.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CommonFingerTactile(metaclass=Metaclass_CommonFingerTactile):
    """Message class 'CommonFingerTactile'."""

    __slots__ = [
        '_prox_pad',
        '_mid_pad',
        '_dist_pad',
    ]

    _fields_and_field_types = {
        'prox_pad': 'rysen_apexhand_msgs/TactileImage',
        'mid_pad': 'rysen_apexhand_msgs/TactileImage',
        'dist_pad': 'rysen_apexhand_msgs/TactileImage',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['rysen_apexhand_msgs', 'msg'], 'TactileImage'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rysen_apexhand_msgs', 'msg'], 'TactileImage'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rysen_apexhand_msgs', 'msg'], 'TactileImage'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from rysen_apexhand_msgs.msg import TactileImage
        self.prox_pad = kwargs.get('prox_pad', TactileImage())
        from rysen_apexhand_msgs.msg import TactileImage
        self.mid_pad = kwargs.get('mid_pad', TactileImage())
        from rysen_apexhand_msgs.msg import TactileImage
        self.dist_pad = kwargs.get('dist_pad', TactileImage())

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
        if self.prox_pad != other.prox_pad:
            return False
        if self.mid_pad != other.mid_pad:
            return False
        if self.dist_pad != other.dist_pad:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def prox_pad(self):
        """Message field 'prox_pad'."""
        return self._prox_pad

    @prox_pad.setter
    def prox_pad(self, value):
        if __debug__:
            from rysen_apexhand_msgs.msg import TactileImage
            assert \
                isinstance(value, TactileImage), \
                "The 'prox_pad' field must be a sub message of type 'TactileImage'"
        self._prox_pad = value

    @builtins.property
    def mid_pad(self):
        """Message field 'mid_pad'."""
        return self._mid_pad

    @mid_pad.setter
    def mid_pad(self, value):
        if __debug__:
            from rysen_apexhand_msgs.msg import TactileImage
            assert \
                isinstance(value, TactileImage), \
                "The 'mid_pad' field must be a sub message of type 'TactileImage'"
        self._mid_pad = value

    @builtins.property
    def dist_pad(self):
        """Message field 'dist_pad'."""
        return self._dist_pad

    @dist_pad.setter
    def dist_pad(self, value):
        if __debug__:
            from rysen_apexhand_msgs.msg import TactileImage
            assert \
                isinstance(value, TactileImage), \
                "The 'dist_pad' field must be a sub message of type 'TactileImage'"
        self._dist_pad = value
