#include <iostream>
#include "math_library_a.h"
#include "math_library_b.h"

int main() {
    // Ambiguity: Which multiply() function will be called?
    std::cout << "Multiplication Result: " << multiply(3, 4) << std::endl; 
    // Undefined behavior due to conflict of inline function definitions
    return 0;
}
