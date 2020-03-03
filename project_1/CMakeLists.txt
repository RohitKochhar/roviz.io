cmake_minimum_required(VERSION 3.10)

# Set the project name
project(project_1)

# Find the packages
find_package( OpenCV REQUIRED )

# Specify C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# Add the executable
add_executable(${PROJECT_NAME}.out ./src/main_driver.cpp)

# Link libraries
target_link_libraries( ${PROJECT_NAME}.out ${OpenCV_LIBS} )
