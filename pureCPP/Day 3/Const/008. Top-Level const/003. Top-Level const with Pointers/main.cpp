#include <iostream>

int main() {
    int z = 50;
    int *const ptr = &z; // ptr is a top-level const, cannot point to another address
    *ptr = 60; // Allowed: modifying the value pointed to by ptr is allowed
    // ptr = nullptr; // NOT allowed: changing the pointer itself is not allowed


    return 0;
}