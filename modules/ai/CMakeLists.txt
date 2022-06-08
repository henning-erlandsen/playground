cmake_minimum_required(VERSION 3.0)

project(ai)

set(SOURCES
    main.cpp
)

add_executable(ai ${SOURCES})

target_link_libraries(ai gtest)

