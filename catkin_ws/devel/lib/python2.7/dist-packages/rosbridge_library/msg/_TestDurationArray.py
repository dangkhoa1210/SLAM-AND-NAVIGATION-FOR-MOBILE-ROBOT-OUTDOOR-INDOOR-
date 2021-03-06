# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from rosbridge_library/TestDurationArray.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import genpy

class TestDurationArray(genpy.Message):
  _md5sum = "8b3bcadc803a7fcbc857c6a1dab53bcd"
  _type = "rosbridge_library/TestDurationArray"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """duration[] durations"""
  __slots__ = ['durations']
  _slot_types = ['duration[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       durations

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(TestDurationArray, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.durations is None:
        self.durations = []
    else:
      self.durations = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      length = len(self.durations)
      buff.write(_struct_I.pack(length))
      for val1 in self.durations:
        _x = val1
        buff.write(_get_struct_2i().pack(_x.secs, _x.nsecs))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.durations is None:
        self.durations = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.durations = []
      for i in range(0, length):
        val1 = genpy.Duration()
        _x = val1
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2i().unpack(str[start:end])
        self.durations.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.durations)
      buff.write(_struct_I.pack(length))
      for val1 in self.durations:
        _x = val1
        buff.write(_get_struct_2i().pack(_x.secs, _x.nsecs))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.durations is None:
        self.durations = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.durations = []
      for i in range(0, length):
        val1 = genpy.Duration()
        _x = val1
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2i().unpack(str[start:end])
        self.durations.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2i = None
def _get_struct_2i():
    global _struct_2i
    if _struct_2i is None:
        _struct_2i = struct.Struct("<2i")
    return _struct_2i
