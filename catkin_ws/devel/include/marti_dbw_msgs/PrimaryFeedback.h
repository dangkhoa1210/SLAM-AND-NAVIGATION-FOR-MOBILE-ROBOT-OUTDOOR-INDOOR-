// Generated by gencpp from file marti_dbw_msgs/PrimaryFeedback.msg
// DO NOT EDIT!


#ifndef MARTI_DBW_MSGS_MESSAGE_PRIMARYFEEDBACK_H
#define MARTI_DBW_MSGS_MESSAGE_PRIMARYFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace marti_dbw_msgs
{
template <class ContainerAllocator>
struct PrimaryFeedback_
{
  typedef PrimaryFeedback_<ContainerAllocator> Type;

  PrimaryFeedback_()
    : header()
    , present(false)
    , robotic_mode(false)
    , steering_command(0.0)
    , steering_measure(0.0)
    , throttle_command(0.0)
    , throttle_measure(0.0)
    , brake_command(0.0)
    , brake_measure(0.0)
    , estop_command(false)
    , estop_measure(false)
    , error_steering(false)
    , error_throttle(false)
    , error_brake(false)
    , error_other(false)  {
    }
  PrimaryFeedback_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , present(false)
    , robotic_mode(false)
    , steering_command(0.0)
    , steering_measure(0.0)
    , throttle_command(0.0)
    , throttle_measure(0.0)
    , brake_command(0.0)
    , brake_measure(0.0)
    , estop_command(false)
    , estop_measure(false)
    , error_steering(false)
    , error_throttle(false)
    , error_brake(false)
    , error_other(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _present_type;
  _present_type present;

   typedef uint8_t _robotic_mode_type;
  _robotic_mode_type robotic_mode;

   typedef float _steering_command_type;
  _steering_command_type steering_command;

   typedef float _steering_measure_type;
  _steering_measure_type steering_measure;

   typedef float _throttle_command_type;
  _throttle_command_type throttle_command;

   typedef float _throttle_measure_type;
  _throttle_measure_type throttle_measure;

   typedef float _brake_command_type;
  _brake_command_type brake_command;

   typedef float _brake_measure_type;
  _brake_measure_type brake_measure;

   typedef uint8_t _estop_command_type;
  _estop_command_type estop_command;

   typedef uint8_t _estop_measure_type;
  _estop_measure_type estop_measure;

   typedef uint8_t _error_steering_type;
  _error_steering_type error_steering;

   typedef uint8_t _error_throttle_type;
  _error_throttle_type error_throttle;

   typedef uint8_t _error_brake_type;
  _error_brake_type error_brake;

   typedef uint8_t _error_other_type;
  _error_other_type error_other;





  typedef boost::shared_ptr< ::marti_dbw_msgs::PrimaryFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marti_dbw_msgs::PrimaryFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct PrimaryFeedback_

typedef ::marti_dbw_msgs::PrimaryFeedback_<std::allocator<void> > PrimaryFeedback;

typedef boost::shared_ptr< ::marti_dbw_msgs::PrimaryFeedback > PrimaryFeedbackPtr;
typedef boost::shared_ptr< ::marti_dbw_msgs::PrimaryFeedback const> PrimaryFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marti_dbw_msgs::PrimaryFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marti_dbw_msgs::PrimaryFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::marti_dbw_msgs::PrimaryFeedback_<ContainerAllocator1> & lhs, const ::marti_dbw_msgs::PrimaryFeedback_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.present == rhs.present &&
    lhs.robotic_mode == rhs.robotic_mode &&
    lhs.steering_command == rhs.steering_command &&
    lhs.steering_measure == rhs.steering_measure &&
    lhs.throttle_command == rhs.throttle_command &&
    lhs.throttle_measure == rhs.throttle_measure &&
    lhs.brake_command == rhs.brake_command &&
    lhs.brake_measure == rhs.brake_measure &&
    lhs.estop_command == rhs.estop_command &&
    lhs.estop_measure == rhs.estop_measure &&
    lhs.error_steering == rhs.error_steering &&
    lhs.error_throttle == rhs.error_throttle &&
    lhs.error_brake == rhs.error_brake &&
    lhs.error_other == rhs.error_other;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::marti_dbw_msgs::PrimaryFeedback_<ContainerAllocator1> & lhs, const ::marti_dbw_msgs::PrimaryFeedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace marti_dbw_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::marti_dbw_msgs::PrimaryFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marti_dbw_msgs::PrimaryFeedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_dbw_msgs::PrimaryFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_dbw_msgs::PrimaryFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_dbw_msgs::PrimaryFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_dbw_msgs::PrimaryFeedback_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marti_dbw_msgs::PrimaryFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "30a7ed1579a7c53a676c3444badef268";
  }

  static const char* value(const ::marti_dbw_msgs::PrimaryFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x30a7ed1579a7c53aULL;
  static const uint64_t static_value2 = 0x676c3444badef268ULL;
};

template<class ContainerAllocator>
struct DataType< ::marti_dbw_msgs::PrimaryFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marti_dbw_msgs/PrimaryFeedback";
  }

  static const char* value(const ::marti_dbw_msgs::PrimaryFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marti_dbw_msgs::PrimaryFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"\n"
"bool present\n"
"# Boolean flag indicating that DBW system is present and communicating\n"
"# properly.  If this is false, none of the remaining data in the\n"
"# feedback can be considered valid.\n"
"\n"
"# Boolean flag indicating that DBW system is in robotic mode.\n"
"bool robotic_mode\n"
"\n"
"float32 steering_command\n"
"float32 steering_measure\n"
"# The current steering command and measured value of the steering\n"
"# axies in the range [0.0 to 1.0].  Typically 0.0 is full left and 1.0\n"
"# is full right, but the steering calibration can handle either\n"
"# direction.\n"
"\n"
"float32 throttle_command\n"
"float32 throttle_measure\n"
"# The current throttle command and measured value of the throttle\n"
"# control in the range [0.0 to 1.0]\n"
"\n"
"float32 brake_command\n"
"float32 brake_measure\n"
"# The current throttle command and measured value of the throttle\n"
"# control in the range [0.0 to 1.0]\n"
"\n"
"bool estop_command\n"
"bool estop_measure\n"
"\n"
"bool error_steering\n"
"bool error_throttle\n"
"bool error_brake\n"
"bool error_other\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::marti_dbw_msgs::PrimaryFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marti_dbw_msgs::PrimaryFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.present);
      stream.next(m.robotic_mode);
      stream.next(m.steering_command);
      stream.next(m.steering_measure);
      stream.next(m.throttle_command);
      stream.next(m.throttle_measure);
      stream.next(m.brake_command);
      stream.next(m.brake_measure);
      stream.next(m.estop_command);
      stream.next(m.estop_measure);
      stream.next(m.error_steering);
      stream.next(m.error_throttle);
      stream.next(m.error_brake);
      stream.next(m.error_other);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PrimaryFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marti_dbw_msgs::PrimaryFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marti_dbw_msgs::PrimaryFeedback_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "present: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.present);
    s << indent << "robotic_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.robotic_mode);
    s << indent << "steering_command: ";
    Printer<float>::stream(s, indent + "  ", v.steering_command);
    s << indent << "steering_measure: ";
    Printer<float>::stream(s, indent + "  ", v.steering_measure);
    s << indent << "throttle_command: ";
    Printer<float>::stream(s, indent + "  ", v.throttle_command);
    s << indent << "throttle_measure: ";
    Printer<float>::stream(s, indent + "  ", v.throttle_measure);
    s << indent << "brake_command: ";
    Printer<float>::stream(s, indent + "  ", v.brake_command);
    s << indent << "brake_measure: ";
    Printer<float>::stream(s, indent + "  ", v.brake_measure);
    s << indent << "estop_command: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.estop_command);
    s << indent << "estop_measure: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.estop_measure);
    s << indent << "error_steering: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.error_steering);
    s << indent << "error_throttle: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.error_throttle);
    s << indent << "error_brake: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.error_brake);
    s << indent << "error_other: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.error_other);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARTI_DBW_MSGS_MESSAGE_PRIMARYFEEDBACK_H
