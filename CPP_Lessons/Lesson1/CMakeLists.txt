cmake_minimum_required(VERSION 3.14)
project(lesson1_helloworld)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(lesson1_helloworld hello.cpp merge_sort.cpp binary_search.cpp)

enable_testing()

add_executable(
  hello_test
  hello_test.cc
)
target_link_libraries(
  hello_test
  GTest::gtest_main
)

add_executable(
  quick_sort_test
  quick_sort.cpp 
  quick_sort_test.cpp
)
target_link_libraries(
  quick_sort_test
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(hello_test)
gtest_discover_tests(quick_sort_test)


include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
