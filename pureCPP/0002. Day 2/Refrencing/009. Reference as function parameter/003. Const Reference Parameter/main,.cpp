#include <iostream>

void printValue(const int &num) {
    std::cout << "Value: " << num << std::endl;
}

int main() {
    int value = 20;
    printValue(value);  // Pass by const reference
    // value remains unchanged

    return 0;
}