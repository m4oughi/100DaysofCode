#include <iostream>

void increment(int &num) {
    num++;  // Modify the original variable
}

int main() {
    int value = 10;
    increment(value);  // Pass by reference
    std::cout << value << std::endl;  // Output: 11

    return 0;
}