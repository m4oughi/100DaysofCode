#include <iostream>

int main() {
    int* numbers = new int[5] {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; ++i) {
        std::cout << "Element at index " << i << ": " << *(numbers + i) << std::endl;
    }

    delete[] numbers;  // Clean up dynamically allocated memory

}