#include <iostream>

void printValue(const int* ptr) {
    if (ptr) {
        std::cout << "Pointer points to: " << *ptr << std::endl;
    }
}

void printValue(const int& ref) {
    std::cout << "Reference refers to: " << ref << std::endl;
}

int main() {
    int value = 42;
    printValue(&value);  // Pointer to value
    printValue(value);   // Reference to value

    return 0;
}
