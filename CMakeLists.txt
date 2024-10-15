cmake_minimum_required(VERSION 3.10)
project(cpp_exercises)

set(CMAKE_CXX_STANDARD 20)

# source files
set(SOURCES 
    src/main.cpp
    src/number_systems.cpp
    src/variable_types.cpp
    src/OOP/classes.cpp
    src/OOP/abstraction/circle.cpp
    src/OOP/inheritance/cars.cpp
    src/OOP/inheritance/ships.cpp
    src/OOP/inheritance/vehicle.cpp
    src/OOP/polymorphism/polymorphism.cpp
)

add_executable(app ${SOURCES})
