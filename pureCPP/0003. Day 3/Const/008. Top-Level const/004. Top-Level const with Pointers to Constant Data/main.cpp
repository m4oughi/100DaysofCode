#include <iostream>

int main() {
    const int a = 70;
    const int *const ptr = &a; // ptr is a top-level const pointing to constant data
    // *ptr = 80; // NOT allowed: modifying the value pointed to by ptr is not allowed
    // ptr = nullptr; // NOT allowed: changing the pointer itself is not allowed


    return 0;
}