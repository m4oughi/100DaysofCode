#include <iostream>

int main() {
    int a = 10;
    const int b = 20;
    const int* ptr1 = &a;  // 'ptr1' is a pointer to a constant
    int* const ptr2 = &a;  // 'ptr2' is a constant pointer
    const int* const ptr3 = &b;  // 'ptr3' is a constant pointer to a constant
    // *ptr1 = 15;  // Error: Cannot modify the value at 'ptr1'
    // ptr2 = &b;  // Error: 'ptr2' is a constant pointer, cannot change address
    // *ptr3 = 25;  // Error: Cannot modify the value through 'ptr3'
    // ptr3 = &a;  // Error: 'ptr3' is a constant pointer, cannot change address

}