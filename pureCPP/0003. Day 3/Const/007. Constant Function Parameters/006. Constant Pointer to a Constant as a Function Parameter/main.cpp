#include <iostream>

void printValue(const int *const ptr) {
    std::cout << *ptr << std::endl;
    // *ptr = 100; // NOT allowed: modifying the value pointed to by ptr is not allowed
    // ptr = nullptr; // NOT allowed: modifying the pointer itself is not allowed
}

int main() {
    int a = 110;
    printValue(&a); // Passing the address of a non-const argument to a const pointer to const data

    return 0;
}