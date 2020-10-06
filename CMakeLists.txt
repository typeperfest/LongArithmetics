cmake_minimum_required(VERSION 3.4)

set(CMAKE_CXX_STANDARD_REQUIRED 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(infinity_number)

add_library(infinity_number STATIC ${CMAKE_CURRENT_SOURCE_DIR}/sources)
target_include_directories(infinity_number ${CMAKE_CURRENT_SOURCE_DIR}/include)
