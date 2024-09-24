#include <iostream>

int main() {
    int f = 220;
    const int *ptr1 = &f; // ptr1 is a pointer to a constant int
    const int **ptr2 = &ptr1; // ptr2 is a pointer to a pointer to a constant int
    const int ***ptr3 = &ptr2; // ptr3 is a pointer to a pointer to a pointer to a constant int

    // ***ptr3 = 230; // NOT allowed: modifying the value pointed to by ptr1 is not allowed
    ptr1 = nullptr; // Allowed: modifying ptr1 is allowed
    ptr2 = nullptr; // Allowed: modifying ptr2 is allowed
    ptr3 = nullptr; // Allowed: modifying ptr3 is allowed


    return 0;
}