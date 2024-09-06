#include <iostream>

int main() {
    int value1 = 10;
    int value2 = 20;

    int* ptr = &value1;  // Pointer to value1
    int& ref = value1;   // Reference to value1

    // ref = &value2; // Error: Cannot reassign reference

    ptr = &value2;  // Pointer can be reassigned
    std::cout << "Pointer points to: " << *ptr << std::endl;

    // ref = value2; // This modifies value1, not a reassignment
    std::cout << "Reference refers to: " << ref << std::endl;

    return 0;
}
