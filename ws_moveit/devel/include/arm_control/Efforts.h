// Generated by gencpp from file arm_control/Efforts.msg
// DO NOT EDIT!


#ifndef ARM_CONTROL_MESSAGE_EFFORTS_H
#define ARM_CONTROL_MESSAGE_EFFORTS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace arm_control
{
template <class ContainerAllocator>
struct Efforts_
{
  typedef Efforts_<ContainerAllocator> Type;

  Efforts_()
    : header()
    , data()  {
    }
  Efforts_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::arm_control::Efforts_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_control::Efforts_<ContainerAllocator> const> ConstPtr;

}; // struct Efforts_

typedef ::arm_control::Efforts_<std::allocator<void> > Efforts;

typedef boost::shared_ptr< ::arm_control::Efforts > EffortsPtr;
typedef boost::shared_ptr< ::arm_control::Efforts const> EffortsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::arm_control::Efforts_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::arm_control::Efforts_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::arm_control::Efforts_<ContainerAllocator1> & lhs, const ::arm_control::Efforts_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::arm_control::Efforts_<ContainerAllocator1> & lhs, const ::arm_control::Efforts_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace arm_control

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::arm_control::Efforts_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::arm_control::Efforts_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::arm_control::Efforts_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::arm_control::Efforts_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::arm_control::Efforts_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::arm_control::Efforts_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::arm_control::Efforts_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fb60495edd59d3fcf90e173153ae8a9a";
  }

  static const char* value(const ::arm_control::Efforts_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfb60495edd59d3fcULL;
  static const uint64_t static_value2 = 0xf90e173153ae8a9aULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_control::Efforts_<ContainerAllocator> >
{
  static const char* value()
  {
    return "arm_control/Efforts";
  }

  static const char* value(const ::arm_control::Efforts_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::arm_control::Efforts_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float64[] data\n"
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

  static const char* value(const ::arm_control::Efforts_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::arm_control::Efforts_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Efforts_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arm_control::Efforts_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::arm_control::Efforts_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARM_CONTROL_MESSAGE_EFFORTS_H
