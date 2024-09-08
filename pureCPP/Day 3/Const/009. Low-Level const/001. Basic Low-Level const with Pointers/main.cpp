#include <iostream>

int main() {
    const int x = 10;
    const int *ptr = &x; // ptr is a pointer to a constant int
    // *ptr = 20; // NOT allowed: modifying the value pointed to by ptr is not allowed
    ptr = nullptr; // Allowed: changing the pointer itself is allowed


    return 0;
}