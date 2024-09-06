#include <iostream>

void printValue(const int &value) {
    std::cout << value << std::endl;  // Can read the value, but not modify
}

int main() {
    int x = 40;
    printValue(x);  // Output: 40
    printValue(50); // Output: 50

    return 0;
}