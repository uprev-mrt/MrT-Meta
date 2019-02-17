cmake_minimum_required(VERSION 2.6)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
enable_testing()


#include_directories("../Utilities/Fifo")

file(GLOB_RECURSE TEST_FILES "${CMAKE_CURRENT_SOURCE_DIR}/../*Test.cpp")

# Link runTests with what we want to test and the GTest and pthread library
add_definitions(-DUNIT_TESTING_ENABLED)
add_executable(runTests Tester.cpp ${TEST_FILES})
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
