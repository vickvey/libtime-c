#include <stdio.h>
#include "curr_time.h"

int main() {
    char time[50];

    // Call the function to get the current time in RFC 2822 format
    int result = get_current_time(time, sizeof(time));
    
    if (result == 0) {
        printf("Current Time is: %s\n", time);
    } else {
        // Print a more descriptive error message
        fprintf(stderr, "Error: Failed to get current time. Ensure the buffer size is sufficient.\n");
    }

    return 0;
}
