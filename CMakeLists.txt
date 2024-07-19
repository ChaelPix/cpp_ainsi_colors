cmake_minimum_required(VERSION 3.10)
project(cpp_ansi_colors)

set(CMAKE_CXX_STANDARD 17)

add_executable(example example.cpp)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

