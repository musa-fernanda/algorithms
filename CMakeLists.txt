cmake_minimum_required(VERSION 3.26)

project(algorithms)

find_package(GTest CONFIG REQUIRED)

add_subdirectory(sorting)

enable_testing()
add_test(NAME sorting COMMAND sorting)