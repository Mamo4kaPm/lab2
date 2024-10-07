cmake_minimum_required(VERSION 3.14)
project(lab2)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

FetchContent_Declare(
    gtest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.2  
)

FetchContent_MakeAvailable(gtest)
set(SOURCE_FILES main.cpp )


add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} gtest gtest_main)

enable_testing()
add_test(NAME SecondDerivativeTest COMMAND ${PROJECT_NAME})