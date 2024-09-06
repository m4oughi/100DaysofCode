#include <iostream>

int main() {
    int a = 10;
    int* ptr = &a;   // Pointer 'ptr' points to 'a'
    int** pptr = &ptr;  // 'pptr' is a pointer to pointer, pointing to 'ptr'

}