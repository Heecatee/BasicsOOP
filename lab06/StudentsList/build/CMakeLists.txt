cmake_minimum_required(VERSION 2.6)
project (students)

SET(SOURCES ../main.cpp)

include_directories(include)
 
add_executable(students ${SOURCES})
set_target_properties(students PROPERTIES COMPILE_DEFINITIONS MAPCALC Wall g)