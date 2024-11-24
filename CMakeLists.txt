cmake_minimum_required(VERSION 3.2)

set(CMAKE_CXX_STANDARD 20)

project(thread-pool)

set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3 -mavx2 -std=c++20 -march=native")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fsanitize=address,leak,undefined -Wall -Wextra -Wpedantic -g -O0 -std=c++20")

include_directories(include/)

add_executable(a.out main.cpp)