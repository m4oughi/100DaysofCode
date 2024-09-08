#include <iostream>

void legacyFunction(int* ptr) {
    *ptr = 42; // Legacy function that expects non-const pointer
}

void wrapperFunction(const int& value) {
    legacyFunction(const_cast<int*>(&value)); // Using const_cast to call legacy code
}

int main() {
    int value = 0;
    const int& constValue = value;
    wrapperFunction(constValue);
    std::cout << "value: " << value << std::endl; // Prints 42
}
