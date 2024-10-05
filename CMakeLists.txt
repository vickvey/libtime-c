cmake_minimum_required(VERSION 3.10)
project(libtime-c C)

# Add include directory
include_directories(include)

# Add source files
add_library(time-c STATIC src/curr_time.c)

# Set the output name of the library to 'time-c'
set_target_properties(time-c PROPERTIES OUTPUT_NAME "time-c")

# Specify where to install the library and header files
install(TARGETS time-c
        ARCHIVE DESTINATION lib)  # For static libraries

install(DIRECTORY include/ DESTINATION include)  # Install header files

# Include subdirectories (e.g., for tests)
add_subdirectory(tests)
