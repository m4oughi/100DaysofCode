#include <iostream>

int main() {
    int *const ptr = new int(110); // Pointer to dynamically allocated int
    const int *cPtr = ptr; // cPtr is a pointer to constant data
    // *cPtr = 120; // NOT allowed: modifying the value pointed by cPtr is not allowed

    delete ptr; // Free the allocated memory

    return 0;
}