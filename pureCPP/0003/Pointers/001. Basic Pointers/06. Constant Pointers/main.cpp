#include <iostream>

int main() {
    int a = 10;
    int b = 20;
    int* const ptr = &a;  // 'ptr' is a constant pointer to 'a'; the address cannot change
    *ptr = 15;  // Allowed, modifies the value at the address
    // ptr = &b;  // Error: 'ptr' is a constant pointer and cannot point to a different address

}