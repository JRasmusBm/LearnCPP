cmake_minimum_required(VERSION 3.6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON )

project(tut4)

add_executable(
  tut4
  src/main.cpp
)
