# motion-planning-Fetch
Testing planning algorithms for Fetch Navigation and Manipulation on ROS and Gazebo Simulation using the MoveIt! motion planning package and RViz


INSTRUCTIONS ON HOW TO RUN FETCH MANIPULATION AND NAVIGATION IN GAZEBO

[*Note: See Research Project documentation for more information]

1. DO FETCH MANIPULATION MOTION-PLANNING

-Run the following in terminal,

cd ws_moveit
catkin_make
source devel/setup.bash
roslaunch fetch_april20_moveit_config demo_gazebo.launch

-RViz and Gazebo will pull up. You can now plan different poses for the Fetch arm (try start: start and goal:pose1). Click on 'plan' in RViz to visualise the motion. Click on 'plan and execute' to execute it in the Gazebo Simulation.


2. DO FETCH NAVIGATION

-Run the following in terminal 1,

cd ws_moveit
catkin_make
source devel/setup.bash
roslaunch fetch_gazebo playground.launch

-In a separate terminal 2, run

roslaunch fetch_gazebo_demo fetch_nav.launch

-In a separate terminal 3, run

cd src/fetch_ros/fetch_navigation && rviz -d config/navigation.rviz
