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

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Brightness.msg"
  "msg/BallOutput.msg"
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
