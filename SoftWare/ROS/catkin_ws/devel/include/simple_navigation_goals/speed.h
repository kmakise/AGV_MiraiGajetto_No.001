// Generated by gencpp from file simple_navigation_goals/speed.msg
// DO NOT EDIT!


#ifndef SIMPLE_NAVIGATION_GOALS_MESSAGE_SPEED_H
#define SIMPLE_NAVIGATION_GOALS_MESSAGE_SPEED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace simple_navigation_goals
{
template <class ContainerAllocator>
struct speed_
{
  typedef speed_<ContainerAllocator> Type;

  speed_()
    : stop(0)  {
    }
  speed_(const ContainerAllocator& _alloc)
    : stop(0)  {
  (void)_alloc;
    }



   typedef int32_t _stop_type;
  _stop_type stop;





  typedef boost::shared_ptr< ::simple_navigation_goals::speed_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::simple_navigation_goals::speed_<ContainerAllocator> const> ConstPtr;

}; // struct speed_

typedef ::simple_navigation_goals::speed_<std::allocator<void> > speed;

typedef boost::shared_ptr< ::simple_navigation_goals::speed > speedPtr;
typedef boost::shared_ptr< ::simple_navigation_goals::speed const> speedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::simple_navigation_goals::speed_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::simple_navigation_goals::speed_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace simple_navigation_goals

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'simple_navigation_goals': ['/home/kmakise/catkin_ws/src/simple_navigation_goals/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::simple_navigation_goals::speed_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::simple_navigation_goals::speed_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simple_navigation_goals::speed_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simple_navigation_goals::speed_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simple_navigation_goals::speed_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simple_navigation_goals::speed_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::simple_navigation_goals::speed_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e2327cd410f9df67fdb178d3542f8022";
  }

  static const char* value(const ::simple_navigation_goals::speed_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe2327cd410f9df67ULL;
  static const uint64_t static_value2 = 0xfdb178d3542f8022ULL;
};

template<class ContainerAllocator>
struct DataType< ::simple_navigation_goals::speed_<ContainerAllocator> >
{
  static const char* value()
  {
    return "simple_navigation_goals/speed";
  }

  static const char* value(const ::simple_navigation_goals::speed_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::simple_navigation_goals::speed_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 stop\n\
";
  }

  static const char* value(const ::simple_navigation_goals::speed_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::simple_navigation_goals::speed_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stop);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct speed_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::simple_navigation_goals::speed_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::simple_navigation_goals::speed_<ContainerAllocator>& v)
  {
    s << indent << "stop: ";
    Printer<int32_t>::stream(s, indent + "  ", v.stop);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SIMPLE_NAVIGATION_GOALS_MESSAGE_SPEED_H
