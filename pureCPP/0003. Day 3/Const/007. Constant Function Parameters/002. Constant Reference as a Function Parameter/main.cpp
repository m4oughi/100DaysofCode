#include <iostream>

void displayValue(const int &val) {
    std::cout << val << std::endl;
    // val = 30; // NOT allowed: modifying the value through the const reference is not allowed
}

int main() {
    int y = 40;
    displayValue(y); // Passing a non-const argument as a const reference

    return 0;
}