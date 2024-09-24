#include <iostream>

int main() {
    int value = 42;
    int& ref = value;  // Reference to value
    int* ptr = &value; // Pointer to value

    std::cout << "Value: " << value << std::endl;
    std::cout << "Reference: " << ref << std::endl;
    std::cout << "Pointer: " << *ptr << std::endl;

    ref = 100;  // Modify through reference
    std::cout << "Modified Value through Reference: " << value << std::endl;

    *ptr = 200;  // Modify through pointer
    std::cout << "Modified Value through Pointer: " << value << std::endl;

    return 0;
}
