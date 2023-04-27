cmake_minimum_required(VERSION 2.22)

project(calc)
set(SRC_FILES calc.cpp)
message("hello from the lib : srcfiles is -> ${SRC_FILES} and the lib is -> lib${PROJECT_NAME}.a" )

add_library(${PROJECT_NAME} ${SRC_FILES} )