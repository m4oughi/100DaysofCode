#include <iostream>

void printValue(const int val) {
    std::cout << val << std::endl;
    // val = 20; // NOT allowed: modifying the constant parameter is not allowed
}

int main() {
    int x = 10;
    printValue(x); // Passing a non-const argument to a const parameter

    return 0;
}