cmake_minimum_required(VERSION 3.10)

project(bank_db_managment)

set(EXECUTABLE_OUTPUT_PATH ../bin)

include_directories(include)

file(GLOB SOURCES src/*/*.cpp)

add_executable(bank_db_managment ${SOURCES})