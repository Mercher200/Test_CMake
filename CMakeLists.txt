cmake_minimum_required(VERSION 3.10)
project(Test_CMake)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(first_lib)
add_subdirectory(second_lib)

add_executable(Math main.cpp)

target_link_libraries(Math ${CMAKE_SOURCE_DIR}/first_lib/sum_lib.lib ${CMAKE_SOURCE_DIR}/second_lib/mul_lib.lib)
