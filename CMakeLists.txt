cmake_minimum_required(VERSION 3.17)
project(JumpGame)

set(CMAKE_CXX_STANDARD 14)

add_executable(JumpGame main.cpp nums.cpp nums.h)

target_compile_options(JumpGame PRIVATE -Wall -Werror)