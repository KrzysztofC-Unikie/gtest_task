cmake_minimum_required(VERSION 3.14)
project (gtest_task)

set(CMAKE_CXX_STANDARD 11)

find_package(GTest REQUIRED)
include_directories(
  ${GTEST_INCLUDE_DIRS}
  inc
  src
  )

set(TEST_SOURCES
  test.cpp
  src/algorithm.cpp
  )

set(SOURCES
  main.cpp
  src/algorithm.cpp
  )

add_executable(run_main_program  ${SOURCES})
add_executable(run_google_test  ${TEST_SOURCES})
target_link_libraries(run_google_test
  ${GTEST_LIBRARIES}
  pthread
  )
