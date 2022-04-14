cmake_minimum_required (VERSION 3.5)

set (project_name "console-colors")

project(${project_name})
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wextra -Wall -std=c++17")

set (source_dir "${PROJECT_SOURCE_DIR}/src")
set(EXECUTABLE_OUTPUT_PATH "bin")

add_executable(
  ${project_name}
  ${source_dir}/main.cpp
  ${source_dir}/libs/colors/colors.cpp
)
