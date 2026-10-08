# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rysen_apexhand_msgs:msg/HandTactileForces.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HandTactileForces(type):
    """Metaclass of message 'HandTactileForces'."""

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
                'rysen_apexhand_msgs.msg.HandTactileForces')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hand_tactile_forces
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hand_tactile_forces
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hand_tactile_forces
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hand_tactile_forces
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hand_tactile_forces

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from rysen_apexhand_msgs.msg import CommonFingerTactile
            if CommonFingerTactile.__class__._TYPE_SUPPORT is None:
                CommonFingerTactile.__class__.__import_type_support__()

            from rysen_apexhand_msgs.msg import TactileImage
            if TactileImage.__class__._TYPE_SUPPORT is None:
                TactileImage.__class__.__import_type_support__()

            from rysen_apexhand_msgs.msg import ThumbFingerTactile
            if ThumbFingerTactile.__class__._TYPE_SUPPORT is None:
                ThumbFingerTactile.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HandTactileForces(metaclass=Metaclass_HandTactileForces):
    """Message class 'HandTactileForces'."""

    __slots__ = [
        '_stamp',
        '_index',
        '_middle',
        '_ring',
        '_little',
        '_thumb',
        '_palm_center',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'index': 'rysen_apexhand_msgs/CommonFingerTactile',
        'middle': 'rysen_apexhand_msgs/CommonFingerTactile',
        'ring': 'rysen_apexhand_msgs/CommonFingerTactile',
        'little': 'rysen_apexhand_msgs/CommonFingerTactile',
        'thumb': 'rysen_apexhand_msgs/ThumbFingerTactile',
        'palm_center': 'rysen_apexhand_msgs/TactileImage',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rysen_apexhand_msgs', 'msg'], 'CommonFingerTactile'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rysen_apexhand_msgs', 'msg'], 'CommonFingerTactile'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rysen_apexhand_msgs', 'msg'], 'CommonFingerTactile'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rysen_apexhand_msgs', 'msg'], 'CommonFingerTactile'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rysen_apexhand_msgs', 'msg'], 'ThumbFingerTactile'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rysen_apexhand_msgs', 'msg'], 'TactileImage'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        from rysen_apexhand_msgs.msg import CommonFingerTactile
        self.index = kwargs.get('index', CommonFingerTactile())
        from rysen_apexhand_msgs.msg import CommonFingerTactile
        self.middle = kwargs.get('middle', CommonFingerTactile())
        from rysen_apexhand_msgs.msg import CommonFingerTactile
        self.ring = kwargs.get('ring', CommonFingerTactile())
        from rysen_apexhand_msgs.msg import CommonFingerTactile
        self.little = kwargs.get('little', CommonFingerTactile())
        from rysen_apexhand_msgs.msg import ThumbFingerTactile
        self.thumb = kwargs.get('thumb', ThumbFingerTactile())
        from rysen_apexhand_msgs.msg import TactileImage
        self.palm_center = kwargs.get('palm_center', TactileImage())

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
        if self.stamp != other.stamp:
            return False
        if self.index != other.index:
            return False
        if self.middle != other.middle:
            return False
        if self.ring != other.ring:
            return False
        if self.little != other.little:
            return False
        if self.thumb != other.thumb:
            return False
        if self.palm_center != other.palm_center:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @builtins.property
    def index(self):
        """Message field 'index'."""
        return self._index

    @index.setter
    def index(self, value):
        if __debug__:
            from rysen_apexhand_msgs.msg import CommonFingerTactile
            assert \
                isinstance(value, CommonFingerTactile), \
                "The 'index' field must be a sub message of type 'CommonFingerTactile'"
        self._index = value

    @builtins.property
    def middle(self):
        """Message field 'middle'."""
        return self._middle

    @middle.setter
    def middle(self, value):
        if __debug__:
            from rysen_apexhand_msgs.msg import CommonFingerTactile
            assert \
                isinstance(value, CommonFingerTactile), \
                "The 'middle' field must be a sub message of type 'CommonFingerTactile'"
        self._middle = value

    @builtins.property
    def ring(self):
        """Message field 'ring'."""
        return self._ring

    @ring.setter
    def ring(self, value):
        if __debug__:
            from rysen_apexhand_msgs.msg import CommonFingerTactile
            assert \
                isinstance(value, CommonFingerTactile), \
                "The 'ring' field must be a sub message of type 'CommonFingerTactile'"
        self._ring = value

    @builtins.property
    def little(self):
        """Message field 'little'."""
        return self._little

    @little.setter
    def little(self, value):
        if __debug__:
            from rysen_apexhand_msgs.msg import CommonFingerTactile
            assert \
                isinstance(value, CommonFingerTactile), \
                "The 'little' field must be a sub message of type 'CommonFingerTactile'"
        self._little = value

    @builtins.property
    def thumb(self):
        """Message field 'thumb'."""
        return self._thumb

    @thumb.setter
    def thumb(self, value):
        if __debug__:
            from rysen_apexhand_msgs.msg import ThumbFingerTactile
            assert \
                isinstance(value, ThumbFingerTactile), \
                "The 'thumb' field must be a sub message of type 'ThumbFingerTactile'"
        self._thumb = value

    @builtins.property
    def palm_center(self):
        """Message field 'palm_center'."""
        return self._palm_center

    @palm_center.setter
    def palm_center(self, value):
        if __debug__:
            from rysen_apexhand_msgs.msg import TactileImage
            assert \
                isinstance(value, TactileImage), \
                "The 'palm_center' field must be a sub message of type 'TactileImage'"
        self._palm_center = value
