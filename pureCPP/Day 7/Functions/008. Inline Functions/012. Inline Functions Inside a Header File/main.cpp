// math_operations.h
#ifndef MATH_OPERATIONS_H
#define MATH_OPERATIONS_H

inline int multiply(int a, int b) {
    return a * b;
}

#endif

// main.cpp
#include <iostream>
#include "math_operations.h"

int main() {
    std::cout << "Multiplication of 6 and 7: " << multiply(6, 7) << std::endl;
    return 0;
}
