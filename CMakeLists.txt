cmake_minimum_required(VERSION 3.14)
project(oop1)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
  DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)

FetchContent_MakeAvailable(googletest)

add_executable(oop1_main sour/main.cpp sour/func.cpp)
target_include_directories(oop1_main PRIVATE head)

add_executable(oop1_test test/tetsts.cpp sour/func.cpp)
target_include_directories(oop1_test PRIVATE head)
target_link_libraries(oop1_test gtest gtest_main)

include(GoogleTest)
gtest_discover_tests(oop1_test)