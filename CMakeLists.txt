project(ControlDynamics)
cmake_minimum_required(VERSION 3.25)

set(CMAKE_CXX_STANDARD 14)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/bin)
include_directories(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/libs/eigen-3.4.0)

add_subdirectory(include)
add_subdirectory(src)
add_subdirectory(test)