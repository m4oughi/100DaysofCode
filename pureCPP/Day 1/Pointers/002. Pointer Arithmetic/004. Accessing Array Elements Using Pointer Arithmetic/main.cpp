#include <iostream>

int main() {
    int arr[4] = {10, 20, 30, 40};
    int* ptr = arr;  // Pointer to the first element of the array

    // Accessing array elements using pointer arithmetic
    int first = *ptr;      // 10
    int second = *(ptr + 1);  // 20
    int third = *(ptr + 2);   // 30
    int fourth = *(ptr + 3);  // 40

}