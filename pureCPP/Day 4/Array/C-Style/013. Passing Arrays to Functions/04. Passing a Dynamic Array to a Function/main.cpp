#include <iostream>

void fillArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = i * 10;  // Fill the array with values
    }
}

int main() {
    int size = 5;
    int* numbers = new int[size];  // Dynamic array

    // Pass the dynamic array to the function
    fillArray(numbers, size);

    // Print the filled array
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << " ";  // Outputs: 0 10 20 30 40
    }
    std::cout << std::endl;

    delete[] numbers;  // Free the allocated memory
}
