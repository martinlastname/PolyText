cmake_minimum_required(VERSION 3.9)
project(PolyText)

set(CMAKE_CXX_STANDARD 17)

add_executable(PolyText main.cpp Node.h Node.cpp Graph.cpp Graph.h)