cmake_minimum_required(VERSION 3.10)
project(Editor)

set (PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set (PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

set(PROJECT_SRCS 
	${PROJECT_SOURCE_DIR}/Editor.cpp
)

include_directories("${PROJECT_BINARY_DIR}")
include_directories("${PROJECT_INCLUDE_DIR}")

set (CORE_INCLUDE_DIR ../Core)

include_directories(${CORE_INCLUDE_DIR})

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

link_libraries(Runtime)


add_executable(${PROJECT_NAME} ${PROJECT_SRCS})