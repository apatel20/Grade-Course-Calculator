cmake_minimum_required(VERSION 3.5)
project(GRADE-CALC CXX)

# require a C++11 compiler
# use it for all targets
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# create the executable
add_executable(Project main.cpp courseGradeCalc.hpp courseGradeCalc.cpp)
