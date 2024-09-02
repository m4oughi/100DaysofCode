#include <iostream>

int main() {
    int a = 10;
    const int* const ptr = &a;  // 'ptr' is a constant pointer to a constant integer

    // *ptr = 20;  // Error: Cannot modify the value of 'a' through 'ptr'
    // ptr = nullptr;  // Error: 'ptr' is a constant pointer and cannot point to a different address

}