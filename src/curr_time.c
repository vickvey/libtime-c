#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "../include/time-c.h"

int get_current_time(char *time_str_rfc2822, size_t size) {
    if (size < MIN_BUFFER_SIZE) {
        fprintf(stderr, "Error: Buffer size should be at least %d bytes.\n", MIN_BUFFER_SIZE);
        exit(EXIT_FAILURE);
        return 1; // FAILURE
    }

    time_t current_time;
    struct tm *local_time;

    if (time(&current_time) == -1) {
        fprintf(stderr, "Error: Failed to retrieve the current time.\n");
        return 1; // FAILURE
    }

    local_time = localtime(&current_time);
    if (local_time == NULL) {
        fprintf(stderr, "Error: Failed to convert the time to local time.\n");
        return 1; // FAILURE
    }

    size_t chars_written = strftime(time_str_rfc2822, size, "%a, %d %b %Y %H:%M:%S %z", local_time);
    if (chars_written == 0) {
        fprintf(stderr, "Error: Failed to format the time string. Ensure the buffer size is sufficient.\n");
        return 1; // FAILURE
    }

    // Optional: Remove the following line if you don't want to print the formatted time string
    // printf("RFC 2822 format: %s\n", time_str_rfc2822);
    return 0; // SUCCESS
}
