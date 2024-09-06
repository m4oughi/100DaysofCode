#include <iostream>

int main() {
    int a = 10;
    int* ptr1 = &a;  // 'ptr1' points to 'a'
    int** ptr2 = &ptr1;  // 'ptr2' points to 'ptr1'
    int b = **ptr2;  // Dereferencing 'ptr2' twice accesses the value of 'a', which is 10

}