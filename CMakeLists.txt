cmake_minimum_required(VERSION 3.2)
project(Lab2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Lab2 ${SOURCE_FILES} MaxFunction.h MaxFunction.cpp MinFunction.h MinFunction.cpp Grade.h Grade.cpp)