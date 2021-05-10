cmake_minimum_required(VERSION 3.1.3)
project(fetch_april20_moveit_config)

find_package(catkin REQUIRED)

catkin_package()

install(PROGRAMS scripts/demo.py DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})

install(DIRECTORY launch DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
  PATTERN "setup_assistant.launch" EXCLUDE)
install(DIRECTORY maps config DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})
