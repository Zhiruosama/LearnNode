cmake_minimum_required(VERSION 3.25)

project(test)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${PROJECT_SOURCE_DIR}/include)
aux_source_directory(${PROJECT_SOURCE_DIR}/src srclists)

add_executable(test ${srclists}
        src/main.cpp
        include/test.h)