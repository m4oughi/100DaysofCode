#include <iostream>

namespace {
    int value = 20;  // Local to helper.cpp
}

void displayValue() {
    std::cout << "Value in helper.cpp: " << value << std::endl;
}
