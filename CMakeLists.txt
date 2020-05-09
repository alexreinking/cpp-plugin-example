cmake_minimum_required(VERSION 3.16)
project(Plugins)

enable_testing()

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(lib)
add_subdirectory(plugins)
add_subdirectory(app)

add_test(NAME test_load
         COMMAND main $<TARGET_FILE:english>)
set_tests_properties(test_load PROPERTIES
                     PASS_REGULAR_EXPRESSION "Hello, world!")
