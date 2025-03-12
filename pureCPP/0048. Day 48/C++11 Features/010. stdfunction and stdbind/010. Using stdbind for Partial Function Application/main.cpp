#include <iostream>
#include <functional>

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i)
        result *= base;
    return result;
}

int main() {
    auto square = std::bind(power, std::placeholders::_1, 2);
    auto cube = std::bind(power, std::placeholders::_1, 3);

    std::cout << "Square of 4: " << square(4) << std::endl;  // Output: 16
    std::cout << "Cube of 3: " << cube(3) << std::endl;      // Output: 27

    return 0;
}
