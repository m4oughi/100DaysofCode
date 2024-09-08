#include <iostream>

int main() {
    int c = 140;
    int *ptr = &c;
    int *&ref = ptr; // ref is a reference to a pointer
    *ref = 150; // Allowed: modifying the value pointed to by ref
    int d = 160;
    ref = &d; // Allowed: changing the pointer's target

    const int *const &cRef = ptr; // cRef is a constant reference to a constant pointer
    // *cRef = 170; // NOT allowed: modifying the value pointed to by cRef is not allowed
    // cRef = &d; // NOT allowed: changing the pointer's target is not allowed

    return 0;
}