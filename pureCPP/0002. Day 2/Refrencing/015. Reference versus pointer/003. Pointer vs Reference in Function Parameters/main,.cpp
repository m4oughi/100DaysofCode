#include <iostream>

void incrementByPointer(int* ptr) {
    if (ptr) {  // Check for null pointer
        (*ptr)++;
    }
}

void incrementByReference(int& ref) {
    ref++;
}

int main() {
    int value = 5;
    
    incrementByPointer(&value);  // Pass address
    std::cout << "After incrementByPointer: " << value << std::endl;

    incrementByReference(value);  // Pass by reference
    std::cout << "After incrementByReference: " << value << std::endl;

    return 0;
}
