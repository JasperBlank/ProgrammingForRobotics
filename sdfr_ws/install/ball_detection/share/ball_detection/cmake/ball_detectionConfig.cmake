# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_ball_detection_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED ball_detection_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(ball_detection_FOUND FALSE)
  elseif(NOT ball_detection_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(ball_detection_FOUND FALSE)
  endif()
  return()
endif()
set(_ball_detection_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ball_detection_FIND_QUIETLY)
  message(STATUS "Found ball_detection: 0.0.0 (${ball_detection_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ball_detection' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${ball_detection_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ball_detection_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${ball_detection_DIR}/${_extra}")
endforeach()
