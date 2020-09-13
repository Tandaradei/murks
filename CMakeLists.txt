cmake_minimum_required(VERSION 3.10)
project(murks)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/out/build)
 
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/libs)
 
add_subdirectory(Core)
add_subdirectory(Editor)