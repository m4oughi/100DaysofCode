#include <iostream>

int main() {
    // Dynamically allocate memory for an array of integers
    int* arr = new int[5];

    // Assign values to the array
    for (int i = 0; i < 5; ++i) {
        arr[i] = i + 1;
    }

    // Print the array elements
    for (int i = 0; i < 5; ++i) {
        std::cout << "Element " << i << ": " << arr[i] << std::endl;
    }

    // Deallocate the memory
    delete[] arr;

    return 0;
}
