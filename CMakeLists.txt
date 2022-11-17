cmake_minimum_required(VERSION 3.23)
project(Project_Folder)

set(CMAKE_CXX_STANDARD 20)

add_executable(Project_Folder Driver.cpp Point.cpp Point.h Shape.cpp Shape.h Movable.cpp Movable.h Circle.cpp Circle.h Square.cpp Square.h Rectangle.cpp Rectangle.h)