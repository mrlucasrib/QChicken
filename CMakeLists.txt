cmake_minimum_required(VERSION 3.13.4)

project(QChickenMain)

##set(CMAKE_PREFIX_PATH   /home/user/Qt/5.15.1/gcc_64)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 -fprofile-arcs -ftest-coverage")
#set(CMAKE_CXX_OUTPUT_EXTENSION_REPLACE 1)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets LinguistTools Test REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets LinguistTools Test REQUIRED)



add_subdirectory(src/api)
add_subdirectory(src/app)


target_link_libraries(QChicken PUBLIC QChickenAPI)
