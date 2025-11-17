# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_dca1000_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED dca1000_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(dca1000_FOUND FALSE)
  elseif(NOT dca1000_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(dca1000_FOUND FALSE)
  endif()
  return()
endif()
set(_dca1000_CONFIG_INCLUDED TRUE)

# output package information
if(NOT dca1000_FIND_QUIETLY)
  message(STATUS "Found dca1000: 0.0.0 (${dca1000_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'dca1000' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${dca1000_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(dca1000_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${dca1000_DIR}/${_extra}")
endforeach()
