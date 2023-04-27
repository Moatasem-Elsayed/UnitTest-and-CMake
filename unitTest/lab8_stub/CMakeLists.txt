cmake_minimum_required(VERSION 3.14)
project(my_project)
set(CMAKE_CXX_FLAGS "-g")

set(CMAKE_CXX_STANDARD 11)
find_package(GTest REQUIRED) 

enable_testing()
#set src files
set(SRC_FILE service.cpp)
set(SRC_STUB test/serviceimpl_stub.cpp)
set(SRC_TEST lab8_test.cpp)

add_executable(
    ${PROJECT_NAME}
    ${SRC_FILE}
    ${SRC_STUB}
    ${SRC_TEST}
)
target_include_directories(${PROJECT_NAME} PUBLIC test)
target_link_libraries(
    ${PROJECT_NAME}
    GTest::gtest
    GTest::gmock_main
)
#gtest_discover_tests to let ctest know which test executables in its database
include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})
