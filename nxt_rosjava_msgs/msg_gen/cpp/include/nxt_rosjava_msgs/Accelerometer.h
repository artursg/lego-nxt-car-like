/* Auto-generated by genmsg_cpp for file /home/alex/lego-nxt-car-like/nxt_rosjava_msgs/msg/Accelerometer.msg */
#ifndef NXT_ROSJAVA_MSGS_MESSAGE_ACCELEROMETER_H
#define NXT_ROSJAVA_MSGS_MESSAGE_ACCELEROMETER_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"

#include "std_msgs/Header.h"
#include "geometry_msgs/Vector3.h"

namespace nxt_rosjava_msgs
{
template <class ContainerAllocator>
struct Accelerometer_ : public ros::Message
{
  typedef Accelerometer_<ContainerAllocator> Type;

  Accelerometer_()
  : header()
  , linear_acceleration()
  , linear_acceleration_covariance()
  {
    linear_acceleration_covariance.assign(0.0);
  }

  Accelerometer_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , linear_acceleration(_alloc)
  , linear_acceleration_covariance()
  {
    linear_acceleration_covariance.assign(0.0);
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _linear_acceleration_type;
   ::geometry_msgs::Vector3_<ContainerAllocator>  linear_acceleration;

  typedef boost::array<double, 9>  _linear_acceleration_covariance_type;
  boost::array<double, 9>  linear_acceleration_covariance;


  ROS_DEPRECATED uint32_t get_linear_acceleration_covariance_size() const { return (uint32_t)linear_acceleration_covariance.size(); }
private:
  static const char* __s_getDataType_() { return "nxt_rosjava_msgs/Accelerometer"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "a43c5a788e7ba2f179354a76125182f0"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "Header header\n\
geometry_msgs/Vector3 linear_acceleration\n\
float64[9] linear_acceleration_covariance\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, header);
    ros::serialization::serialize(stream, linear_acceleration);
    ros::serialization::serialize(stream, linear_acceleration_covariance);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, header);
    ros::serialization::deserialize(stream, linear_acceleration);
    ros::serialization::deserialize(stream, linear_acceleration_covariance);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(header);
    size += ros::serialization::serializationLength(linear_acceleration);
    size += ros::serialization::serializationLength(linear_acceleration_covariance);
    return size;
  }

  typedef boost::shared_ptr< ::nxt_rosjava_msgs::Accelerometer_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nxt_rosjava_msgs::Accelerometer_<ContainerAllocator>  const> ConstPtr;
}; // struct Accelerometer
typedef  ::nxt_rosjava_msgs::Accelerometer_<std::allocator<void> > Accelerometer;

typedef boost::shared_ptr< ::nxt_rosjava_msgs::Accelerometer> AccelerometerPtr;
typedef boost::shared_ptr< ::nxt_rosjava_msgs::Accelerometer const> AccelerometerConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::nxt_rosjava_msgs::Accelerometer_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::nxt_rosjava_msgs::Accelerometer_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace nxt_rosjava_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::nxt_rosjava_msgs::Accelerometer_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a43c5a788e7ba2f179354a76125182f0";
  }

  static const char* value(const  ::nxt_rosjava_msgs::Accelerometer_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xa43c5a788e7ba2f1ULL;
  static const uint64_t static_value2 = 0x79354a76125182f0ULL;
};

template<class ContainerAllocator>
struct DataType< ::nxt_rosjava_msgs::Accelerometer_<ContainerAllocator> > {
  static const char* value() 
  {
    return "nxt_rosjava_msgs/Accelerometer";
  }

  static const char* value(const  ::nxt_rosjava_msgs::Accelerometer_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::nxt_rosjava_msgs::Accelerometer_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
geometry_msgs/Vector3 linear_acceleration\n\
float64[9] linear_acceleration_covariance\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const  ::nxt_rosjava_msgs::Accelerometer_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::nxt_rosjava_msgs::Accelerometer_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::nxt_rosjava_msgs::Accelerometer_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::nxt_rosjava_msgs::Accelerometer_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.linear_acceleration);
    stream.next(m.linear_acceleration_covariance);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Accelerometer_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nxt_rosjava_msgs::Accelerometer_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::nxt_rosjava_msgs::Accelerometer_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "linear_acceleration: ";
s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.linear_acceleration);
    s << indent << "linear_acceleration_covariance[]" << std::endl;
    for (size_t i = 0; i < v.linear_acceleration_covariance.size(); ++i)
    {
      s << indent << "  linear_acceleration_covariance[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.linear_acceleration_covariance[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // NXT_ROSJAVA_MSGS_MESSAGE_ACCELEROMETER_H

