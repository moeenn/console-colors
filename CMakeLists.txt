cmake_minimum_required(VERSION 3.0)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wextra -Wall -std=c++17")

project(Learning)

add_executable(
  sandbox
  src/main.cpp
  src/libs/colors/colors.cpp
)

set(EXECUTABLE_OUTPUT_PATH "bin")
