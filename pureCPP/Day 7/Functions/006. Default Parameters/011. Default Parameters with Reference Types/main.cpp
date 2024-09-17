#include <iostream>

// Function declaration with default reference parameter
void modifyValue(int& value, int increment = 1);

int main() {
    int x = 5;
    modifyValue(x);             // Uses default increment
    std::cout << "Value: " << x << std::endl;

    modifyValue(x, 5);          // Custom increment
    std::cout << "Value: " << x << std::endl;
    return 0;
}

// Function definition with default reference parameter
void modifyValue(int& value, int increment) {
    value += increment;
}
