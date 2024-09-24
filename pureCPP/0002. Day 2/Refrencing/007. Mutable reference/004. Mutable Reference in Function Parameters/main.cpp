#include <iostream>

void increment(int &value) {
    value++;  // Modifies the original variable
}

int main() {
    int num = 5;
    increment(num);
    std::cout << num << std::endl;  // Output: 6

    return 0;
}