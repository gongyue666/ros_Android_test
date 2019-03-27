cmake_minimum_required(VERSION 2.8.3)
project(docking)
set(CMAKE_CXX_FLAGS "-std=c++11")
find_package(
	catkin REQUIRED COMPONENTS
	roscpp
	)

catkin_package(
    CATKIN_DEPENDS
        roscpp
)
include_directories(
	include
	${catkin_INCLUDE_DIRS}
	${Boost_LIBRARIES}
	)
add_executable(docking_node src/node.cpp)
target_link_libraries(docking_node  ${catkin_LIBRARIES})

install(TARGETS docking_node
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

