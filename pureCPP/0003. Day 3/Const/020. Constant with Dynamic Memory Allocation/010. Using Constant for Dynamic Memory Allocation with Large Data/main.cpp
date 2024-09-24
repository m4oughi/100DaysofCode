#include <iostream>

const int LARGE_SIZE = 1000000; // Large size for dynamic allocation

int main() {
    int* largeArray = new int[LARGE_SIZE]; // Dynamically allocate large array

    for (int i = 0; i < LARGE_SIZE; ++i) {
        largeArray[i] = i;
    }

    std::cout << "First element: " << largeArray[0] << std::endl; // Prints 0
    std::cout << "Last element: " << largeArray[LARGE_SIZE - 1] << std::endl; // Prints 999999

    delete[] largeArray; // Clean up dynamic memory
}
