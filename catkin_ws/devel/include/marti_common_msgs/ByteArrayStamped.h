// Generated by gencpp from file marti_common_msgs/ByteArrayStamped.msg
// DO NOT EDIT!


#ifndef MARTI_COMMON_MSGS_MESSAGE_BYTEARRAYSTAMPED_H
#define MARTI_COMMON_MSGS_MESSAGE_BYTEARRAYSTAMPED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace marti_common_msgs
{
template <class ContainerAllocator>
struct ByteArrayStamped_
{
  typedef ByteArrayStamped_<ContainerAllocator> Type;

  ByteArrayStamped_()
    : header()
    , value()  {
    }
  ByteArrayStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , value(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other >  _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::marti_common_msgs::ByteArrayStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marti_common_msgs::ByteArrayStamped_<ContainerAllocator> const> ConstPtr;

}; // struct ByteArrayStamped_

typedef ::marti_common_msgs::ByteArrayStamped_<std::allocator<void> > ByteArrayStamped;

typedef boost::shared_ptr< ::marti_common_msgs::ByteArrayStamped > ByteArrayStampedPtr;
typedef boost::shared_ptr< ::marti_common_msgs::ByteArrayStamped const> ByteArrayStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marti_common_msgs::ByteArrayStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marti_common_msgs::ByteArrayStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::marti_common_msgs::ByteArrayStamped_<ContainerAllocator1> & lhs, const ::marti_common_msgs::ByteArrayStamped_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::marti_common_msgs::ByteArrayStamped_<ContainerAllocator1> & lhs, const ::marti_common_msgs::ByteArrayStamped_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace marti_common_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::marti_common_msgs::ByteArrayStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marti_common_msgs::ByteArrayStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_common_msgs::ByteArrayStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_common_msgs::ByteArrayStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_common_msgs::ByteArrayStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_common_msgs::ByteArrayStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marti_common_msgs::ByteArrayStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "375ed7aa29ecfbdffa16b36b36760a28";
  }

  static const char* value(const ::marti_common_msgs::ByteArrayStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x375ed7aa29ecfbdfULL;
  static const uint64_t static_value2 = 0xfa16b36b36760a28ULL;
};

template<class ContainerAllocator>
struct DataType< ::marti_common_msgs::ByteArrayStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marti_common_msgs/ByteArrayStamped";
  }

  static const char* value(const ::marti_common_msgs::ByteArrayStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marti_common_msgs::ByteArrayStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"\n"
"byte[] value\n"
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

  static const char* value(const ::marti_common_msgs::ByteArrayStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marti_common_msgs::ByteArrayStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ByteArrayStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marti_common_msgs::ByteArrayStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marti_common_msgs::ByteArrayStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "value[]" << std::endl;
    for (size_t i = 0; i < v.value.size(); ++i)
    {
      s << indent << "  value[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.value[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARTI_COMMON_MSGS_MESSAGE_BYTEARRAYSTAMPED_H
