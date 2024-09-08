#include <iostream>

int main() {
    const int x = 10;
    const int *ptr = &x; // ptr is a pointer to constant data
    // *ptr = 20; // NOT allowed: modifying the value pointed by ptr is not allowed


    return 0;
}