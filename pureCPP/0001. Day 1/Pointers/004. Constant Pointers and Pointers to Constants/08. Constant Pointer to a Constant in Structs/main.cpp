#include <iostream>

struct Data {
    const int* const ptr;  // Constant pointer to a constant integer
};

int main() {
    int a = 10;
    Data d = {&a};  // Initialize 'ptr' to point to 'a'

    // *d.ptr = 20;  // Error: Cannot modify the value through 'ptr'
    // d.ptr = nullptr;  // Error: 'ptr' is a constant pointer and cannot point to a different address

    return 0;
}