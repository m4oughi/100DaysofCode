#include <iostream>

int main() {
    int y = 30;
    const int *ptr = &y; // ptr is a pointer to a constant int
    // *ptr = 40; // NOT allowed: modifying the value pointed to by ptr is not allowed
    y = 50; // Allowed: modifying y directly is allowed


    return 0;
}