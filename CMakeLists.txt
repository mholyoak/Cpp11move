cmake_minimum_required(VERSION 3.6)
project(Cpp11Move)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp InstanceLogger.cpp InstanceLogger.h InstanceContainer.cpp InstanceContainer.h)
add_executable(Cpp11Move ${SOURCE_FILES})