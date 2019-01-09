cmake_minimum_required(VERSION 2.8)

project(test)

set(SOURCES
    main.cpp
)

include_directories(
    ../external/googletest/googletest/include
    ../external/googletest/googlemock/include
)

add_executable(test ${SOURCES})

target_link_libraries(test gtest)

