#include <iostream>
#include "math_utils.h"

int main() {
    Math m;
    std::cout << "Square of 4: " << m.square(4) << std::endl;  // Output: 16
    std::cout << "Cube of 3: " << m.cube(3) << std::endl;      // Output: 27
    return 0;
}
