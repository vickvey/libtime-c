# libtime-c

A C library to get the current time in RFC 2822 format.

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/vickvey/libtime-c.git

2. Build the project:
   ```bash
   cd libtime-c/
   mkdir build
   cd build
   cmake ..
   make
   sudo make install

This will install the library in `/usr/local/lib` and the header files in `/usr/local/include`.

## Usage 

1. Include the header:
In your C source file, include the header:
```c
#include <time-c.h>
```

2. Link the library:
When compiling your C project, link the curr_time library:
   
```bash
gcc your_program.c -o your_program -ltime-c
```

## Example Usage

```c
#include <stdio.h>
#include <time-c.h>

int main() {
    char buffer[100];
    get_current_time(buffer, sizeof(buffer));  // Assume this is the API function
    printf("Current time: %s\n", buffer);
    return 0;
}

```

compile it with:
```bash
gcc example.c -o example -ltime-c
./example
```

## Uninstall the library
```bash
sudo rm /usr/local/lib/libtime-c.a
sudo rm /usr/local/include/time-c.h
```

