cmake_minimum_required(VERSION 3.26)

project(algorithms)

find_package(GTest CONFIG REQUIRED)

add_subdirectory(sorting)
add_subdirectory(searching)

enable_testing()
add_test(NAME sorting COMMAND sorting)
add_test(NAME searching COMMAND searching)