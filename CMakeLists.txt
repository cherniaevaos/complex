cmake_minimum_required(VERSION 3.17)
project(untitled4)


enable_testing()
add_subdirectory(googletest)
include_directories(googletest/googletest/include)


add_executable(untitled4 main.cpp ${SOURCE_FILES} function.cpp Function.h)
add_executable(tests tests.cpp ${SOURCE_FILES} Function.cpp)
target_link_libraries(tests gtest)
