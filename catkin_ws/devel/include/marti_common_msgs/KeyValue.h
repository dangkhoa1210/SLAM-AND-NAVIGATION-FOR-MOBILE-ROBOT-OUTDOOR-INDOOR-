// Generated by gencpp from file marti_common_msgs/KeyValue.msg
// DO NOT EDIT!


#ifndef MARTI_COMMON_MSGS_MESSAGE_KEYVALUE_H
#define MARTI_COMMON_MSGS_MESSAGE_KEYVALUE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace marti_common_msgs
{
template <class ContainerAllocator>
struct KeyValue_
{
  typedef KeyValue_<ContainerAllocator> Type;

  KeyValue_()
    : key()
    , value()  {
    }
  KeyValue_(const ContainerAllocator& _alloc)
    : key(_alloc)
    , value(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _key_type;
  _key_type key;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::marti_common_msgs::KeyValue_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marti_common_msgs::KeyValue_<ContainerAllocator> const> ConstPtr;

}; // struct KeyValue_

typedef ::marti_common_msgs::KeyValue_<std::allocator<void> > KeyValue;

typedef boost::shared_ptr< ::marti_common_msgs::KeyValue > KeyValuePtr;
typedef boost::shared_ptr< ::marti_common_msgs::KeyValue const> KeyValueConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marti_common_msgs::KeyValue_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marti_common_msgs::KeyValue_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::marti_common_msgs::KeyValue_<ContainerAllocator1> & lhs, const ::marti_common_msgs::KeyValue_<ContainerAllocator2> & rhs)
{
  return lhs.key == rhs.key &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::marti_common_msgs::KeyValue_<ContainerAllocator1> & lhs, const ::marti_common_msgs::KeyValue_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace marti_common_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::marti_common_msgs::KeyValue_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marti_common_msgs::KeyValue_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_common_msgs::KeyValue_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marti_common_msgs::KeyValue_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_common_msgs::KeyValue_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marti_common_msgs::KeyValue_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marti_common_msgs::KeyValue_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cf57fdc6617a881a88c16e768132149c";
  }

  static const char* value(const ::marti_common_msgs::KeyValue_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcf57fdc6617a881aULL;
  static const uint64_t static_value2 = 0x88c16e768132149cULL;
};

template<class ContainerAllocator>
struct DataType< ::marti_common_msgs::KeyValue_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marti_common_msgs/KeyValue";
  }

  static const char* value(const ::marti_common_msgs::KeyValue_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marti_common_msgs::KeyValue_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# An arbitrary key-value pair\n"
"\n"
"string key\n"
"string value\n"
;
  }

  static const char* value(const ::marti_common_msgs::KeyValue_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marti_common_msgs::KeyValue_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.key);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct KeyValue_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marti_common_msgs::KeyValue_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marti_common_msgs::KeyValue_<ContainerAllocator>& v)
  {
    s << indent << "key: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.key);
    s << indent << "value: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARTI_COMMON_MSGS_MESSAGE_KEYVALUE_H
