#include <iostream>

void printValue(const int *ptr) {
    std::cout << *ptr << std::endl;
    // *ptr = 50; // NOT allowed: modifying the value pointed to by ptr is not allowed
}

int main() {
    int z = 60;
    printValue(&z); // Passing the address of a non-const argument to a const pointer parameter

    return 0;
}