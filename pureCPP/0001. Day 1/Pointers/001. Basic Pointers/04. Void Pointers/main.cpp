#include <iostream>

int main() {
    int a = 10;
    void* ptr = &a;  // 'ptr' is a void pointer pointing to 'a'
    int* intPtr = static_cast<int*>(ptr);  // Casting void pointer back to int pointer
}