# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_swift_pico_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED swift_pico_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(swift_pico_FOUND FALSE)
  elseif(NOT swift_pico_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(swift_pico_FOUND FALSE)
  endif()
  return()
endif()
set(_swift_pico_CONFIG_INCLUDED TRUE)

# output package information
if(NOT swift_pico_FIND_QUIETLY)
  message(STATUS "Found swift_pico: 1.0.0 (${swift_pico_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'swift_pico' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${swift_pico_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(swift_pico_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${swift_pico_DIR}/${_extra}")
endforeach()
