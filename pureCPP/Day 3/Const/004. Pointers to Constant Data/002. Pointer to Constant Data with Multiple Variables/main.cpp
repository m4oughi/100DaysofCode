#include <iostream>

int main() {
    int y = 30;
    int z = 40;
    const int *ptr = &y; // ptr points to y, and y is constant for ptr
    // *ptr = 50; // NOT allowed: modifying the value pointed by ptr is not allowed

    ptr = &z; // Allowed: changing the pointer's target to z
    // *ptr = 60; // NOT allowed: modifying the value pointed by ptr is still not allowed


    return 0;
}