# cmake_minimum_required(VERSION <specify CMake version here>)
project(PolyText)

set(CMAKE_CXX_STANDARD 17)

add_executable(PolyText main.cpp Node.cpp Node.h Tag.cpp Tag.h Director.cpp Director.h Graph.cpp Graph.h)