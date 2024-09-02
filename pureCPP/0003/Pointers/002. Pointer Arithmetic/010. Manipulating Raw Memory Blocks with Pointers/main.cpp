#include <iostream>
#include <cstdlib>  // For malloc and free
#include <cstring>  // For memset

int main() {
    // Allocating raw memory for 10 integers
    int* rawMemory = static_cast<int*>(std::malloc(10 * sizeof(int)));

    // Initializing raw memory with pointer arithmetic
    for (int i = 0; i < 10; ++i) {
        *(rawMemory + i) = i * i;  // Assign square values
    }

    // Accessing and using raw memory
    for (int i = 0; i < 10; ++i) {
        int value = *(rawMemory + i);  // Access each value
        // Do something with value
    }

    // Free the allocated memory
    std::free(rawMemory);

}