cmake_minimum_required(VERSION 2.8)

project(cached-value)

set(SOURCES
    main.cpp
    test/cached-value-test.cpp
)

include_directories(
    ../external/googletest/googletest/include
    ../external/googletest/googlemock/include
)

add_executable(cached-value ${SOURCES})

target_link_libraries(cached-value gtest)

