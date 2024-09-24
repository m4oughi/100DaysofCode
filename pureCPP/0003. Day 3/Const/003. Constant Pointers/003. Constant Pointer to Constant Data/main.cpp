#include <iostream>

int main() {
    const int z = 50;
    const int *const ptr = &z; // ptr is a constant pointer to constant data
    // *ptr = 60; // This is NOT allowed: modifying the value is not allowed
    // ptr = &y; // This is NOT allowed: changing the pointer's target is not allowed

    return 0;
}