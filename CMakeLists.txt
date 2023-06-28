cmake_minimum_required(VERSION 3.24)
project(
        Calculator
        VERSION 1.0
        DESCRIPTION "A calculator that can be used to calculate the cost of a balcony"
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXE_LINKER_FLAGS "-static")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")
set(PostgreSQL_ADDITIONAL_VERSIONS "15")
add_subdirectory(libs/libpqxx build-pqxx)

add_subdirectory(src/calculator)
add_subdirectory(src/common)
add_subdirectory(src/utils)
add_subdirectory(src/database)

add_subdirectory(apps/simple)
add_subdirectory(apps/miscellaneous)

