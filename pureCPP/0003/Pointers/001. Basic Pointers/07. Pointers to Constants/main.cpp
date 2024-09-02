#include <iostream>

int main() {
    int a = 10;
    const int* ptr = &a;  // 'ptr' is a pointer to a constant; the value at the address cannot be modified
    // *ptr = 15;  // Error: Cannot modify the value through 'ptr'
    ptr = nullptr;  // Allowed, changing the address 'ptr' points to

}