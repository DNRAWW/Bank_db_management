cmake_minimum_required(VERSION 3.10)

project(bank_db_managment)

set(EXECUTABLE_OUTPUT_PATH ../bin)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

include_directories(includes)

file(GLOB SOURCES src/*/*.cpp)

set(QT_INCLUDES "/usr/include/x86_64-linux-gnu/qt5")

set( QOBJECT_HEADERS includes/forms/mainWindow.h)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

QT5_WRAP_CPP(hdr_moc ${QOBJECT_HEADERS})

add_executable(bank_db_managment ${SOURCES} ${hdr_moc})

target_link_libraries(bank_db_managment Qt5::Widgets)