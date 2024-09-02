#include <iostream>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr;  // Pointer 'ptr' points to the first element of 'arr'
    ptr++;  // Pointer now points to the second element of 'arr'
    int secondElement = *ptr;  // Dereferencing 'ptr' gives 2

}