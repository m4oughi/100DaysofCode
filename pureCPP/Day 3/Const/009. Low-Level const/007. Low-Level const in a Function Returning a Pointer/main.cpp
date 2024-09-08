#include <iostream>

const int* getPointer(const int &val) {
    return &val; // Returning a pointer to const int
}

int main() {
    int b = 160;
    const int* ptr = getPointer(b);
    // *ptr = 170; // NOT allowed: modifying the value through ptr is not allowed

    return 0;
}