cmake_minimum_required(VERSION 3.10)
project(TodoListApp)

# Set C++20 standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(include)

# Add executable
add_executable(TodoListApp 
    src/main.cpp
    src/Task.cpp
    src/TodoList.cpp
    src/UserInterface.cpp
)