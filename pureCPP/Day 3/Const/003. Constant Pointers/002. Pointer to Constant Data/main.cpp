#include <iostream>

int main() {
    const int y = 30;
    const int *ptr = &y; // ptr is a pointer to constant data
    // *ptr = 40; // This is NOT allowed: modifying the value is not allowed
    ptr = &x; // This is allowed: changing the pointer's target


    return 0;
}