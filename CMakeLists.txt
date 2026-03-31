cmake_minimum_required(VERSION 3.10)
project(MemoryManager)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add executable target
# The OJ expects an executable named "code"
add_executable(code main.cpp)

# Include the header file directory
target_include_directories(code PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
