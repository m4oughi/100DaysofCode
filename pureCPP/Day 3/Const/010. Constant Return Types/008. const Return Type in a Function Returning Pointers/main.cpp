#include <iostream>

const int* getConstantPointer(const int &val) {
    return &val; // Returning a pointer to a constant integer
}

int main() {
    int c = 190;
    const int* ptr = getConstantPointer(c);
    // *ptr = 200; // NOT allowed: modifying the value pointed to by ptr is not allowed

    return 0;
}