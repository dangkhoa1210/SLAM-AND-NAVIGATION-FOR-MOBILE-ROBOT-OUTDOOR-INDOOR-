; Auto-generated. Do not edit!


(cl:in-package marti_common_msgs-msg)


;//! \htmlinclude UInt8Stamped.msg.html

(cl:defclass <UInt8Stamped> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (value
    :reader value
    :initarg :value
    :type cl:fixnum
    :initform 0))
)

(cl:defclass UInt8Stamped (<UInt8Stamped>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <UInt8Stamped>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'UInt8Stamped)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name marti_common_msgs-msg:<UInt8Stamped> is deprecated: use marti_common_msgs-msg:UInt8Stamped instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <UInt8Stamped>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader marti_common_msgs-msg:header-val is deprecated.  Use marti_common_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'value-val :lambda-list '(m))
(cl:defmethod value-val ((m <UInt8Stamped>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader marti_common_msgs-msg:value-val is deprecated.  Use marti_common_msgs-msg:value instead.")
  (value m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <UInt8Stamped>) ostream)
  "Serializes a message object of type '<UInt8Stamped>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'value)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <UInt8Stamped>) istream)
  "Deserializes a message object of type '<UInt8Stamped>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'value)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<UInt8Stamped>)))
  "Returns string type for a message object of type '<UInt8Stamped>"
  "marti_common_msgs/UInt8Stamped")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'UInt8Stamped)))
  "Returns string type for a message object of type 'UInt8Stamped"
  "marti_common_msgs/UInt8Stamped")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<UInt8Stamped>)))
  "Returns md5sum for a message object of type '<UInt8Stamped>"
  "90539346f3c3c8fc47f159ab9a6ff208")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'UInt8Stamped)))
  "Returns md5sum for a message object of type 'UInt8Stamped"
  "90539346f3c3c8fc47f159ab9a6ff208")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<UInt8Stamped>)))
  "Returns full string definition for message of type '<UInt8Stamped>"
  (cl:format cl:nil "std_msgs/Header header~%~%uint8 value~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'UInt8Stamped)))
  "Returns full string definition for message of type 'UInt8Stamped"
  (cl:format cl:nil "std_msgs/Header header~%~%uint8 value~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <UInt8Stamped>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <UInt8Stamped>))
  "Converts a ROS message object to a list"
  (cl:list 'UInt8Stamped
    (cl:cons ':header (header msg))
    (cl:cons ':value (value msg))
))
