cmake_minimum_required(VERSION 3.10)
project(VerketteteListen)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(VerketteteListen src/main.cpp src/Element.cpp src/Liste.cpp)

target_include_directories(VerketteteListen PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)