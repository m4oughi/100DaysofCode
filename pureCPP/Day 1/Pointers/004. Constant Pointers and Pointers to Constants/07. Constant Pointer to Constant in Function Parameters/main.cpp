#include <iostream>

void process(const int* const ptr) {
    // *ptr = 200;  // Error: Cannot modify the value pointed to by 'ptr'
    // ptr = nullptr;  // Error: 'ptr' is a constant pointer and cannot point to a different address
    std::cout << *ptr << std::endl;  // Allowed: Reading the value pointed to by 'ptr'
}

int main() {
    int a = 10;
    process(&a);  // Prints 10
    return 0;
}