// Generated by gencpp from file marti_sensor_msgs/Gyro.msg
// DO NOT EDIT!


#ifndef MARTI_SENSOR_MSGS_MESSAGE_GYRO_H
#define MARTI_SENSOR_MSGS_MESSAGE_GYRO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace marti_sensor_msgs
{
template <class ContainerAllocator>
struct Gyro_
{
  typedef Gyro_<ContainerAllocator> Type;

  Gyro_()
    : header()
    , angular_rate(0.0)
    , variance(0.0)  {
    }
  Gyro_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , angular_rate(0.0)
    , variance(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _angular_rate_type;
  _angular_rate_type angular_rate;

   typedef double _variance_type;
  _variance_type variance;





  typedef boost::shared_ptr< ::marti_sensor_msgs::Gyro_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marti_sensor_msgs::Gyro_<ContainerAllocator> const> ConstPtr;

}; // struct Gyro_

typedef ::marti_sensor_msgs::Gyro_<std::allocator<void> > Gyro;

typedef boost::shared_ptr< ::marti_sensor_msgs::Gyro > GyroPtr;
typedef boost::shared_ptr< ::marti_sensor_msgs::Gyro const> GyroConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marti_sensor_msgs::Gyro_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marti_sensor_msgs::Gyro_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::marti_sensor_msgs::Gyro_<ContainerAllocator1> & lhs, const ::marti_sensor_msgs::Gyro_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.angular_rate == rhs.angular_rate &&
    lhs.variance == rhs.variance;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::marti_sensor_msgs::Gyro_<ContainerAllocator1> & lhs, const ::marti_sensor_msgs::Gyro_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace marti_sensor_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::marti_sensor_msgs::Gyro_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marti_sensor_msgs::Gyro_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_sensor_msgs::Gyro_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_sensor_msgs::Gyro_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_sensor_msgs::Gyro_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_sensor_msgs::Gyro_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marti_sensor_msgs::Gyro_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f2ad455b27f86b992b2cad5af4af11ba";
  }

  static const char* value(const ::marti_sensor_msgs::Gyro_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf2ad455b27f86b99ULL;
  static const uint64_t static_value2 = 0x2b2cad5af4af11baULL;
};

template<class ContainerAllocator>
struct DataType< ::marti_sensor_msgs::Gyro_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marti_sensor_msgs/Gyro";
  }

  static const char* value(const ::marti_sensor_msgs::Gyro_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marti_sensor_msgs::Gyro_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Single axis gyro reading.\n"
"\n"
"std_msgs/Header  header  # The time and location of the measurement.\n"
"                         # The x-axis in the sensor space is interpreted as the\n"
"                         # axis of rotation.\n"
"                         \n"
"float64 angular_rate     # Angular rate measurement in radians / sec\n"
"float64 variance         # 0 is interpreted as variance unknown\n"
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

  static const char* value(const ::marti_sensor_msgs::Gyro_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marti_sensor_msgs::Gyro_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.angular_rate);
      stream.next(m.variance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Gyro_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marti_sensor_msgs::Gyro_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marti_sensor_msgs::Gyro_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "angular_rate: ";
    Printer<double>::stream(s, indent + "  ", v.angular_rate);
    s << indent << "variance: ";
    Printer<double>::stream(s, indent + "  ", v.variance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARTI_SENSOR_MSGS_MESSAGE_GYRO_H
