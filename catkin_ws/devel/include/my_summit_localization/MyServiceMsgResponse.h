// Generated by gencpp from file my_summit_localization/MyServiceMsgResponse.msg
// DO NOT EDIT!


#ifndef MY_SUMMIT_LOCALIZATION_MESSAGE_MYSERVICEMSGRESPONSE_H
#define MY_SUMMIT_LOCALIZATION_MESSAGE_MYSERVICEMSGRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace my_summit_localization
{
template <class ContainerAllocator>
struct MyServiceMsgResponse_
{
  typedef MyServiceMsgResponse_<ContainerAllocator> Type;

  MyServiceMsgResponse_()
    : navigation_successfull(false)
    , message()  {
    }
  MyServiceMsgResponse_(const ContainerAllocator& _alloc)
    : navigation_successfull(false)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _navigation_successfull_type;
  _navigation_successfull_type navigation_successfull;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;





  typedef boost::shared_ptr< ::my_summit_localization::MyServiceMsgResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::my_summit_localization::MyServiceMsgResponse_<ContainerAllocator> const> ConstPtr;

}; // struct MyServiceMsgResponse_

typedef ::my_summit_localization::MyServiceMsgResponse_<std::allocator<void> > MyServiceMsgResponse;

typedef boost::shared_ptr< ::my_summit_localization::MyServiceMsgResponse > MyServiceMsgResponsePtr;
typedef boost::shared_ptr< ::my_summit_localization::MyServiceMsgResponse const> MyServiceMsgResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::my_summit_localization::MyServiceMsgResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::my_summit_localization::MyServiceMsgResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::my_summit_localization::MyServiceMsgResponse_<ContainerAllocator1> & lhs, const ::my_summit_localization::MyServiceMsgResponse_<ContainerAllocator2> & rhs)
{
  return lhs.navigation_successfull == rhs.navigation_successfull &&
    lhs.message == rhs.message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::my_summit_localization::MyServiceMsgResponse_<ContainerAllocator1> & lhs, const ::my_summit_localization::MyServiceMsgResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace my_summit_localization

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::my_summit_localization::MyServiceMsgResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_summit_localization::MyServiceMsgResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_summit_localization::MyServiceMsgResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_summit_localization::MyServiceMsgResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_summit_localization::MyServiceMsgResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_summit_localization::MyServiceMsgResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::my_summit_localization::MyServiceMsgResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a3a2f7c01cc0d2cc53c9f7ea9a224866";
  }

  static const char* value(const ::my_summit_localization::MyServiceMsgResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa3a2f7c01cc0d2ccULL;
  static const uint64_t static_value2 = 0x53c9f7ea9a224866ULL;
};

template<class ContainerAllocator>
struct DataType< ::my_summit_localization::MyServiceMsgResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "my_summit_localization/MyServiceMsgResponse";
  }

  static const char* value(const ::my_summit_localization::MyServiceMsgResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::my_summit_localization::MyServiceMsgResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#response\n"
"bool navigation_successfull\n"
"string message\n"
;
  }

  static const char* value(const ::my_summit_localization::MyServiceMsgResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::my_summit_localization::MyServiceMsgResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.navigation_successfull);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MyServiceMsgResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::my_summit_localization::MyServiceMsgResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::my_summit_localization::MyServiceMsgResponse_<ContainerAllocator>& v)
  {
    s << indent << "navigation_successfull: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.navigation_successfull);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MY_SUMMIT_LOCALIZATION_MESSAGE_MYSERVICEMSGRESPONSE_H
