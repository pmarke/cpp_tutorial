cmake_minimum_required(VERSION 3.7.2)
project(hello_world)

set(CMAKE_CXX_STANDARD 11)

add_executable(${PROJECT_NAME}.exc src/main.cpp)