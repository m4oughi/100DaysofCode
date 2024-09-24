// main2.cpp
#include <iostream>
#include "static_inline.h"

int main() {
    std::cout << "Product: " << multiply(6, 2) << std::endl; // Output: 12
    std::cout << "Difference: " << subtract(10, 3) << std::endl; // Output: 7
    return 0;
}
