cmake_minimum_required(VERSION 3.8)

#############################################################################
# Metadata
#############################################################################
# Read the package manifest.
file(READ "${CMAKE_CURRENT_SOURCE_DIR}/package.xml" package_xml_str)
# Extract project name.
if(NOT package_xml_str MATCHES "<name>([A-Za-z0-9_]+)</name>")
	message(FATAL_ERROR "Could not parse project name from package manifest
	(aborting)")
else()
	set(extracted_name ${CMAKE_MATCH_1})
endif()
# Extract project version.
if(NOT package_xml_str MATCHES "<version>([0-9]+.[0-9]+.[0-9]+)</version>")
	message(FATAL_ERROR "Could not parse project version from package manifest
	(aborting)")
else()
	set(extracted_version ${CMAKE_MATCH_1})
endif()
#############################################################################
# CMake project
#############################################################################

project(${extracted_name} VERSION ${extracted_version})

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(example_interfaces REQUIRED)
find_package(image_functions_sdfr REQUIRED)
find_package(robot_image_messages REQUIRED) # added
include_directories(include)

add_executable(brightness_detection src/brightness_detection.cpp)
ament_target_dependencies(brightness_detection rclcpp sensor_msgs example_interfaces image_functions_sdfr)

# new node 
add_executable(brightness_detection_message src/brightness_detection_message.cpp)
ament_target_dependencies(brightness_detection_message rclcpp sensor_msgs image_functions_sdfr robot_image_messages)

# Install targets
install(
  TARGETS 
    brightness_detection
    brightness_detection_message
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
