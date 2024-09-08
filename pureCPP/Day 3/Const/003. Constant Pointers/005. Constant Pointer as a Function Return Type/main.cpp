#include <iostream>

int* const getPointer(int &ref) {
    return &ref; // Returns a constant pointer
}

int main() {
    int b = 90;
    int* const ptr = getPointer(b);
    // ptr = &a; // NOT allowed: ptr is a constant pointer

    return 0;
}