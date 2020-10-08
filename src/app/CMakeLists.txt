project(QChicken LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

#find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets LinguistTools REQUIRED)
#find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets LinguistTools REQUIRED)

set(TS_FILES QChicken_pt_BR.ts)

add_executable(QChicken
            main.cpp
            qchickenmain.cpp
            qchickenmain.h
            qchickenmain.ui
            ${TS_FILES}
            )


target_link_libraries(QChicken PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
