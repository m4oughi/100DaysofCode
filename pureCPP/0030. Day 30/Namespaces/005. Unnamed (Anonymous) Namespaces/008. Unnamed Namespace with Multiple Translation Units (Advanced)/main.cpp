#include <iostream>

namespace {
    int value = 10;  // Local to main.cpp
}

void displayValue();

int main() {
    std::cout << "Value in main.cpp: " << value << std::endl;
    displayValue();
    return 0;
}
