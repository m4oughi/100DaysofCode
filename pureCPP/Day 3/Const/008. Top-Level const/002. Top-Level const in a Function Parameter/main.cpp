#include <iostream>

void printValue(const int val) {
    std::cout << val << std::endl;
    // val = 30; // NOT allowed: modifying the top-level const parameter is not allowed
}

int main() {
    int y = 40;
    printValue(y); // Passing a non-const argument as a top-level const parameter

    return 0;
}