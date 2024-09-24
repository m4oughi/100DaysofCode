#include <iostream>

int main() {
    int x = 10;
    int *const ptr = &x; // ptr is a constant pointer to x
    *ptr = 20; // This is allowed: modifying the value pointed by ptr
    // ptr = &y; // This is NOT allowed: changing the pointer's target


    return 0;
}