#include <iostream>

void printValue(const int *ptr) {
    std::cout << *ptr << std::endl;
    // *ptr = 60; // NOT allowed: modifying the value pointed to by ptr is not allowed
}

int main() {
    int z = 70;
    printValue(&z); // Passing the address of a non-const variable to a pointer to const int

    return 0;
}