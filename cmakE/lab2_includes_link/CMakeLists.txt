cmake_minimum_required(VERSION 2.22)

project(Sum)

set(SRC_FILES displaySum.cpp)
add_executable(${PROJECT_NAME} ${SRC_FILES} )
add_executable(error ${SRC_FILES} )
#link with library 
add_subdirectory(lib)
target_link_libraries(${PROJECT_NAME} calc)
target_link_libraries(error calc)

#add includes
target_include_directories(${PROJECT_NAME} PUBLIC lib)
# include_directories(lib)
target_include_directories(error PUBLIC lib)