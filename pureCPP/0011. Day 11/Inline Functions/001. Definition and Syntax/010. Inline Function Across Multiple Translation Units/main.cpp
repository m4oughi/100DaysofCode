// File: inline_function.h
#pragma once

inline int square(int x) {
    return x * x;
}

// File: main.cpp
#include <iostream>
#include "inline_function.h"

int main() {
    std::cout << "Square of 8: " << square(8) << std::endl; // Output: Square of 8: 64
    return 0;
}
