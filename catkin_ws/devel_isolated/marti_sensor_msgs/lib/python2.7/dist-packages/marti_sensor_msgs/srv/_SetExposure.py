# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from marti_sensor_msgs/SetExposureRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class SetExposureRequest(genpy.Message):
  _md5sum = "a226e84ef4a44363d3b289536b8589a5"
  _type = "marti_sensor_msgs/SetExposureRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """bool auto_exposure
int64 time
"""
  __slots__ = ['auto_exposure','time']
  _slot_types = ['bool','int64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       auto_exposure,time

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SetExposureRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.auto_exposure is None:
        self.auto_exposure = False
      if self.time is None:
        self.time = 0
    else:
      self.auto_exposure = False
      self.time = 0

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
      _x = self
      buff.write(_get_struct_Bq().pack(_x.auto_exposure, _x.time))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 9
      (_x.auto_exposure, _x.time,) = _get_struct_Bq().unpack(str[start:end])
      self.auto_exposure = bool(self.auto_exposure)
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
      _x = self
      buff.write(_get_struct_Bq().pack(_x.auto_exposure, _x.time))
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
      end = 0
      _x = self
      start = end
      end += 9
      (_x.auto_exposure, _x.time,) = _get_struct_Bq().unpack(str[start:end])
      self.auto_exposure = bool(self.auto_exposure)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_Bq = None
def _get_struct_Bq():
    global _struct_Bq
    if _struct_Bq is None:
        _struct_Bq = struct.Struct("<Bq")
    return _struct_Bq
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from marti_sensor_msgs/SetExposureResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class SetExposureResponse(genpy.Message):
  _md5sum = "a226e84ef4a44363d3b289536b8589a5"
  _type = "marti_sensor_msgs/SetExposureResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """bool auto_exposure
int64 time

"""
  __slots__ = ['auto_exposure','time']
  _slot_types = ['bool','int64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       auto_exposure,time

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SetExposureResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.auto_exposure is None:
        self.auto_exposure = False
      if self.time is None:
        self.time = 0
    else:
      self.auto_exposure = False
      self.time = 0

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
      _x = self
      buff.write(_get_struct_Bq().pack(_x.auto_exposure, _x.time))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 9
      (_x.auto_exposure, _x.time,) = _get_struct_Bq().unpack(str[start:end])
      self.auto_exposure = bool(self.auto_exposure)
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
      _x = self
      buff.write(_get_struct_Bq().pack(_x.auto_exposure, _x.time))
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
      end = 0
      _x = self
      start = end
      end += 9
      (_x.auto_exposure, _x.time,) = _get_struct_Bq().unpack(str[start:end])
      self.auto_exposure = bool(self.auto_exposure)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_Bq = None
def _get_struct_Bq():
    global _struct_Bq
    if _struct_Bq is None:
        _struct_Bq = struct.Struct("<Bq")
    return _struct_Bq
class SetExposure(object):
  _type          = 'marti_sensor_msgs/SetExposure'
  _md5sum = '37809854cb4a4ba55aeed0163f3e52bf'
  _request_class  = SetExposureRequest
  _response_class = SetExposureResponse
