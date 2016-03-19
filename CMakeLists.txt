cmake_minimum_required(VERSION 3.4)
project(Squess)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp GameManager/GameManager.h GameManager/GameManager.cpp InputManager/InputManager.cpp InputManager/InputManager.h)
add_executable(Squess ${SOURCE_FILES})