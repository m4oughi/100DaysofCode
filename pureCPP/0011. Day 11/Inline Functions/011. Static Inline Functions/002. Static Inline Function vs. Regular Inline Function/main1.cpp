// main1.cpp
#include <iostream>
#include "static_inline.h"

int main() {
    std::cout << "Product: " << multiply(4, 3) << std::endl; // Output: 12
    std::cout << "Difference: " << subtract(7, 2) << std::endl; // Output: 5
    return 0;
}
