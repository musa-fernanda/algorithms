cmake_minimum_required(VERSION 3.26)

project(searching)

file(REAL_PATH "${CMAKE_SOURCE_DIR}/main.cpp" MAIN_FILE)
file(GLOB HEADER_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.hpp")
file(GLOB SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/test/*.cpp")

add_executable(${PROJECT_NAME} ${MAIN_FILE} ${SOURCE_FILES} ${HEADER_FILES})

target_link_libraries(${PROJECT_NAME} GTest::gtest)