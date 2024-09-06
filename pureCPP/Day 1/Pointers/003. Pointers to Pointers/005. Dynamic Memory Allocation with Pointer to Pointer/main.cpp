#include <iostream>

int main() {
    int* ptr = new int(10);  // Dynamically allocate an integer and initialize it to 10
    int** pptr = &ptr;  // Pointer to pointer pointing to 'ptr'

    // Accessing the dynamically allocated value using pointer to pointer
    int value = **pptr;  // Value is 10

    // Cleaning up dynamically allocated memory
    delete ptr;

}