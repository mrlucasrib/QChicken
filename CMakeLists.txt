cmake_minimum_required(VERSION 3.5)

project(QChicken LANGUAGES CXX)

#set(CMAKE_PREFIX_PATH "/home/user/Qt/5.15.1/gcc_64")

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# QtCreator supports the following variables for Android, which are identical to qmake Android variables.
# Check http://doc.qt.io/qt-5/deployment-android.html for more information.
# They need to be set before the find_package(Qt5 ...) call.

#if(ANDROID)
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
#    if (ANDROID_ABI STREQUAL "armeabi-v7a")
#        set(ANDROID_EXTRA_LIBS
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libcrypto.so
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libssl.so)
#    endif()
#endif()

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets LinguistTools REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets LinguistTools REQUIRED)

set(TS_FILES src/app/QChicken_pt_BR.ts src/api/Contabilidade.cpp src/api/Contabilidade.h)

if (ANDROID)
    add_library(QChicken SHARED
            src/app/main.cpp
            src/app/qchickenmain.cpp
            src/app/qchickenmain.h
            src/app/qchickenmain.ui
            ${TS_FILES}
            )
else ()
    add_executable(QChicken
            src/app/main.cpp
            src/app/qchickenmain.cpp
            src/app/qchickenmain.h
            src/app/qchickenmain.ui
            ${TS_FILES}
            )
    add_library(QChickenAPI SHARED
            src/api/Contabilidade.cpp
            src/api/Contabilidade.h
            )
endif ()

target_link_libraries(QChicken PRIVATE Qt${QT_VERSION_MAJOR}::Widgets
        QChickenAPI)
qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
