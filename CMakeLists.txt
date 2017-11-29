cmake_minimum_required(VERSION 2.6)
project(cppxbase)

# the version number
set(cppxbase_VERSION_MAJOR 0)
set(cppxbase_VERSION_MINOR 1)

# flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O2 -std=c++11")

configure_file(
    "${PROJECT_SOURCE_DIR}/include/cppxbase/version.h.in"
    "${PROJECT_BINARY_DIR}/include/cppxbase/version.h"
)

include_directories(
    "${PROJECT_BINARY_DIR}/include"
    "${PROJECT_SOURCE_DIR}/include"
)

# set bin output
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

add_subdirectory("test")