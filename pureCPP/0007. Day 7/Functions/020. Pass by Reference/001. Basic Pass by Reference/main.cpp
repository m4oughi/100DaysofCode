#include <iostream>

void increment(int& x) {
    x = x + 1;  // Modifies the original variable
}

int main() {
    int num = 5;
    increment(num);
    std::cout << "After increment, num: " << num << std::endl;  // Original num is changed
    return 0;
}
