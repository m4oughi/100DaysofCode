#include <iostream>

int main() {
    int array1[] = {1, 2, 3};
    int array2[] = {4, 5, 6};
    int* arrays[2] = {array1, array2};
    int** pptr = arrays;  // Pointer to pointer to an array of pointers

    // Access elements using pointer to pointer
    int firstElement = *(*(pptr));  // Accesses array1[0], which is 1
    int secondElement = *(*(pptr + 1) + 1);  // Accesses array2[1], which is 5

}