cmake_minimum_required(VERSION 3.25)

project(book-test LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(GTest REQUIRED)

add_executable(test test.cpp book.cpp)
target_link_libraries(test PRIVATE GTest::GTest GTest::Main pthread)
