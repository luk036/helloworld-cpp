cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project(
  helloworld-cpp
  VERSION 0.1.0
  LANGUAGES CXX
)

if(PROJECT_SOURCE_DIR STREQUAL PROJECT_BINARY_DIR)
  message(FATAL_ERROR "In-source builds not allowed.")
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(foo STATIC src/foo.cpp)
target_include_directories(foo PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(helloworld src/main.cpp)
target_link_libraries(helloworld PRIVATE foo)

enable_testing()
add_test(NAME helloworld COMMAND helloworld)
