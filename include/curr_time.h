#include <stdio.h>
#include <stddef.h> // For size_t

#ifndef VICKVEY_TIME_API_CURR_TIME_H_
#define VICKVEY_TIME_API_CURR_TIME_H_

#define MIN_BUFFER_SIZE 32

/**
 * @brief Get the current time in RFC 2822 format
 *
 * This function retrieves the current system time and formats it according to
 * RFC 2822 specifications. The formatted time string is written to the provided buffer.
 *
 * @param time_str_rfc2822 Pointer to a character buffer where the formatted time string will be stored
 * @param size Size of the provided buffer. Must be at least 32 bytes to accommodate the full RFC 2822 format
 *
 * @return 0 on success, 1 on failure
 *
 * @note The function will print error messages to stderr in case of failures
 * @note The minimum buffer size is defined by MIN_BUFFER_SIZE (32 bytes)
 *
 * Example usage:
 *     char time_buffer[32];
 *     if (get_current_time(time_buffer, sizeof(time_buffer)) == 0) {
 *         printf("Current time: %s\n", time_buffer);
 *     } else {
 *         printf("Failed to get current time\n");
 *     }
 */
int get_current_time(char *time_str_rfc2822, size_t size);

#endif // VICKVEY_TIME_API_CURR_TIME_H_
