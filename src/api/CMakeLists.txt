project(QChickenAPI)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_library(QChickenAPI SHARED
        Contabilidade.cpp
        Contabilidade.h
        )


add_executable (UnTests unit_tests/testcontabilidade.cpp unit_tests/testcontabilidade.h)
target_link_libraries(UnTests PRIVATE Qt::Test)

enable_testing()
add_test(NAME UnTests COMMAND utest)
