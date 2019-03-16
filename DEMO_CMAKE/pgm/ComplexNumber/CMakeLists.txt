cmake_minimum_required(VERSION 3.11)
project (ComplexNumber)

set (CMAKE_C_FLAGS "-Wall -g")
include_directories(include)

file(GLOB SOURCES "*.cpp")
set(CMAKE_BUILD_TYPE Debug)
include_directories("/usr/local/include")

add_executable(ComplexNumber ${SOURCES})
