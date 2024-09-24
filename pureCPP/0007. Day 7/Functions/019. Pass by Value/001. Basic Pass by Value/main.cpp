#include <iostream>

void increment(int x) {
    x = x + 1;  // Modifying the local copy of x
}

int main() {
    int num = 5;
    increment(num);
    std::cout << "After increment, num: " << num << std::endl;  // Original num remains unchanged
    return 0;
}
