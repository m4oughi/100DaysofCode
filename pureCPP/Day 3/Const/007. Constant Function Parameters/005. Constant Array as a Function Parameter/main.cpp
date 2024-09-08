#include <iostream>

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << std::endl;
    }
    // arr[0] = 90; // NOT allowed: modifying the elements of a const array is not allowed
}

int main() {
    int arr[3] = {10, 20, 30};
    printArray(arr, 3); // Passing a non-const array as a const parameter

    return 0;
}