cmake_minimum_required(VERSION 3.15)
project(boost_test CXX)

add_executable(boost_test src/boost_test.cpp src/main.cpp)
target_include_directories(boost_test PUBLIC include)

install(TARGETS boost_test)
