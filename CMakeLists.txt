cmake_minimum_required(VERSION 3.10)
project(Test_CMake)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(first_lib)
add_subdirectory(second_lib)

add_executable(Math main.cpp)

target_include_directories(Math PUBLIC sum_lib mul_lib)

target_link_libraries(Math sum_lib mul_lib)