#include <iostream>

int main() {
    int arr[3] = {10, 20, 30};
    int* ptr = arr;  // Pointer to the first element of the array

    // Increment pointer to point to the next element
    ptr++;  // Now 'ptr' points to arr[1] which is 20

    // Decrement pointer to point back to the previous element
    ptr--;  // Now 'ptr' points back to arr[0] which is 10

}