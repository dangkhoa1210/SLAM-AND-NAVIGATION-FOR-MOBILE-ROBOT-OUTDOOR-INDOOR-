// Generated by gencpp from file mapviz/AddMapvizDisplay.msg
// DO NOT EDIT!


#ifndef MAPVIZ_MESSAGE_ADDMAPVIZDISPLAY_H
#define MAPVIZ_MESSAGE_ADDMAPVIZDISPLAY_H

#include <ros/service_traits.h>


#include <mapviz/AddMapvizDisplayRequest.h>
#include <mapviz/AddMapvizDisplayResponse.h>


namespace mapviz
{

struct AddMapvizDisplay
{

typedef AddMapvizDisplayRequest Request;
typedef AddMapvizDisplayResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct AddMapvizDisplay
} // namespace mapviz


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::mapviz::AddMapvizDisplay > {
  static const char* value()
  {
    return "7bd51d7a9d8469fae51039cf79b96d10";
  }

  static const char* value(const ::mapviz::AddMapvizDisplay&) { return value(); }
};

template<>
struct DataType< ::mapviz::AddMapvizDisplay > {
  static const char* value()
  {
    return "mapviz/AddMapvizDisplay";
  }

  static const char* value(const ::mapviz::AddMapvizDisplay&) { return value(); }
};


// service_traits::MD5Sum< ::mapviz::AddMapvizDisplayRequest> should match
// service_traits::MD5Sum< ::mapviz::AddMapvizDisplay >
template<>
struct MD5Sum< ::mapviz::AddMapvizDisplayRequest>
{
  static const char* value()
  {
    return MD5Sum< ::mapviz::AddMapvizDisplay >::value();
  }
  static const char* value(const ::mapviz::AddMapvizDisplayRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::mapviz::AddMapvizDisplayRequest> should match
// service_traits::DataType< ::mapviz::AddMapvizDisplay >
template<>
struct DataType< ::mapviz::AddMapvizDisplayRequest>
{
  static const char* value()
  {
    return DataType< ::mapviz::AddMapvizDisplay >::value();
  }
  static const char* value(const ::mapviz::AddMapvizDisplayRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::mapviz::AddMapvizDisplayResponse> should match
// service_traits::MD5Sum< ::mapviz::AddMapvizDisplay >
template<>
struct MD5Sum< ::mapviz::AddMapvizDisplayResponse>
{
  static const char* value()
  {
    return MD5Sum< ::mapviz::AddMapvizDisplay >::value();
  }
  static const char* value(const ::mapviz::AddMapvizDisplayResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::mapviz::AddMapvizDisplayResponse> should match
// service_traits::DataType< ::mapviz::AddMapvizDisplay >
template<>
struct DataType< ::mapviz::AddMapvizDisplayResponse>
{
  static const char* value()
  {
    return DataType< ::mapviz::AddMapvizDisplay >::value();
  }
  static const char* value(const ::mapviz::AddMapvizDisplayResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MAPVIZ_MESSAGE_ADDMAPVIZDISPLAY_H
