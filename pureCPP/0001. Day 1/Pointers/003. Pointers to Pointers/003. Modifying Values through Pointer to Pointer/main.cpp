#include <iostream>

int main() {
    int a = 10;
    int* ptr = &a;
    int** pptr = &ptr;

    // Modifying the value of 'a' through pointer to pointer
    **pptr = 20;  // Now 'a' is 20

}