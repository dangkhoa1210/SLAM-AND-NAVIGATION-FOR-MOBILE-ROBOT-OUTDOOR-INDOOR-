// Generated by gencpp from file rosbridge_library/SendBytes.msg
// DO NOT EDIT!


#ifndef ROSBRIDGE_LIBRARY_MESSAGE_SENDBYTES_H
#define ROSBRIDGE_LIBRARY_MESSAGE_SENDBYTES_H

#include <ros/service_traits.h>


#include <rosbridge_library/SendBytesRequest.h>
#include <rosbridge_library/SendBytesResponse.h>


namespace rosbridge_library
{

struct SendBytes
{

typedef SendBytesRequest Request;
typedef SendBytesResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SendBytes
} // namespace rosbridge_library


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rosbridge_library::SendBytes > {
  static const char* value()
  {
    return "d875457256decc7436099d9d612ebf8a";
  }

  static const char* value(const ::rosbridge_library::SendBytes&) { return value(); }
};

template<>
struct DataType< ::rosbridge_library::SendBytes > {
  static const char* value()
  {
    return "rosbridge_library/SendBytes";
  }

  static const char* value(const ::rosbridge_library::SendBytes&) { return value(); }
};


// service_traits::MD5Sum< ::rosbridge_library::SendBytesRequest> should match
// service_traits::MD5Sum< ::rosbridge_library::SendBytes >
template<>
struct MD5Sum< ::rosbridge_library::SendBytesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rosbridge_library::SendBytes >::value();
  }
  static const char* value(const ::rosbridge_library::SendBytesRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosbridge_library::SendBytesRequest> should match
// service_traits::DataType< ::rosbridge_library::SendBytes >
template<>
struct DataType< ::rosbridge_library::SendBytesRequest>
{
  static const char* value()
  {
    return DataType< ::rosbridge_library::SendBytes >::value();
  }
  static const char* value(const ::rosbridge_library::SendBytesRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rosbridge_library::SendBytesResponse> should match
// service_traits::MD5Sum< ::rosbridge_library::SendBytes >
template<>
struct MD5Sum< ::rosbridge_library::SendBytesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rosbridge_library::SendBytes >::value();
  }
  static const char* value(const ::rosbridge_library::SendBytesResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosbridge_library::SendBytesResponse> should match
// service_traits::DataType< ::rosbridge_library::SendBytes >
template<>
struct DataType< ::rosbridge_library::SendBytesResponse>
{
  static const char* value()
  {
    return DataType< ::rosbridge_library::SendBytes >::value();
  }
  static const char* value(const ::rosbridge_library::SendBytesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROSBRIDGE_LIBRARY_MESSAGE_SENDBYTES_H
