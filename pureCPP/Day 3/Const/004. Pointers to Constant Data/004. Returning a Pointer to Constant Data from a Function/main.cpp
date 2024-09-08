#include <iostream>

const int* getPointer(const int &ref) {
    return &ref; // Returns a pointer to constant data
}

int main() {
    int b = 90;
    const int *ptr = getPointer(b);
    // *ptr = 100; // NOT allowed: modifying the value pointed by ptr is not allowed

    return 0;
}