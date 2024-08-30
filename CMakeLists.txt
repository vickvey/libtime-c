cmake_minimum_required(VERSION 3.10)
project(time_api C)

# Add include directory
include_directories(include)

# Add source files
add_library(curr_time STATIC src/curr_time.c)

# Add library target
set_target_properties(curr_time PROPERTIES OUTPUT_NAME "curr_time")

# Include subdirectories
add_subdirectory(tests)