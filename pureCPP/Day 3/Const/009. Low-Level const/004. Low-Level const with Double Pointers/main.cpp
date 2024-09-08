#include <iostream>

int main() {
    int a = 80;
    const int *ptr1 = &a; // ptr1 is a pointer to a constant int
    const int **ptr2 = &ptr1; // ptr2 is a pointer to a pointer to a constant int

    // **ptr2 = 90; // NOT allowed: modifying the value pointed to by ptr1 is not allowed
    ptr1 = nullptr; // Allowed: modifying ptr1 is allowed
    ptr2 = nullptr; // Allowed: modifying ptr2 is allowed

    return 0;
}