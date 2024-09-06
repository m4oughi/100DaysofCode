#include <iostream>

int main()
{
    int a = 10;
    int b = 20;
    const int *ptrToConst = &a;            // Pointer to a constant integer
    int *const constPtr = &a;              // Constant pointer to an integer
    const int *const constPtrToConst = &b; // Constant pointer to a constant integer

    // *ptrToConst = 30;  // Error: Cannot modify the value through 'ptrToConst'
    ptrToConst = &b; // Allowed: 'ptrToConst' can point to a different address

    *constPtr = 40; // Allowed: Can modify the value through 'constPtr'
    // constPtr = &b;  // Error: 'constPtr' is a constant pointer and cannot point to a different address

    // *constPtrToConst = 50;  // Error: Cannot modify the value through 'constPtrToConst'
    // constPtrToConst = &a;  // Error: 'constPtrToConst' is a constant pointer and cannot point to a different address
}