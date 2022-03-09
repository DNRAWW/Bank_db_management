cmake_minimum_required(VERSION 3.10)

project(bank_db_managment)

set(EXECUTABLE_OUTPUT_PATH ../bin)

include_directories(includes)

file(GLOB SOURCES src/*/*.cpp)

set(QT_INCLUDES "/usr/include/x86_64-linux-gnu/qt5")

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(bank_db_managment ${SOURCES})

target_link_libraries(bank_db_managment Qt5::Widgets)