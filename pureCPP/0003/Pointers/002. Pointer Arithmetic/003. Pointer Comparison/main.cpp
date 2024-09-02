#include <iostream>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr1 = arr;  // Pointer to the first element of the array
    int* ptr2 = arr + 3;  // Pointer to the fourth element of the array

    // Compare pointers
    if (ptr1 < ptr2) {
        // True, since 'ptr1' points to an earlier element in the array than 'ptr2'
    }

}