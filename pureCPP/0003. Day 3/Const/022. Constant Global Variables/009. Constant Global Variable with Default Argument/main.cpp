#include <iostream>

const int DEFAULT_VALUE = 900; // Constant global variable

void printValue(int value = DEFAULT_VALUE) {
    std::cout << "Value: " << value << std::endl; // Prints default value if not provided
}

int main() {
    printValue();       // Prints 900
    printValue(100);    // Prints 100
}
