# Time API

A C library to get the current time in RFC 2822 format.

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/vickvey/time_api.git

2. Build the project:
   ```bash
   cd time_api
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
#include <curr_time.h>
```

2. Link the library:
When compiling your C project, link the curr_time library:
   
```bash
gcc your_program.c -o your_program -lcurr_time
```

## Example Usage

```c
#include <stdio.h>
#include <curr_time.h>

int main() {
    char buffer[100];
    get_current_time(buffer, sizeof(buffer));  // Assume this is the API function
    printf("Current time: %s\n", buffer);
    return 0;
}

```

compile it with:
```bash
gcc example.c -o example -lcurr_time
./example
```

## Uninstall the library
```bash
sudo rm /usr/local/lib/libcurr_time.a
sudo rm /usr/local/include/curr_time.h
```

