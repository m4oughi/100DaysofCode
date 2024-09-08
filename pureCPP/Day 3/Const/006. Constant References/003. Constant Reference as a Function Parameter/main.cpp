#include <iostream>

void displayValue(const int &ref) {
    std::cout << ref << std::endl;
    // ref = 60; // NOT allowed: modifying the value through ref is not allowed
}

int main() {
    int a = 70;
    displayValue(a); // Passing a non-const variable as a const reference

    return 0;
}