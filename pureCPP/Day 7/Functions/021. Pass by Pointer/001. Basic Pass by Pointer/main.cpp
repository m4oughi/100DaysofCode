#include <iostream>

void increment(int* ptr) {
    (*ptr)++;  // Modifies the value pointed to by ptr
}

int main() {
    int num = 5;
    increment(&num);
    std::cout << "After increment, num: " << num << std::endl;  // Original num is changed
    return 0;
}
