#include <iostream>

int* createDynamicArray(int size) {
    int* arr = new int[size];  // Dynamic array allocation
    for (int i = 0; i < size; ++i) {
        arr[i] = i * 10;  // Initialize array elements
    }
    return arr;  // Return the pointer to the array
}

int main() {
    int size = 5;
    int* array = createDynamicArray(size);  // Get the pointer to the dynamic array

    // Print the array elements
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";  // Outputs: 0 10 20 30 40
    }
    std::cout << std::endl;

    delete[] array;  // Free the allocated memory
}
