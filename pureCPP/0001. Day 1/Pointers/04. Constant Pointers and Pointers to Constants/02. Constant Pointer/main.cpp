#include <iostream>

int main() {
    int a = 10;
    int* const ptr = &a;  // 'ptr' is a constant pointer to an integer

    *ptr = 20;  // Allowed: Can modify the value of 'a' through 'ptr'
    // ptr = nullptr;  // Error: 'ptr' is a constant pointer and cannot point to a different address
    return 0;
}

