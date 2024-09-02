#include <iostream>

// Function that takes a pointer to an array and its size
void printArray(int* ptr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i << ": " << *(ptr + i) << std::endl;
    }
}

int main() {
    int arr[4] = {5, 10, 15, 20};
    printArray(arr, 4);  // Pass the array to the function

    return 0;
}
