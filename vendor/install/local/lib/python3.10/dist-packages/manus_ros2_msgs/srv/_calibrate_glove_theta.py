# generated from rosidl_generator_py/resource/_idl.py.em
# with input from manus_ros2_msgs:srv/CalibrateGloveTheta.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CalibrateGloveTheta_Request(type):
    """Metaclass of message 'CalibrateGloveTheta_Request'."""

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
            module = import_type_support('manus_ros2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'manus_ros2_msgs.srv.CalibrateGloveTheta_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__calibrate_glove_theta__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__calibrate_glove_theta__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__calibrate_glove_theta__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__calibrate_glove_theta__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__calibrate_glove_theta__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CalibrateGloveTheta_Request(metaclass=Metaclass_CalibrateGloveTheta_Request):
    """Message class 'CalibrateGloveTheta_Request'."""

    __slots__ = [
        '_side',
    ]

    _fields_and_field_types = {
        'side': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.side = kwargs.get('side', str())

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
        if self.side != other.side:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def side(self):
        """Message field 'side'."""
        return self._side

    @side.setter
    def side(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'side' field must be of type 'str'"
        self._side = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_CalibrateGloveTheta_Response(type):
    """Metaclass of message 'CalibrateGloveTheta_Response'."""

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
            module = import_type_support('manus_ros2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'manus_ros2_msgs.srv.CalibrateGloveTheta_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__calibrate_glove_theta__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__calibrate_glove_theta__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__calibrate_glove_theta__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__calibrate_glove_theta__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__calibrate_glove_theta__response

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CalibrateGloveTheta_Response(metaclass=Metaclass_CalibrateGloveTheta_Response):
    """Message class 'CalibrateGloveTheta_Response'."""

    __slots__ = [
        '_success',
        '_theta_rad',
        '_theta_deg',
        '_four_fingers_together_tips',
        '_midpoint_y',
        '_midpoint_z',
        '_sample_count',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'theta_rad': 'double',
        'theta_deg': 'double',
        'four_fingers_together_tips': 'geometry_msgs/Point[5]',
        'midpoint_y': 'double',
        'midpoint_z': 'double',
        'sample_count': 'uint32',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'), 5),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.theta_rad = kwargs.get('theta_rad', float())
        self.theta_deg = kwargs.get('theta_deg', float())
        from geometry_msgs.msg import Point
        self.four_fingers_together_tips = kwargs.get(
            'four_fingers_together_tips',
            [Point() for x in range(5)]
        )
        self.midpoint_y = kwargs.get('midpoint_y', float())
        self.midpoint_z = kwargs.get('midpoint_z', float())
        self.sample_count = kwargs.get('sample_count', int())
        self.message = kwargs.get('message', str())

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
        if self.success != other.success:
            return False
        if self.theta_rad != other.theta_rad:
            return False
        if self.theta_deg != other.theta_deg:
            return False
        if self.four_fingers_together_tips != other.four_fingers_together_tips:
            return False
        if self.midpoint_y != other.midpoint_y:
            return False
        if self.midpoint_z != other.midpoint_z:
            return False
        if self.sample_count != other.sample_count:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def theta_rad(self):
        """Message field 'theta_rad'."""
        return self._theta_rad

    @theta_rad.setter
    def theta_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_rad = value

    @builtins.property
    def theta_deg(self):
        """Message field 'theta_deg'."""
        return self._theta_deg

    @theta_deg.setter
    def theta_deg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_deg' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_deg' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_deg = value

    @builtins.property
    def four_fingers_together_tips(self):
        """Message field 'four_fingers_together_tips'."""
        return self._four_fingers_together_tips

    @four_fingers_together_tips.setter
    def four_fingers_together_tips(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
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
                 len(value) == 5 and
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'four_fingers_together_tips' field must be a set or sequence with length 5 and each value of type 'Point'"
        self._four_fingers_together_tips = value

    @builtins.property
    def midpoint_y(self):
        """Message field 'midpoint_y'."""
        return self._midpoint_y

    @midpoint_y.setter
    def midpoint_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'midpoint_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'midpoint_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._midpoint_y = value

    @builtins.property
    def midpoint_z(self):
        """Message field 'midpoint_z'."""
        return self._midpoint_z

    @midpoint_z.setter
    def midpoint_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'midpoint_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'midpoint_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._midpoint_z = value

    @builtins.property
    def sample_count(self):
        """Message field 'sample_count'."""
        return self._sample_count

    @sample_count.setter
    def sample_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sample_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sample_count' field must be an unsigned integer in [0, 4294967295]"
        self._sample_count = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_CalibrateGloveTheta(type):
    """Metaclass of service 'CalibrateGloveTheta'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('manus_ros2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'manus_ros2_msgs.srv.CalibrateGloveTheta')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__calibrate_glove_theta

            from manus_ros2_msgs.srv import _calibrate_glove_theta
            if _calibrate_glove_theta.Metaclass_CalibrateGloveTheta_Request._TYPE_SUPPORT is None:
                _calibrate_glove_theta.Metaclass_CalibrateGloveTheta_Request.__import_type_support__()
            if _calibrate_glove_theta.Metaclass_CalibrateGloveTheta_Response._TYPE_SUPPORT is None:
                _calibrate_glove_theta.Metaclass_CalibrateGloveTheta_Response.__import_type_support__()


class CalibrateGloveTheta(metaclass=Metaclass_CalibrateGloveTheta):
    from manus_ros2_msgs.srv._calibrate_glove_theta import CalibrateGloveTheta_Request as Request
    from manus_ros2_msgs.srv._calibrate_glove_theta import CalibrateGloveTheta_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
