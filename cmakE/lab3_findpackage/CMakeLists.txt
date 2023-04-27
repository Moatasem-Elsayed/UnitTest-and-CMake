cmake_minimum_required(VERSION 3.22)
project(boost_example)

# Find Boost libraries
find_package(Boost COMPONENTS system filesystem REQUIRED)
# Add executable
add_executable(${PROJECT_NAME} boostlab.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE ${Boost_INCLUDE_DIR})

# Link Boost libraries
target_link_libraries(${PROJECT_NAME} 
    Boost::system 
    Boost::filesystem
)