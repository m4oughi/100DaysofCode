#include <iostream>

void updatePointer(int** ptr) {
    **ptr = 100;
}

void updateReference(int& ref) {
    ref = 200;
}

int main() {
    int value = 10;
    int* ptr = &value;

    updatePointer(&ptr);  // Pointer to pointer
    std::cout << "After updatePointer: " << value << std::endl;

    updateReference(value);  // Reference to value
    std::cout << "After updateReference: " << value << std::endl;

    return 0;
}
