#include <iostream>

int* allocateMemory() {
    int* ptr = new int(300);  // Dynamically allocated memory
    return ptr;               // Safe
}

int main() {
    int* ptr = allocateMemory();
    delete ptr;               // Deleting memory
    std::cout << "Dangling Reference: " << *ptr << std::endl;  // Undefined behavior

    return 0;
}
