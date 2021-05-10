// Generated by gencpp from file moveit_msgs/GetMotionPlanRequest.msg
// DO NOT EDIT!


#ifndef MOVEIT_MSGS_MESSAGE_GETMOTIONPLANREQUEST_H
#define MOVEIT_MSGS_MESSAGE_GETMOTIONPLANREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <moveit_msgs/MotionPlanRequest.h>

namespace moveit_msgs
{
template <class ContainerAllocator>
struct GetMotionPlanRequest_
{
  typedef GetMotionPlanRequest_<ContainerAllocator> Type;

  GetMotionPlanRequest_()
    : motion_plan_request()  {
    }
  GetMotionPlanRequest_(const ContainerAllocator& _alloc)
    : motion_plan_request(_alloc)  {
  (void)_alloc;
    }



   typedef  ::moveit_msgs::MotionPlanRequest_<ContainerAllocator>  _motion_plan_request_type;
  _motion_plan_request_type motion_plan_request;





  typedef boost::shared_ptr< ::moveit_msgs::GetMotionPlanRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::GetMotionPlanRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetMotionPlanRequest_

typedef ::moveit_msgs::GetMotionPlanRequest_<std::allocator<void> > GetMotionPlanRequest;

typedef boost::shared_ptr< ::moveit_msgs::GetMotionPlanRequest > GetMotionPlanRequestPtr;
typedef boost::shared_ptr< ::moveit_msgs::GetMotionPlanRequest const> GetMotionPlanRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::GetMotionPlanRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::GetMotionPlanRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::moveit_msgs::GetMotionPlanRequest_<ContainerAllocator1> & lhs, const ::moveit_msgs::GetMotionPlanRequest_<ContainerAllocator2> & rhs)
{
  return lhs.motion_plan_request == rhs.motion_plan_request;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::moveit_msgs::GetMotionPlanRequest_<ContainerAllocator1> & lhs, const ::moveit_msgs::GetMotionPlanRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace moveit_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::GetMotionPlanRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::GetMotionPlanRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::GetMotionPlanRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::GetMotionPlanRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::GetMotionPlanRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::GetMotionPlanRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::GetMotionPlanRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5459d2db10f706c7e69e5485e0b58672";
  }

  static const char* value(const ::moveit_msgs::GetMotionPlanRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5459d2db10f706c7ULL;
  static const uint64_t static_value2 = 0xe69e5485e0b58672ULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::GetMotionPlanRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/GetMotionPlanRequest";
  }

  static const char* value(const ::moveit_msgs::GetMotionPlanRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::GetMotionPlanRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This service contains the definition for a request to the motion\n"
"# planner and the output it provides\n"
"\n"
"MotionPlanRequest motion_plan_request\n"
"\n"
"\n"
"================================================================================\n"
"MSG: moveit_msgs/MotionPlanRequest\n"
"# This service contains the definition for a request to the motion\n"
"# planner and the output it provides\n"
"\n"
"# Parameters for the workspace that the planner should work inside\n"
"WorkspaceParameters workspace_parameters\n"
"\n"
"# Starting state updates. If certain joints should be considered\n"
"# at positions other than the current ones, these positions should\n"
"# be set here\n"
"RobotState start_state\n"
"\n"
"# The possible goal states for the model to plan for. Each element of\n"
"# the array defines a goal region. The goal is achieved\n"
"# if the constraints for a particular region are satisfied\n"
"Constraints[] goal_constraints\n"
"\n"
"# No state at any point along the path in the produced motion plan will violate these constraints (this applies to all points, not just waypoints)\n"
"Constraints path_constraints\n"
"\n"
"# The constraints the resulting trajectory must satisfy\n"
"TrajectoryConstraints trajectory_constraints\n"
"\n"
"# A set of trajectories that may be used as reference or initial trajectories for (typically optimization-based) planners\n"
"# These trajectories do not override start_state or goal_constraints\n"
"GenericTrajectory[] reference_trajectories\n"
"\n"
"# The name of the planning pipeline to use. If no name is specified,\n"
"# the configured planning pipeline will be used\n"
"string pipeline_id\n"
"\n"
"# The name of the planning algorithm to use. If no name is specified,\n"
"# the default planner of the planning pipeline will be used\n"
"string planner_id\n"
"\n"
"# The name of the group of joints on which this planner is operating\n"
"string group_name\n"
"\n"
"# The number of times this plan is to be computed. Shortest solution\n"
"# will be reported.\n"
"int32 num_planning_attempts\n"
"\n"
"# The maximum amount of time the motion planner is allowed to plan for (in seconds)\n"
"float64 allowed_planning_time\n"
"\n"
"# Scaling factors for optionally reducing the maximum joint velocities and\n"
"# accelerations.  Allowed values are in (0,1].  The maximum joint velocity and\n"
"# acceleration specified in the robot model are multiplied by thier respective\n"
"# factors.  If either are outside their valid ranges (importantly, this\n"
"# includes being set to 0.0), the factor is set to the default value of 1.0\n"
"# internally (i.e., maximum joint velocity or maximum joint acceleration).\n"
"float64 max_velocity_scaling_factor\n"
"float64 max_acceleration_scaling_factor\n"
"\n"
"# Maximum cartesian speed for the given end effector.\n"
"# If max_cartesian_speed <= 0 the trajectory is not modified.\n"
"# These fields require the following planning request adapter: default_planner_request_adapters/SetMaxCartesianEndEffectorSpeed\n"
"string cartesian_speed_end_effector_link\n"
"float64 max_cartesian_speed # m/s\n"
"\n"
"================================================================================\n"
"MSG: moveit_msgs/WorkspaceParameters\n"
"# This message contains a set of parameters useful in\n"
"# setting up the volume (a box) in which the robot is allowed to move.\n"
"# This is useful only when planning for mobile parts of \n"
"# the robot as well.\n"
"\n"
"# Define the frame of reference for the box corners\n"
"Header header\n"
"\n"
"# The minumum corner of the box, with respect to the robot starting pose\n"
"geometry_msgs/Vector3 min_corner\n"
"\n"
"# The maximum corner of the box, with respect to the robot starting pose\n"
"geometry_msgs/Vector3 max_corner\n"
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
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: moveit_msgs/RobotState\n"
"# This message contains information about the robot state, i.e. the positions of its joints and links\n"
"sensor_msgs/JointState joint_state\n"
"\n"
"# Joints that may have multiple DOF are specified here\n"
"sensor_msgs/MultiDOFJointState multi_dof_joint_state\n"
"\n"
"# Attached collision objects (attached to some link on the robot)\n"
"AttachedCollisionObject[] attached_collision_objects\n"
"\n"
"# Flag indicating whether this scene is to be interpreted as a diff with respect to some other scene\n"
"# This is mostly important for handling the attached bodies (whether or not to clear the attached bodies\n"
"# of a moveit::core::RobotState before updating it with this message)\n"
"bool is_diff\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/JointState\n"
"# This is a message that holds data to describe the state of a set of torque controlled joints. \n"
"#\n"
"# The state of each joint (revolute or prismatic) is defined by:\n"
"#  * the position of the joint (rad or m),\n"
"#  * the velocity of the joint (rad/s or m/s) and \n"
"#  * the effort that is applied in the joint (Nm or N).\n"
"#\n"
"# Each joint is uniquely identified by its name\n"
"# The header specifies the time at which the joint states were recorded. All the joint states\n"
"# in one message have to be recorded at the same time.\n"
"#\n"
"# This message consists of a multiple arrays, one for each part of the joint state. \n"
"# The goal is to make each of the fields optional. When e.g. your joints have no\n"
"# effort associated with them, you can leave the effort array empty. \n"
"#\n"
"# All arrays in this message should have the same size, or be empty.\n"
"# This is the only way to uniquely associate the joint name with the correct\n"
"# states.\n"
"\n"
"\n"
"Header header\n"
"\n"
"string[] name\n"
"float64[] position\n"
"float64[] velocity\n"
"float64[] effort\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/MultiDOFJointState\n"
"# Representation of state for joints with multiple degrees of freedom, \n"
"# following the structure of JointState.\n"
"#\n"
"# It is assumed that a joint in a system corresponds to a transform that gets applied \n"
"# along the kinematic chain. For example, a planar joint (as in URDF) is 3DOF (x, y, yaw)\n"
"# and those 3DOF can be expressed as a transformation matrix, and that transformation\n"
"# matrix can be converted back to (x, y, yaw)\n"
"#\n"
"# Each joint is uniquely identified by its name\n"
"# The header specifies the time at which the joint states were recorded. All the joint states\n"
"# in one message have to be recorded at the same time.\n"
"#\n"
"# This message consists of a multiple arrays, one for each part of the joint state. \n"
"# The goal is to make each of the fields optional. When e.g. your joints have no\n"
"# wrench associated with them, you can leave the wrench array empty. \n"
"#\n"
"# All arrays in this message should have the same size, or be empty.\n"
"# This is the only way to uniquely associate the joint name with the correct\n"
"# states.\n"
"\n"
"Header header\n"
"\n"
"string[] joint_names\n"
"geometry_msgs/Transform[] transforms\n"
"geometry_msgs/Twist[] twist\n"
"geometry_msgs/Wrench[] wrench\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Transform\n"
"# This represents the transform between two coordinate frames in free space.\n"
"\n"
"Vector3 translation\n"
"Quaternion rotation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Twist\n"
"# This expresses velocity in free space broken into its linear and angular parts.\n"
"Vector3  linear\n"
"Vector3  angular\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Wrench\n"
"# This represents force in free space, separated into\n"
"# its linear and angular parts.\n"
"Vector3  force\n"
"Vector3  torque\n"
"\n"
"================================================================================\n"
"MSG: moveit_msgs/AttachedCollisionObject\n"
"# The CollisionObject will be attached with a fixed joint to this link\n"
"string link_name\n"
"\n"
"#This contains the actual shapes and poses for the CollisionObject\n"
"#to be attached to the link\n"
"#If action is remove and no object.id is set, all objects\n"
"#attached to the link indicated by link_name will be removed\n"
"CollisionObject object\n"
"\n"
"# The set of links that the attached objects are allowed to touch\n"
"# by default - the link_name is already considered by default\n"
"string[] touch_links\n"
"\n"
"# If certain links were placed in a particular posture for this object to remain attached \n"
"# (e.g., an end effector closing around an object), the posture necessary for releasing\n"
"# the object is stored here\n"
"trajectory_msgs/JointTrajectory detach_posture\n"
"\n"
"# The weight of the attached object, if known\n"
"float64 weight\n"
"\n"
"================================================================================\n"
"MSG: moveit_msgs/CollisionObject\n"
"# A header, used for interpreting the poses\n"
"Header header\n"
"\n"
"# DISCLAIMER: This field is not in use yet and all other poses\n"
"# are still interpreted in the header frame.\n"
"# https://github.com/ros-planning/moveit/pull/2037\n"
"# implements the actual logic for this field.\n"
"# ---\n"
"# The object's pose relative to the header frame.\n"
"# The shapes and subframe poses are defined relative to this pose.\n"
"geometry_msgs/Pose pose\n"
"\n"
"# The id of the object (name used in MoveIt)\n"
"string id\n"
"\n"
"# The object type in a database of known objects\n"
"object_recognition_msgs/ObjectType type\n"
"\n"
"# The collision geometries associated with the object.\n"
"# Their poses are with respect to the object's pose\n"
"\n"
"# Solid geometric primitives\n"
"shape_msgs/SolidPrimitive[] primitives\n"
"geometry_msgs/Pose[] primitive_poses\n"
"\n"
"# Meshes\n"
"shape_msgs/Mesh[] meshes\n"
"geometry_msgs/Pose[] mesh_poses\n"
"\n"
"# Bounding planes (equation is specified, but the plane can be oriented using an additional pose)\n"
"shape_msgs/Plane[] planes\n"
"geometry_msgs/Pose[] plane_poses\n"
"\n"
"# Named subframes on the object. Use these to define points of interest on the object that you want\n"
"# to plan with (e.g. \"tip\", \"spout\", \"handle\"). The id of the object will be prepended to the subframe.\n"
"# If an object with the id \"screwdriver\" and a subframe \"tip\" is in the scene, you can use the frame\n"
"# \"screwdriver/tip\" for planning.\n"
"# The length of the subframe_names and subframe_poses has to be identical.\n"
"string[] subframe_names\n"
"geometry_msgs/Pose[] subframe_poses\n"
"\n"
"# Adds the object to the planning scene. If the object previously existed, it is replaced.\n"
"byte ADD=0\n"
"\n"
"# Removes the object from the environment entirely (everything that matches the specified id)\n"
"byte REMOVE=1\n"
"\n"
"# Append to an object that already exists in the planning scene. If the object does not exist, it is added.\n"
"byte APPEND=2\n"
"\n"
"# If an object already exists in the scene, new poses can be sent (the geometry arrays must be left empty)\n"
"# if solely moving the object is desired\n"
"byte MOVE=3\n"
"\n"
"# Operation to be performed\n"
"byte operation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: object_recognition_msgs/ObjectType\n"
"################################################## OBJECT ID #########################################################\n"
"\n"
"# Contains information about the type of a found object. Those two sets of parameters together uniquely define an\n"
"# object\n"
"\n"
"# The key of the found object: the unique identifier in the given db\n"
"string key\n"
"\n"
"# The db parameters stored as a JSON/compressed YAML string. An object id does not make sense without the corresponding\n"
"# database. E.g., in object_recognition, it can look like: \"{'type':'CouchDB', 'root':'http://localhost'}\"\n"
"# There is no conventional format for those parameters and it's nice to keep that flexibility.\n"
"# The object_recognition_core as a generic DB type that can read those fields\n"
"# Current examples:\n"
"# For CouchDB:\n"
"#   type: 'CouchDB'\n"
"#   root: 'http://localhost:5984'\n"
"#   collection: 'object_recognition'\n"
"# For SQL household database:\n"
"#   type: 'SqlHousehold'\n"
"#   host: 'wgs36'\n"
"#   port: 5432\n"
"#   user: 'willow'\n"
"#   password: 'willow'\n"
"#   name: 'household_objects'\n"
"#   module: 'tabletop'\n"
"string db\n"
"\n"
"================================================================================\n"
"MSG: shape_msgs/SolidPrimitive\n"
"# Define box, sphere, cylinder, cone \n"
"# All shapes are defined to have their bounding boxes centered around 0,0,0.\n"
"\n"
"uint8 BOX=1\n"
"uint8 SPHERE=2\n"
"uint8 CYLINDER=3\n"
"uint8 CONE=4\n"
"\n"
"# The type of the shape\n"
"uint8 type\n"
"\n"
"\n"
"# The dimensions of the shape\n"
"float64[] dimensions\n"
"\n"
"# The meaning of the shape dimensions: each constant defines the index in the 'dimensions' array\n"
"\n"
"# For the BOX type, the X, Y, and Z dimensions are the length of the corresponding\n"
"# sides of the box.\n"
"uint8 BOX_X=0\n"
"uint8 BOX_Y=1\n"
"uint8 BOX_Z=2\n"
"\n"
"\n"
"# For the SPHERE type, only one component is used, and it gives the radius of\n"
"# the sphere.\n"
"uint8 SPHERE_RADIUS=0\n"
"\n"
"\n"
"# For the CYLINDER and CONE types, the center line is oriented along\n"
"# the Z axis.  Therefore the CYLINDER_HEIGHT (CONE_HEIGHT) component\n"
"# of dimensions gives the height of the cylinder (cone).  The\n"
"# CYLINDER_RADIUS (CONE_RADIUS) component of dimensions gives the\n"
"# radius of the base of the cylinder (cone).  Cone and cylinder\n"
"# primitives are defined to be circular. The tip of the cone is\n"
"# pointing up, along +Z axis.\n"
"\n"
"uint8 CYLINDER_HEIGHT=0\n"
"uint8 CYLINDER_RADIUS=1\n"
"\n"
"uint8 CONE_HEIGHT=0\n"
"uint8 CONE_RADIUS=1\n"
"\n"
"================================================================================\n"
"MSG: shape_msgs/Mesh\n"
"# Definition of a mesh\n"
"\n"
"# list of triangles; the index values refer to positions in vertices[]\n"
"MeshTriangle[] triangles\n"
"\n"
"# the actual vertices that make up the mesh\n"
"geometry_msgs/Point[] vertices\n"
"\n"
"================================================================================\n"
"MSG: shape_msgs/MeshTriangle\n"
"# Definition of a triangle's vertices\n"
"uint32[3] vertex_indices\n"
"\n"
"================================================================================\n"
"MSG: shape_msgs/Plane\n"
"# Representation of a plane, using the plane equation ax + by + cz + d = 0\n"
"\n"
"# a := coef[0]\n"
"# b := coef[1]\n"
"# c := coef[2]\n"
"# d := coef[3]\n"
"\n"
"float64[4] coef\n"
"\n"
"================================================================================\n"
"MSG: trajectory_msgs/JointTrajectory\n"
"Header header\n"
"string[] joint_names\n"
"JointTrajectoryPoint[] points\n"
"\n"
"================================================================================\n"
"MSG: trajectory_msgs/JointTrajectoryPoint\n"
"# Each trajectory point specifies either positions[, velocities[, accelerations]]\n"
"# or positions[, effort] for the trajectory to be executed.\n"
"# All specified values are in the same order as the joint names in JointTrajectory.msg\n"
"\n"
"float64[] positions\n"
"float64[] velocities\n"
"float64[] accelerations\n"
"float64[] effort\n"
"duration time_from_start\n"
"\n"
"================================================================================\n"
"MSG: moveit_msgs/Constraints\n"
"# This message contains a list of motion planning constraints.\n"
"# All constraints must be satisfied for a goal to be considered valid\n"
"\n"
"string name\n"
"\n"
"JointConstraint[] joint_constraints\n"
"\n"
"PositionConstraint[] position_constraints\n"
"\n"
"OrientationConstraint[] orientation_constraints\n"
"\n"
"VisibilityConstraint[] visibility_constraints\n"
"\n"
"================================================================================\n"
"MSG: moveit_msgs/JointConstraint\n"
"# Constrain the position of a joint to be within a certain bound\n"
"string joint_name\n"
"\n"
"# the bound to be achieved is [position - tolerance_below, position + tolerance_above]\n"
"float64 position\n"
"float64 tolerance_above\n"
"float64 tolerance_below\n"
"\n"
"# A weighting factor for this constraint (denotes relative importance to other constraints. Closer to zero means less important)\n"
"float64 weight\n"
"================================================================================\n"
"MSG: moveit_msgs/PositionConstraint\n"
"# This message contains the definition of a position constraint.\n"
"\n"
"Header header\n"
"\n"
"# The robot link this constraint refers to\n"
"string link_name\n"
"\n"
"# The offset (in the link frame) for the target point on the link we are planning for\n"
"geometry_msgs/Vector3 target_point_offset\n"
"\n"
"# The volume this constraint refers to \n"
"BoundingVolume constraint_region\n"
"\n"
"# A weighting factor for this constraint (denotes relative importance to other constraints. Closer to zero means less important)\n"
"float64 weight\n"
"\n"
"================================================================================\n"
"MSG: moveit_msgs/BoundingVolume\n"
"# Define a volume in 3D\n"
"\n"
"# A set of solid geometric primitives that make up the volume to define (as a union)\n"
"shape_msgs/SolidPrimitive[] primitives\n"
"\n"
"# The poses at which the primitives are located\n"
"geometry_msgs/Pose[] primitive_poses\n"
"\n"
"# In addition to primitives, meshes can be specified to add to the bounding volume (again, as union)\n"
"shape_msgs/Mesh[] meshes\n"
"\n"
"# The poses at which the meshes are located\n"
"geometry_msgs/Pose[] mesh_poses\n"
"\n"
"================================================================================\n"
"MSG: moveit_msgs/OrientationConstraint\n"
"# This message contains the definition of an orientation constraint.\n"
"\n"
"Header header\n"
"\n"
"# The desired orientation of the robot link specified as a quaternion\n"
"geometry_msgs/Quaternion orientation\n"
"\n"
"# The robot link this constraint refers to\n"
"string link_name\n"
"\n"
"# Tolerance on the three vector components of the orientation error (optional)\n"
"float64 absolute_x_axis_tolerance\n"
"float64 absolute_y_axis_tolerance\n"
"float64 absolute_z_axis_tolerance\n"
"\n"
"# Defines how the orientation error is calculated\n"
"# The error is compared to the tolerance defined above\n"
"uint8 parameterization\n"
"\n"
"# The different options for the orientation error parameterization\n"
"# - Intrinsic xyz Euler angles (default value)\n"
"uint8 XYZ_EULER_ANGLES=0\n"
"# - A rotation vector. This is similar to the angle-axis representation,\n"
"# but the magnitude of the vector represents the rotation angle.\n"
"uint8 ROTATION_VECTOR=1\n"
"\n"
"# A weighting factor for this constraint (denotes relative importance to other constraints. Closer to zero means less important)\n"
"float64 weight\n"
"\n"
"================================================================================\n"
"MSG: moveit_msgs/VisibilityConstraint\n"
"# The constraint is useful to maintain visibility to a disc (the target) in a particular frame.\n"
"# This disc forms the base of a visibiliy cone whose tip is at the origin of the sensor.\n"
"# Maintaining visibility is done by ensuring the robot does not obstruct the visibility cone.\n"
"# Note:\n"
"# This constraint does NOT enforce minimum or maximum distances between the sensor\n"
"# and the target, nor does it enforce the target to be in the field of view of\n"
"# the sensor. A PositionConstraint can (and probably should) be used for such purposes.\n"
"\n"
"# The radius of the disc that should be maintained visible \n"
"float64 target_radius\n"
"\n"
"# The pose of the disc; as the robot moves, the pose of the disc may change as well\n"
"# This can be in the frame of a particular robot link, for example\n"
"geometry_msgs/PoseStamped target_pose\n"
"\n"
"# From the sensor origin towards the target, the disc forms a visibility cone\n"
"# This cone is approximated using many sides. For example, when using 4 sides, \n"
"# that in fact makes the visibility region be a pyramid.\n"
"# This value should always be 3 or more.\n"
"int32 cone_sides\n"
"\n"
"# The pose in which visibility is to be maintained.\n"
"# The frame id should represent the robot link to which the sensor is attached.\n"
"# It is assumed the sensor can look directly at the target, in any direction.\n"
"# This assumption is usually not true, but additional PositionConstraints\n"
"# can resolve this issue.\n"
"geometry_msgs/PoseStamped sensor_pose\n"
"\n"
"# Even though the disc is maintained visible, the visibility cone can be very small\n"
"# because of the orientation of the disc with respect to the sensor. It is possible\n"
"# for example to view the disk almost from a side, in which case the visibility cone \n"
"# can end up having close to 0 volume. The view angle is defined to be the angle between\n"
"# the normal to the visibility disc and the direction vector from the sensor origin.\n"
"# The value below represents the minimum desired view angle. For a perfect view,\n"
"# this value will be 0 (the two vectors are exact opposites). For a completely obstructed view\n"
"# this value will be Pi/2 (the vectors are perpendicular). This value defined below \n"
"# is the maximum view angle to be maintained. This should be a value in the open interval\n"
"# (0, Pi/2). If 0 is set, the view angle is NOT enforced.\n"
"float64 max_view_angle\n"
"\n"
"# This angle is used similarly to max_view_angle but limits the maximum angle\n"
"# between the sensor origin direction vector and the axis that connects the\n"
"# sensor origin to the target frame origin. The value is again in the range (0, Pi/2)\n"
"# and is NOT enforced if set to 0.\n"
"float64 max_range_angle\n"
"\n"
"# The axis that is assumed to indicate the direction of view for the sensor\n"
"# X = 2, Y = 1, Z = 0\n"
"uint8 SENSOR_Z=0\n"
"uint8 SENSOR_Y=1\n"
"uint8 SENSOR_X=2\n"
"uint8 sensor_view_direction\n"
"\n"
"# A weighting factor for this constraint (denotes relative importance to other constraints. Closer to zero means less important)\n"
"float64 weight\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
"\n"
"================================================================================\n"
"MSG: moveit_msgs/TrajectoryConstraints\n"
"# The array of constraints to consider along the trajectory\n"
"Constraints[] constraints\n"
"\n"
"================================================================================\n"
"MSG: moveit_msgs/GenericTrajectory\n"
"# A generic trajectory message that may either encode a joint- or cartesian-space trajectory, or both\n"
"# Trajectories encoded in this message are considered semantically equivalent\n"
"Header header\n"
"trajectory_msgs/JointTrajectory[] joint_trajectory\n"
"moveit_msgs/CartesianTrajectory[] cartesian_trajectory\n"
"\n"
"================================================================================\n"
"MSG: moveit_msgs/CartesianTrajectory\n"
"# This message describes the trajectory of a tracked frame in task-space\n"
"Header header\n"
"\n"
"# The name of the Cartesian frame being tracked with respect to the base frame provided in header.frame_id\n"
"string tracked_frame\n"
"\n"
"CartesianTrajectoryPoint[] points\n"
"\n"
"================================================================================\n"
"MSG: moveit_msgs/CartesianTrajectoryPoint\n"
"# The definition of a cartesian point in a trajectory. Defines the cartesian state of the point and it's time,\n"
"# following the pattern of the JointTrajectory message\n"
"CartesianPoint point\n"
"\n"
"duration time_from_start\n"
"\n"
"================================================================================\n"
"MSG: moveit_msgs/CartesianPoint\n"
"# This message defines a point in a cartesian trajectory\n"
"geometry_msgs/Pose pose\n"
"geometry_msgs/Twist velocity\n"
"geometry_msgs/Accel acceleration\n"
"================================================================================\n"
"MSG: geometry_msgs/Accel\n"
"# This expresses acceleration in free space broken into its linear and angular parts.\n"
"Vector3  linear\n"
"Vector3  angular\n"
;
  }

  static const char* value(const ::moveit_msgs::GetMotionPlanRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::GetMotionPlanRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.motion_plan_request);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetMotionPlanRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::GetMotionPlanRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::GetMotionPlanRequest_<ContainerAllocator>& v)
  {
    s << indent << "motion_plan_request: ";
    s << std::endl;
    Printer< ::moveit_msgs::MotionPlanRequest_<ContainerAllocator> >::stream(s, indent + "  ", v.motion_plan_request);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_GETMOTIONPLANREQUEST_H
