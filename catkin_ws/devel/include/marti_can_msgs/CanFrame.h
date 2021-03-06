// Generated by gencpp from file marti_can_msgs/CanFrame.msg
// DO NOT EDIT!


#ifndef MARTI_CAN_MSGS_MESSAGE_CANFRAME_H
#define MARTI_CAN_MSGS_MESSAGE_CANFRAME_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace marti_can_msgs
{
template <class ContainerAllocator>
struct CanFrame_
{
  typedef CanFrame_<ContainerAllocator> Type;

  CanFrame_()
    : header()
    , ID(0)
    , msg_type(0)
    , data_length(0)
    , data()  {
      data.assign(0);
  }
  CanFrame_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ID(0)
    , msg_type(0)
    , data_length(0)
    , data()  {
  (void)_alloc;
      data.assign(0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _ID_type;
  _ID_type ID;

   typedef uint8_t _msg_type_type;
  _msg_type_type msg_type;

   typedef uint8_t _data_length_type;
  _data_length_type data_length;

   typedef boost::array<uint8_t, 8>  _data_type;
  _data_type data;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(MSGTYPE_STANDARD)
  #undef MSGTYPE_STANDARD
#endif
#if defined(_WIN32) && defined(MSGTYPE_RTR)
  #undef MSGTYPE_RTR
#endif
#if defined(_WIN32) && defined(MSGTYPE_EXTENDED)
  #undef MSGTYPE_EXTENDED
#endif
#if defined(_WIN32) && defined(MSGTYPE_STATUS)
  #undef MSGTYPE_STATUS
#endif

  enum {
    MSGTYPE_STANDARD = 0u,
    MSGTYPE_RTR = 1u,
    MSGTYPE_EXTENDED = 2u,
    MSGTYPE_STATUS = 128u,
  };


  typedef boost::shared_ptr< ::marti_can_msgs::CanFrame_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marti_can_msgs::CanFrame_<ContainerAllocator> const> ConstPtr;

}; // struct CanFrame_

typedef ::marti_can_msgs::CanFrame_<std::allocator<void> > CanFrame;

typedef boost::shared_ptr< ::marti_can_msgs::CanFrame > CanFramePtr;
typedef boost::shared_ptr< ::marti_can_msgs::CanFrame const> CanFrameConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marti_can_msgs::CanFrame_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marti_can_msgs::CanFrame_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::marti_can_msgs::CanFrame_<ContainerAllocator1> & lhs, const ::marti_can_msgs::CanFrame_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ID == rhs.ID &&
    lhs.msg_type == rhs.msg_type &&
    lhs.data_length == rhs.data_length &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::marti_can_msgs::CanFrame_<ContainerAllocator1> & lhs, const ::marti_can_msgs::CanFrame_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace marti_can_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::marti_can_msgs::CanFrame_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marti_can_msgs::CanFrame_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_can_msgs::CanFrame_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_can_msgs::CanFrame_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_can_msgs::CanFrame_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_can_msgs::CanFrame_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marti_can_msgs::CanFrame_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c60d055845d0e93bcf7d8d8dca084be7";
  }

  static const char* value(const ::marti_can_msgs::CanFrame_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc60d055845d0e93bULL;
  static const uint64_t static_value2 = 0xcf7d8d8dca084be7ULL;
};

template<class ContainerAllocator>
struct DataType< ::marti_can_msgs::CanFrame_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marti_can_msgs/CanFrame";
  }

  static const char* value(const ::marti_can_msgs::CanFrame_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marti_can_msgs::CanFrame_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"# Header timestamp is the time when all messages were acquired\n"
"# and synchronized.\n"
"\n"
"uint32 ID\n"
"# CAN Message ID - This is 11 bits for standard frames or 29 bits for\n"
"# extended frames.\n"
"\n"
"uint8 msg_type	  \n"
"# CAN Message Type.  This should be one of the constants defined\n"
"# below.  (Constants used to match pcan.h from Peak's driver.)\n"
"uint8 MSGTYPE_STANDARD = 0\n"
"uint8 MSGTYPE_RTR = 1\n"
"uint8 MSGTYPE_EXTENDED = 2\n"
"uint8 MSGTYPE_STATUS = 128\n"
"\n"
"uint8 data_length\n"
"# Count of data bytes (0..8)\n"
"\n"
"uint8[8] data\n"
"# Data bytes, up to 8\n"
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

  static const char* value(const ::marti_can_msgs::CanFrame_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marti_can_msgs::CanFrame_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ID);
      stream.next(m.msg_type);
      stream.next(m.data_length);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CanFrame_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marti_can_msgs::CanFrame_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marti_can_msgs::CanFrame_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ID: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.ID);
    s << indent << "msg_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.msg_type);
    s << indent << "data_length: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.data_length);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARTI_CAN_MSGS_MESSAGE_CANFRAME_H
