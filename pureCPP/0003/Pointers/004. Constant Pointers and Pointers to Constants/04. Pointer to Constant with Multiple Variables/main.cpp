#include <iostream>

int main()
{
    int a = 10;
    int b = 20;
    const int *ptr = &a; // 'ptr' is a pointer to a constant integer

    // *ptr = 30;  // Error: Cannot modify the value of 'a' through 'ptr'
    ptr = &b; // Allowed: 'ptr' can point to a different address
}