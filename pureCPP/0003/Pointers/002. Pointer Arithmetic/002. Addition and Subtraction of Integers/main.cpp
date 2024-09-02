#include <iostream>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr;  // Pointer to the first element of the array

    // Add an integer to a pointer
    ptr = ptr + 2;  // 'ptr' now points to arr[2] which is 3

    // Subtract an integer from a pointer
    ptr = ptr - 1;  // 'ptr' now points back to arr[1] which is 2

}