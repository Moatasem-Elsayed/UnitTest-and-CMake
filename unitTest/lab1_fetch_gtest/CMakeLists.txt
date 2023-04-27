cmake_minimum_required(VERSION 3.14)
project(my_project)
set(CMAKE_CXX_FLAGS "-g")

### it is not the best practise but good to know 


set(CMAKE_CXX_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

# unzip it and build it and generate static lib to link with it 
FetchContent_MakeAvailable(googletest)

#to enable ctest
enable_testing()
#set src files
set(SRC_FILE lab1_calc.cpp main.cpp)
set(SRC_TEST lab1_test.cpp)

add_executable(
    ${PROJECT_NAME}
    ${SRC_FILE}
    ${SRC_TEST}
)
## less /usr/share/cmake-3.22/Modules/FindGTest.cmake
target_link_libraries(
    ${PROJECT_NAME}
    GTest::gtest
    # GTest::gtest_main
)
#gtest_discover_tests to let ctest know which test executables in its database
include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})
