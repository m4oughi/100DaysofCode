#include <iostream>

int main() {
    int arr[6] = {2, 4, 6, 8, 10, 12};
    int* start = arr;  // Pointer to the first element of the array
    int* end = arr + 5;  // Pointer to the last element of the array

    // Calculate the number of elements between two pointers
    int distance = end - start;  // 5

}