#include <iostream>

void printValue(const int* ptr) {
    // *ptr = 100;  // Error: Cannot modify the value pointed to by 'ptr'
    std::cout << *ptr << std::endl;  // Allowed: Reading the value pointed to by 'ptr'
}

int main() {
    int a = 10;
    printValue(&a);  // Prints 10
    return 0;
}