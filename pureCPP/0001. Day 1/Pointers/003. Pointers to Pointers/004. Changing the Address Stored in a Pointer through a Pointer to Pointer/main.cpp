#include <iostream>

int main() {
    int a = 10;
    int b = 20;
    int* ptr = &a;
    int** pptr = &ptr;

    // Changing the address 'ptr' points to via 'pptr'
    *pptr = &b;  // Now 'ptr' points to 'b' instead of 'a'

}