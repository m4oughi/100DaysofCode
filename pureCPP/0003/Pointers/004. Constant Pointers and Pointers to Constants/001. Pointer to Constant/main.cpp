#include <iostream>

int main() {
    int a = 10;
    const int* ptr = &a;  // 'ptr' is a pointer to a constant integer

    // *ptr = 20;  // Error: Cannot modify the value of 'a' through 'ptr'
    a = 20;  // Allowed: 'a' itself can still be modified directly
    ptr = nullptr;  // Allowed: 'ptr' can point to another address

}