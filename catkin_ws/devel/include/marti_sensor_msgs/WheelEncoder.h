// Generated by gencpp from file marti_sensor_msgs/WheelEncoder.msg
// DO NOT EDIT!


#ifndef MARTI_SENSOR_MSGS_MESSAGE_WHEELENCODER_H
#define MARTI_SENSOR_MSGS_MESSAGE_WHEELENCODER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace marti_sensor_msgs
{
template <class ContainerAllocator>
struct WheelEncoder_
{
  typedef WheelEncoder_<ContainerAllocator> Type;

  WheelEncoder_()
    : frequency(0.0)
    , directional(false)
    , id(0)  {
    }
  WheelEncoder_(const ContainerAllocator& _alloc)
    : frequency(0.0)
    , directional(false)
    , id(0)  {
  (void)_alloc;
    }



   typedef double _frequency_type;
  _frequency_type frequency;

   typedef uint8_t _directional_type;
  _directional_type directional;

   typedef uint8_t _id_type;
  _id_type id;





  typedef boost::shared_ptr< ::marti_sensor_msgs::WheelEncoder_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marti_sensor_msgs::WheelEncoder_<ContainerAllocator> const> ConstPtr;

}; // struct WheelEncoder_

typedef ::marti_sensor_msgs::WheelEncoder_<std::allocator<void> > WheelEncoder;

typedef boost::shared_ptr< ::marti_sensor_msgs::WheelEncoder > WheelEncoderPtr;
typedef boost::shared_ptr< ::marti_sensor_msgs::WheelEncoder const> WheelEncoderConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marti_sensor_msgs::WheelEncoder_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marti_sensor_msgs::WheelEncoder_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::marti_sensor_msgs::WheelEncoder_<ContainerAllocator1> & lhs, const ::marti_sensor_msgs::WheelEncoder_<ContainerAllocator2> & rhs)
{
  return lhs.frequency == rhs.frequency &&
    lhs.directional == rhs.directional &&
    lhs.id == rhs.id;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::marti_sensor_msgs::WheelEncoder_<ContainerAllocator1> & lhs, const ::marti_sensor_msgs::WheelEncoder_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace marti_sensor_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::marti_sensor_msgs::WheelEncoder_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marti_sensor_msgs::WheelEncoder_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_sensor_msgs::WheelEncoder_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_sensor_msgs::WheelEncoder_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_sensor_msgs::WheelEncoder_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_sensor_msgs::WheelEncoder_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marti_sensor_msgs::WheelEncoder_<ContainerAllocator> >
{
  static const char* value()
  {
    return "18725be6b3a6d8aef45fc5b0d63b9a58";
  }

  static const char* value(const ::marti_sensor_msgs::WheelEncoder_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x18725be6b3a6d8aeULL;
  static const uint64_t static_value2 = 0xf45fc5b0d63b9a58ULL;
};

template<class ContainerAllocator>
struct DataType< ::marti_sensor_msgs::WheelEncoder_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marti_sensor_msgs/WheelEncoder";
  }

  static const char* value(const ::marti_sensor_msgs::WheelEncoder_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marti_sensor_msgs::WheelEncoder_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Frequency from wheel encoder\n"
"#  If directional (below) is True, positive frequency means forward, and\n"
"#   negative frequency means backward.\n"
"#  If directional is False, frequency is non-negative and has no directional\n"
"#   information\n"
"float64 frequency\n"
"\n"
"# True if frequency sign is significant; false else\n"
"bool directional\n"
"\n"
"# ID of the wheel with which this data is associated\n"
"uint8 id\n"
;
  }

  static const char* value(const ::marti_sensor_msgs::WheelEncoder_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marti_sensor_msgs::WheelEncoder_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.frequency);
      stream.next(m.directional);
      stream.next(m.id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WheelEncoder_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marti_sensor_msgs::WheelEncoder_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marti_sensor_msgs::WheelEncoder_<ContainerAllocator>& v)
  {
    s << indent << "frequency: ";
    Printer<double>::stream(s, indent + "  ", v.frequency);
    s << indent << "directional: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.directional);
    s << indent << "id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARTI_SENSOR_MSGS_MESSAGE_WHEELENCODER_H
