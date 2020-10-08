project(QChickenAPI)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_library(QChickenAPI SHARED
        Contabilidade.cpp
        Contabilidade.h
        )


add_executable (UnTests unit_tests/testcontabilidade.cpp unit_tests/testcontabilidade.h)
target_link_libraries(UnTests PRIVATE Qt::Test)

enable_testing()
include(CTest)

set(CTEST_PROJECT_NAME "QChicken")
set(CTEST_NIGHTLY_START_TIME "01:00:00 UTC")

set(CTEST_DROP_METHOD "http")
set(CTEST_DROP_SITE "my.cdash.org")
set(CTEST_DROP_LOCATION "/submit.php?project=QChicken")
set(CTEST_DROP_SITE_CDASH TRUE)

add_test(NAME UnTests COMMAND utest)
