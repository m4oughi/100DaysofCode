// File: main.cpp
#include <iostream>
#include "calculations.h"

int main() {
    std::cout << "Addition: " << add(5, 3) << std::endl;       // Output: Addition: 8
    std::cout << "Subtraction: " << subtract(5, 3) << std::endl; // Output: Subtraction: 2
    std::cout << "Multiplication: " << multiply(5, 3) << std::endl; // Output: Multiplication: 15
    return 0;
}
