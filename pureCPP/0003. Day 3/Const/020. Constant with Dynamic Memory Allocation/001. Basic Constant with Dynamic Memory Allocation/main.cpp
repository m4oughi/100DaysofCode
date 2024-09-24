#include <iostream>

const int SIZE = 10; // Constant for array size

int main() {
    int* array = new int[SIZE]; // Dynamically allocate array

    for (int i = 0; i < SIZE; ++i) {
        array[i] = i * 2;
    }

    for (int i = 0; i < SIZE; ++i) {
        std::cout << array[i] << " "; // Prints 0 2 4 6 8 10 12 14 16 18
    }
    std::cout << std::endl;

    delete[] array; // Clean up dynamic memory
}
