cmake_minimum_required(VERSION 3.14)
project(my_project)
set(CMAKE_CXX_FLAGS "-g")

# set(CMAKE_PREFIX_PATH "/home/moatsem/c++/unitTest/googletest/build/lib")
set(CMAKE_CXX_STANDARD 14)
find_package(GTest REQUIRED) # /usr/share/cmake-3.16/Modules/ --->GTestConfig.cmake

# print_all_variables()
message("gtest is ${GTest_FOUND}")
message("GTEST_LIBRARIES is ${GTEST_LIBRARIES}")
message("GTEST_MAIN_LIBRARIES is ${GTEST_MAIN_LIBRARIES}")
message("GTEST_BOTH_LIBRARIES is ${GTEST_BOTH_LIBRARIES}")

enable_testing()
#set src files
set(SRC_FILE lab2_calc.cpp )
set(SRC_TEST lab2_test.cpp)

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
# == 
# add_test(HELLO_TEST ${PROJECT_NAME}
# COMMAND ${PROJECT_NAME}
# WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
# )
