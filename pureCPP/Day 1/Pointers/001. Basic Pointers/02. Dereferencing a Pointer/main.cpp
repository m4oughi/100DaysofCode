#include <iostream>

int main() {
    int a = 10;
    int* ptr = &a;
    int b = *ptr;  // Dereferencing 'ptr' to access the value of 'a', which is 10
}