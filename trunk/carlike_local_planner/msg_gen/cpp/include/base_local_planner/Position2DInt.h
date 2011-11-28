/* Auto-generated by genmsg_cpp for file /tmp/buildd/ros-diamondback-navigation-1.4.2/debian/ros-diamondback-navigation/opt/ros/diamondback/stacks/navigation/base_local_planner/msg/Position2DInt.msg */
#ifndef BASE_LOCAL_PLANNER_MESSAGE_POSITION2DINT_H
#define BASE_LOCAL_PLANNER_MESSAGE_POSITION2DINT_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"


namespace base_local_planner
{
template <class ContainerAllocator>
struct Position2DInt_ : public ros::Message
{
  typedef Position2DInt_<ContainerAllocator> Type;

  Position2DInt_()
  : x(0)
  , y(0)
  {
  }

  Position2DInt_(const ContainerAllocator& _alloc)
  : x(0)
  , y(0)
  {
  }

  typedef int64_t _x_type;
  int64_t x;

  typedef int64_t _y_type;
  int64_t y;


private:
  static const char* __s_getDataType_() { return "base_local_planner/Position2DInt"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "3b834ede922a0fff22c43585c533b49f"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "int64 x\n\
int64 y\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, x);
    ros::serialization::serialize(stream, y);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, x);
    ros::serialization::deserialize(stream, y);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(x);
    size += ros::serialization::serializationLength(y);
    return size;
  }

  typedef boost::shared_ptr< ::base_local_planner::Position2DInt_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::base_local_planner::Position2DInt_<ContainerAllocator>  const> ConstPtr;
}; // struct Position2DInt
typedef  ::base_local_planner::Position2DInt_<std::allocator<void> > Position2DInt;

typedef boost::shared_ptr< ::base_local_planner::Position2DInt> Position2DIntPtr;
typedef boost::shared_ptr< ::base_local_planner::Position2DInt const> Position2DIntConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::base_local_planner::Position2DInt_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::base_local_planner::Position2DInt_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace base_local_planner

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::base_local_planner::Position2DInt_<ContainerAllocator> > {
  static const char* value() 
  {
    return "3b834ede922a0fff22c43585c533b49f";
  }

  static const char* value(const  ::base_local_planner::Position2DInt_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x3b834ede922a0fffULL;
  static const uint64_t static_value2 = 0x22c43585c533b49fULL;
};

template<class ContainerAllocator>
struct DataType< ::base_local_planner::Position2DInt_<ContainerAllocator> > {
  static const char* value() 
  {
    return "base_local_planner/Position2DInt";
  }

  static const char* value(const  ::base_local_planner::Position2DInt_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::base_local_planner::Position2DInt_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int64 x\n\
int64 y\n\
";
  }

  static const char* value(const  ::base_local_planner::Position2DInt_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::base_local_planner::Position2DInt_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::base_local_planner::Position2DInt_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.x);
    stream.next(m.y);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Position2DInt_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::base_local_planner::Position2DInt_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::base_local_planner::Position2DInt_<ContainerAllocator> & v) 
  {
    s << indent << "x: ";
    Printer<int64_t>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<int64_t>::stream(s, indent + "  ", v.y);
  }
};


} // namespace message_operations
} // namespace ros

#endif // BASE_LOCAL_PLANNER_MESSAGE_POSITION2DINT_H

