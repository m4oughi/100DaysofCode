#include <iostream>

const int SIZE = 8; // Constant size for dynamic array

template <typename T>
void printArray(T* array) {
    for (int i = 0; i < SIZE; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int* intArray = new int[SIZE]; // Dynamic int array
    double* doubleArray = new double[SIZE]; // Dynamic double array

    for (int i = 0; i < SIZE; ++i) {
        intArray[i] = i;
        doubleArray[i] = i * 0.5;
    }

    printArray(intArray); // Prints integers
    printArray(doubleArray); // Prints doubles

    delete[] intArray;
    delete[] doubleArray;
}
