// Generated by gencpp from file marti_common_msgs/StringArrayStamped.msg
// DO NOT EDIT!


#ifndef MARTI_COMMON_MSGS_MESSAGE_STRINGARRAYSTAMPED_H
#define MARTI_COMMON_MSGS_MESSAGE_STRINGARRAYSTAMPED_H


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
struct StringArrayStamped_
{
  typedef StringArrayStamped_<ContainerAllocator> Type;

  StringArrayStamped_()
    : header()
    , strings()  {
    }
  StringArrayStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , strings(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _strings_type;
  _strings_type strings;





  typedef boost::shared_ptr< ::marti_common_msgs::StringArrayStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marti_common_msgs::StringArrayStamped_<ContainerAllocator> const> ConstPtr;

}; // struct StringArrayStamped_

typedef ::marti_common_msgs::StringArrayStamped_<std::allocator<void> > StringArrayStamped;

typedef boost::shared_ptr< ::marti_common_msgs::StringArrayStamped > StringArrayStampedPtr;
typedef boost::shared_ptr< ::marti_common_msgs::StringArrayStamped const> StringArrayStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marti_common_msgs::StringArrayStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marti_common_msgs::StringArrayStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::marti_common_msgs::StringArrayStamped_<ContainerAllocator1> & lhs, const ::marti_common_msgs::StringArrayStamped_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.strings == rhs.strings;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::marti_common_msgs::StringArrayStamped_<ContainerAllocator1> & lhs, const ::marti_common_msgs::StringArrayStamped_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace marti_common_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::marti_common_msgs::StringArrayStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marti_common_msgs::StringArrayStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_common_msgs::StringArrayStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_common_msgs::StringArrayStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_common_msgs::StringArrayStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_common_msgs::StringArrayStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marti_common_msgs::StringArrayStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e8d1c28bfef374ffc40e1645c020607f";
  }

  static const char* value(const ::marti_common_msgs::StringArrayStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe8d1c28bfef374ffULL;
  static const uint64_t static_value2 = 0xc40e1645c020607fULL;
};

template<class ContainerAllocator>
struct DataType< ::marti_common_msgs::StringArrayStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marti_common_msgs/StringArrayStamped";
  }

  static const char* value(const ::marti_common_msgs::StringArrayStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marti_common_msgs::StringArrayStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# A generic message for publishing a list of strings.\n"
"\n"
"std_msgs/Header header\n"
"\n"
"string[] strings\n"
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

  static const char* value(const ::marti_common_msgs::StringArrayStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marti_common_msgs::StringArrayStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.strings);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StringArrayStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marti_common_msgs::StringArrayStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marti_common_msgs::StringArrayStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "strings[]" << std::endl;
    for (size_t i = 0; i < v.strings.size(); ++i)
    {
      s << indent << "  strings[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.strings[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARTI_COMMON_MSGS_MESSAGE_STRINGARRAYSTAMPED_H
