// Generated by gencpp from file marti_status_msgs/ChronyTrackingStatus.msg
// DO NOT EDIT!


#ifndef MARTI_STATUS_MSGS_MESSAGE_CHRONYTRACKINGSTATUS_H
#define MARTI_STATUS_MSGS_MESSAGE_CHRONYTRACKINGSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace marti_status_msgs
{
template <class ContainerAllocator>
struct ChronyTrackingStatus_
{
  typedef ChronyTrackingStatus_<ContainerAllocator> Type;

  ChronyTrackingStatus_()
    : header()
    , reference()
    , stratum(0)
    , system_time_offset(0.0)
    , last_offset(0.0)
    , rms_offset(0.0)
    , frequency_offset(0.0)
    , residual_frequency(0.0)
    , skew(0.0)
    , root_delay(0.0)
    , root_dispersion(0.0)
    , update_interval(0.0)
    , leap_status()  {
    }
  ChronyTrackingStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , reference(_alloc)
    , stratum(0)
    , system_time_offset(0.0)
    , last_offset(0.0)
    , rms_offset(0.0)
    , frequency_offset(0.0)
    , residual_frequency(0.0)
    , skew(0.0)
    , root_delay(0.0)
    , root_dispersion(0.0)
    , update_interval(0.0)
    , leap_status(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _reference_type;
  _reference_type reference;

   typedef int32_t _stratum_type;
  _stratum_type stratum;

   typedef double _system_time_offset_type;
  _system_time_offset_type system_time_offset;

   typedef double _last_offset_type;
  _last_offset_type last_offset;

   typedef double _rms_offset_type;
  _rms_offset_type rms_offset;

   typedef float _frequency_offset_type;
  _frequency_offset_type frequency_offset;

   typedef float _residual_frequency_type;
  _residual_frequency_type residual_frequency;

   typedef float _skew_type;
  _skew_type skew;

   typedef double _root_delay_type;
  _root_delay_type root_delay;

   typedef double _root_dispersion_type;
  _root_dispersion_type root_dispersion;

   typedef float _update_interval_type;
  _update_interval_type update_interval;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _leap_status_type;
  _leap_status_type leap_status;





  typedef boost::shared_ptr< ::marti_status_msgs::ChronyTrackingStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marti_status_msgs::ChronyTrackingStatus_<ContainerAllocator> const> ConstPtr;

}; // struct ChronyTrackingStatus_

typedef ::marti_status_msgs::ChronyTrackingStatus_<std::allocator<void> > ChronyTrackingStatus;

typedef boost::shared_ptr< ::marti_status_msgs::ChronyTrackingStatus > ChronyTrackingStatusPtr;
typedef boost::shared_ptr< ::marti_status_msgs::ChronyTrackingStatus const> ChronyTrackingStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marti_status_msgs::ChronyTrackingStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marti_status_msgs::ChronyTrackingStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::marti_status_msgs::ChronyTrackingStatus_<ContainerAllocator1> & lhs, const ::marti_status_msgs::ChronyTrackingStatus_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.reference == rhs.reference &&
    lhs.stratum == rhs.stratum &&
    lhs.system_time_offset == rhs.system_time_offset &&
    lhs.last_offset == rhs.last_offset &&
    lhs.rms_offset == rhs.rms_offset &&
    lhs.frequency_offset == rhs.frequency_offset &&
    lhs.residual_frequency == rhs.residual_frequency &&
    lhs.skew == rhs.skew &&
    lhs.root_delay == rhs.root_delay &&
    lhs.root_dispersion == rhs.root_dispersion &&
    lhs.update_interval == rhs.update_interval &&
    lhs.leap_status == rhs.leap_status;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::marti_status_msgs::ChronyTrackingStatus_<ContainerAllocator1> & lhs, const ::marti_status_msgs::ChronyTrackingStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace marti_status_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::marti_status_msgs::ChronyTrackingStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marti_status_msgs::ChronyTrackingStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_status_msgs::ChronyTrackingStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_status_msgs::ChronyTrackingStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_status_msgs::ChronyTrackingStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_status_msgs::ChronyTrackingStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marti_status_msgs::ChronyTrackingStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8d4e25c769e04f542a792f47f82c3ccd";
  }

  static const char* value(const ::marti_status_msgs::ChronyTrackingStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8d4e25c769e04f54ULL;
  static const uint64_t static_value2 = 0x2a792f47f82c3ccdULL;
};

template<class ContainerAllocator>
struct DataType< ::marti_status_msgs::ChronyTrackingStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marti_status_msgs/ChronyTrackingStatus";
  }

  static const char* value(const ::marti_status_msgs::ChronyTrackingStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marti_status_msgs::ChronyTrackingStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"\n"
"string reference\n"
"int32 stratum\n"
"float64 system_time_offset\n"
"float64 last_offset \n"
"float64 rms_offset\n"
"float32 frequency_offset\n"
"float32 residual_frequency\n"
"float32 skew\n"
"float64 root_delay\n"
"float64 root_dispersion\n"
"float32 update_interval\n"
"\n"
"string leap_status\n"
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

  static const char* value(const ::marti_status_msgs::ChronyTrackingStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marti_status_msgs::ChronyTrackingStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.reference);
      stream.next(m.stratum);
      stream.next(m.system_time_offset);
      stream.next(m.last_offset);
      stream.next(m.rms_offset);
      stream.next(m.frequency_offset);
      stream.next(m.residual_frequency);
      stream.next(m.skew);
      stream.next(m.root_delay);
      stream.next(m.root_dispersion);
      stream.next(m.update_interval);
      stream.next(m.leap_status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ChronyTrackingStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marti_status_msgs::ChronyTrackingStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marti_status_msgs::ChronyTrackingStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "reference: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.reference);
    s << indent << "stratum: ";
    Printer<int32_t>::stream(s, indent + "  ", v.stratum);
    s << indent << "system_time_offset: ";
    Printer<double>::stream(s, indent + "  ", v.system_time_offset);
    s << indent << "last_offset: ";
    Printer<double>::stream(s, indent + "  ", v.last_offset);
    s << indent << "rms_offset: ";
    Printer<double>::stream(s, indent + "  ", v.rms_offset);
    s << indent << "frequency_offset: ";
    Printer<float>::stream(s, indent + "  ", v.frequency_offset);
    s << indent << "residual_frequency: ";
    Printer<float>::stream(s, indent + "  ", v.residual_frequency);
    s << indent << "skew: ";
    Printer<float>::stream(s, indent + "  ", v.skew);
    s << indent << "root_delay: ";
    Printer<double>::stream(s, indent + "  ", v.root_delay);
    s << indent << "root_dispersion: ";
    Printer<double>::stream(s, indent + "  ", v.root_dispersion);
    s << indent << "update_interval: ";
    Printer<float>::stream(s, indent + "  ", v.update_interval);
    s << indent << "leap_status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.leap_status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARTI_STATUS_MSGS_MESSAGE_CHRONYTRACKINGSTATUS_H
