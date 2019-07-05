cmake_minimum_required(VERSION 3.13)  # CMake version check
project(SNAKE)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 11)            # Enable c++11 standard

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES main.cpp Clases/BackScreen.cpp BackScreen_ut.cpp)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(SNAKE ${SOURCE_FILES})

include_directories(Clases)
target_include_directories(SNAKE PUBLIC Clases)