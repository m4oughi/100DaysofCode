#include <iostream>

int main() {
    int arr[3] = {100, 110, 120};
    const int *ptr = arr; // ptr is a pointer to a constant int

    // *ptr = 130; // NOT allowed: modifying the array element through ptr is not allowed
    ptr++; // Allowed: moving the pointer to the next element is allowed


    return 0;
}