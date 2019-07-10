cmake_minimum_required(VERSION 3.12)
project(LinearAlgebraCurse)

set(BOOST_REQUIRED_COMPONENTS
        system
        thread
        regex
        coroutine
        context
        filesystem
        date_time
        unit_test_framework
        )
find_package(Boost "1.54.0" REQUIRED ${BOOST_REQUIRED_COMPONENTS})
include_directories(SYSTEM ${Boost_INCLUDE_DIRS})
link_directories(${Boost_LIBRARY_DIRS})

set(CMAKE_CXX_STANDARD 14)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "src/*")

add_executable(LinearAlgebraCurse ${SOURCES} src/line.cpp src/line.hpp src/utilities/linear_algebra.cpp src/utilities/linear_algebra.hpp src/plane.cpp src/plane.hpp src/tests/line_tests.cpp src/tests/line_tests.h src/linear_system.cpp src/linear_system.hpp src/tests/plane_tests.cpp src/tests/plane_tests.h src/tests/linear_system_test.cpp src/tests/linear_system_test.h)

target_link_libraries(LinearAlgebraCurse ${Boost_LIBRARIES})