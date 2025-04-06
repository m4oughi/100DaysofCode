#include <iostream>

const int* createPointer() {
    static int val = 10;
    return &val;  // Pointer at runtime
}

constexpr int createArray() {
    return 10 + 20;  // Computed at compile-time
}

int main() {
    const int* ptr = createPointer();  // Pointer evaluated at runtime
    std::cout << "Pointer value: " << *ptr << '\n';
    
    constexpr int arrValue = createArray();  // Array value computed at compile-time
    std::cout << "constexpr array value: " << arrValue << '\n';
}
