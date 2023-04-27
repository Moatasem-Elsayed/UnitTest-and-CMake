cmake_minimum_required(VERSION 3.14)
project(my_project)
set(CMAKE_CXX_FLAGS "-g")

set(CMAKE_CXX_STANDARD 11)
find_package(GTest REQUIRED) 

enable_testing()
#set src files
set(SRC_FILE lab5_calc.cpp )
set(SRC_TEST lab5_test.cpp)

add_executable(
    ${PROJECT_NAME}
    ${SRC_FILE}
    ${SRC_TEST}
)
## less /usr/share/cmake-3.22/Modules/FindGTest.cmake
target_link_libraries(
    ${PROJECT_NAME}
    GTest::gtest
    GTest::gmock_main
)
#gtest_discover_tests to let ctest know which test executables in its database
include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})

