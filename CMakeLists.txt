cmake_minimum_required(VERSION 3.10)
project(cpp_exercises)

set(CMAKE_CXX_STANDARD 20)

# source files
set(SOURCES 
    src/main.cpp
    src/number_systems.cpp
    src/variable_types.cpp
)

add_executable(app ${SOURCES})
