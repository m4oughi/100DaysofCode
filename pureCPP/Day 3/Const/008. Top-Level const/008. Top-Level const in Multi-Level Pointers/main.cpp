#include <iostream>

int main() {
    int d = 160;
    int *ptr1 = &d;
    int *const *ptr2 = &ptr1; // ptr2 is a top-level const, cannot point to another pointer

    **ptr2 = 170; // Allowed: modifying the value pointed to by ptr1 is allowed
    // *ptr2 = nullptr; // NOT allowed: changing the pointer pointed to by ptr2 is not allowed


    return 0;
}