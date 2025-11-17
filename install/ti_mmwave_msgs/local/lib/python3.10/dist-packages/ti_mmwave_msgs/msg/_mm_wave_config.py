# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ti_mmwave_msgs:msg/MMWaveConfig.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MMWaveConfig(type):
    """Metaclass of message 'MMWaveConfig'."""

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
            module = import_type_support('ti_mmwave_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ti_mmwave_msgs.msg.MMWaveConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mm_wave_config
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mm_wave_config
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mm_wave_config
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mm_wave_config
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mm_wave_config

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MMWaveConfig(metaclass=Metaclass_MMWaveConfig):
    """Message class 'MMWaveConfig'."""

    __slots__ = [
        '_num_adc_samples',
        '_num_loops',
        '_num_tx',
        '_num_lvds_lanes',
        '_f_s',
        '_f_c',
        '_bw',
        '_pri',
        '_t_fr',
        '_range_max',
        '_range_res',
        '_doppler_max',
        '_doppler_res',
        '_raw_commands',
    ]

    _fields_and_field_types = {
        'num_adc_samples': 'int32',
        'num_loops': 'int32',
        'num_tx': 'int32',
        'num_lvds_lanes': 'int32',
        'f_s': 'float',
        'f_c': 'float',
        'bw': 'float',
        'pri': 'float',
        't_fr': 'float',
        'range_max': 'float',
        'range_res': 'float',
        'doppler_max': 'float',
        'doppler_res': 'float',
        'raw_commands': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.num_adc_samples = kwargs.get('num_adc_samples', int())
        self.num_loops = kwargs.get('num_loops', int())
        self.num_tx = kwargs.get('num_tx', int())
        self.num_lvds_lanes = kwargs.get('num_lvds_lanes', int())
        self.f_s = kwargs.get('f_s', float())
        self.f_c = kwargs.get('f_c', float())
        self.bw = kwargs.get('bw', float())
        self.pri = kwargs.get('pri', float())
        self.t_fr = kwargs.get('t_fr', float())
        self.range_max = kwargs.get('range_max', float())
        self.range_res = kwargs.get('range_res', float())
        self.doppler_max = kwargs.get('doppler_max', float())
        self.doppler_res = kwargs.get('doppler_res', float())
        self.raw_commands = kwargs.get('raw_commands', str())

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
        if self.num_adc_samples != other.num_adc_samples:
            return False
        if self.num_loops != other.num_loops:
            return False
        if self.num_tx != other.num_tx:
            return False
        if self.num_lvds_lanes != other.num_lvds_lanes:
            return False
        if self.f_s != other.f_s:
            return False
        if self.f_c != other.f_c:
            return False
        if self.bw != other.bw:
            return False
        if self.pri != other.pri:
            return False
        if self.t_fr != other.t_fr:
            return False
        if self.range_max != other.range_max:
            return False
        if self.range_res != other.range_res:
            return False
        if self.doppler_max != other.doppler_max:
            return False
        if self.doppler_res != other.doppler_res:
            return False
        if self.raw_commands != other.raw_commands:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def num_adc_samples(self):
        """Message field 'num_adc_samples'."""
        return self._num_adc_samples

    @num_adc_samples.setter
    def num_adc_samples(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_adc_samples' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'num_adc_samples' field must be an integer in [-2147483648, 2147483647]"
        self._num_adc_samples = value

    @builtins.property
    def num_loops(self):
        """Message field 'num_loops'."""
        return self._num_loops

    @num_loops.setter
    def num_loops(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_loops' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'num_loops' field must be an integer in [-2147483648, 2147483647]"
        self._num_loops = value

    @builtins.property
    def num_tx(self):
        """Message field 'num_tx'."""
        return self._num_tx

    @num_tx.setter
    def num_tx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_tx' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'num_tx' field must be an integer in [-2147483648, 2147483647]"
        self._num_tx = value

    @builtins.property
    def num_lvds_lanes(self):
        """Message field 'num_lvds_lanes'."""
        return self._num_lvds_lanes

    @num_lvds_lanes.setter
    def num_lvds_lanes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_lvds_lanes' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'num_lvds_lanes' field must be an integer in [-2147483648, 2147483647]"
        self._num_lvds_lanes = value

    @builtins.property
    def f_s(self):
        """Message field 'f_s'."""
        return self._f_s

    @f_s.setter
    def f_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_s = value

    @builtins.property
    def f_c(self):
        """Message field 'f_c'."""
        return self._f_c

    @f_c.setter
    def f_c(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_c' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_c' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_c = value

    @builtins.property
    def bw(self):
        """Message field 'bw'."""
        return self._bw

    @bw.setter
    def bw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'bw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._bw = value

    @builtins.property
    def pri(self):
        """Message field 'pri'."""
        return self._pri

    @pri.setter
    def pri(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pri' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pri' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pri = value

    @builtins.property
    def t_fr(self):
        """Message field 't_fr'."""
        return self._t_fr

    @t_fr.setter
    def t_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't_fr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 't_fr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._t_fr = value

    @builtins.property
    def range_max(self):
        """Message field 'range_max'."""
        return self._range_max

    @range_max.setter
    def range_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'range_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._range_max = value

    @builtins.property
    def range_res(self):
        """Message field 'range_res'."""
        return self._range_res

    @range_res.setter
    def range_res(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range_res' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'range_res' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._range_res = value

    @builtins.property
    def doppler_max(self):
        """Message field 'doppler_max'."""
        return self._doppler_max

    @doppler_max.setter
    def doppler_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'doppler_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'doppler_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._doppler_max = value

    @builtins.property
    def doppler_res(self):
        """Message field 'doppler_res'."""
        return self._doppler_res

    @doppler_res.setter
    def doppler_res(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'doppler_res' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'doppler_res' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._doppler_res = value

    @builtins.property
    def raw_commands(self):
        """Message field 'raw_commands'."""
        return self._raw_commands

    @raw_commands.setter
    def raw_commands(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'raw_commands' field must be of type 'str'"
        self._raw_commands = value
