#include <iostream>
#include "math_utils.h"

int main() {
    std::cout << "10 divided by 2: " << MathUtils::divide(10, 2) << std::endl; // Output: 5
    std::cout << "10 divided by 0: " << MathUtils::divide(10, 0) << std::endl; // Output: 0
    return 0;
}
