# Add include directory for tests
include_directories(${CMAKE_SOURCE_DIR}/include)

# Add test executable
add_executable(test_curr_time test1.c)

# Link the 'time-c' library to the test executable
target_link_libraries(test_curr_time time-c)

# Optionally add test to CTest
enable_testing()
add_test(NAME test_curr_time COMMAND test_curr_time)
