cmake_minimum_required(VERSION 3.8)
project(radar_simulator)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Generate interfaces from msg files
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/RadarObject.msg"
)

# Package
ament_package()
