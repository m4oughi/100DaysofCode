#include <iostream>

void modifyValue(int value) {
    value = 100;  // Modify the local copy
}

int main() {
    int num = 50;
    modifyValue(num);  // Pass by value
    std::cout << "Original value: " << num << std::endl;  // Output: 50

    return 0;
}
