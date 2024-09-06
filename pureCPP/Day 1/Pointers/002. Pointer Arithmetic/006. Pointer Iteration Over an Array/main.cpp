#include <iostream>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* start = arr;  // Pointer to the first element of the array
    int* end = arr + 5;  // Pointer to one past the last element of the array

    // Iterating over an array using pointers
    for (int* ptr = start; ptr < end; ++ptr) {
        int value = *ptr;  // Access each element
        // Do something with value
    }

}