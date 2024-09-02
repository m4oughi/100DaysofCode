#include <iostream>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr;  // Pointer to the first element of 'arr'
    int* end = ptr + 5;  // Pointer to one past the last element of 'arr'
    for (; ptr < end; ++ptr) {
        // Iterates through the array using pointer arithmetic
        int value = *ptr;  // Dereferences 'ptr' to access the current element
    }

}