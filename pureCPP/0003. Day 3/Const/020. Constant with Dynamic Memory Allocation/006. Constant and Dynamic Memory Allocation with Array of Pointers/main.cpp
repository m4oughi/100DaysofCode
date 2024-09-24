#include <iostream>

const int NUM_POINTERS = 3; // Number of pointers in array

int main() {
    int** array = new int*[NUM_POINTERS]; // Array of pointers

    for (int i = 0; i < NUM_POINTERS; ++i) {
        array[i] = new int(i * 10); // Allocate each int dynamically
    }

    for (int i = 0; i < NUM_POINTERS; ++i) {
        std::cout << *array[i] << " "; // Prints 0 10 20
    }
    std::cout << std::endl;

    for (int i = 0; i < NUM_POINTERS; ++i) {
        delete array[i]; // Clean up each allocated int
    }
    delete[] array; // Clean up array of pointers
}
