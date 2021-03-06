cmake_minimum_required(VERSION 3.5)
project(gui CXX)

# try to prevent accidental in-source builds, these cause lots of problems
if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
  message(FATAL_ERROR "In-source builds not allowed. Remove any files created thus far and use a different directory for the build.")
endif()

# require a C++11 compiler for all targets
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# configure Qt
find_package(Qt5 COMPONENTS Widgets Test REQUIRED)
if (Qt5Widgets_FOUND AND Qt5Test_FOUND)
  set(CMAKE_AUTOMOC ON)
  set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

# build the program
add_executable(gui course_widget_main.cpp course_widget.hpp course_widget.cpp courseGradeCalc.hpp courseGradeCalc.cpp)
target_link_libraries(gui Qt5::Widgets Qt5::Test)
