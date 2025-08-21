cmake_minimum_required(VERSION 3.30.0)
project(Lab LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Dirs
add_subdirectory(include)
add_subdirectory(src)

# Main Executable
add_executable(${PROJECT_NAME} "src/main.cpp")
target_link_libraries(${PROJECT_NAME} include)
target_link_libraries(${PROJECT_NAME} src)

# Test Executables
add_executable(test1 "tests/test1.cpp")
target_link_libraries(test1 include)
target_link_libraries(test1 src)

add_executable(test2 "tests/test2.cpp")
target_link_libraries(test2 include)
target_link_libraries(test2 src)

add_executable(test3 "tests/test3.cpp")
target_link_libraries(test3 include)
target_link_libraries(test3 src)
