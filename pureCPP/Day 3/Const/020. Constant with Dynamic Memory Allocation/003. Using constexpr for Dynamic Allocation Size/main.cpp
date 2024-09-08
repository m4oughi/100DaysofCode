#include <iostream>

constexpr int getSize() {
    return 50; // Compile-time constant
}

int main() {
    int* array = new int[getSize()]; // Dynamically allocate array

    for (int i = 0; i < getSize(); ++i) {
        array[i] = i * 3;
    }

    for (int i = 0; i < getSize(); ++i) {
        std::cout << array[i] << " "; // Prints 0 3 6 9 ... 147
    }
    std::cout << std::endl;

    delete[] array; // Clean up dynamic memory
}
