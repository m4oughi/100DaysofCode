#include <iostream>

int main() {
    int a = 10;
    int* ptr = &a;
    int** pptr = &ptr;

    // Accessing value of 'a' through dereferencing 'pptr'
    int value = **pptr;  // Dereference 'pptr' twice to get the value of 'a', which is 10

}