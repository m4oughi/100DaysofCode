#include <iostream>

void modifyValue(int* const ptr) {
    *ptr = 50;  // Allowed: Modify the value pointed to by 'ptr'
//  ptr = nullptr;  // Error: 'ptr' is a constant pointer and cannot point to a different address
}

int main() {
    int a = 10;
    modifyValue(&a);  // 'a' is now 50
    return 0;
}