cmake_minimum_required(VERSION 3.14)
project(my_project)
set(CMAKE_CXX_FLAGS "-g")

# set(CMAKE_PREFIX_PATH "/home/moatsem/c++/unitTest/googletest/build/lib")
set(CMAKE_CXX_STANDARD 11)
find_package(GTest REQUIRED) # /usr/share/cmake-3.16/Modules/ --->GTestConfig.cmake




enable_testing()
#set src files
set(SRC_FILE lab11_calc.cpp )
set(SRC_TEST lab11_test.cpp)

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

# Enable coverage
set(CMAKE_CXX_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
# Add coverage target
add_custom_target(coverage
    COMMAND ${CMAKE_COMMAND} -E env CTEST_OUTPUT_ON_FAILURE=1
        gcovr -r ${CMAKE_SOURCE_DIR} --html --html-details -o coverage.html
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Generating coverage report"
    VERBATIM
)


