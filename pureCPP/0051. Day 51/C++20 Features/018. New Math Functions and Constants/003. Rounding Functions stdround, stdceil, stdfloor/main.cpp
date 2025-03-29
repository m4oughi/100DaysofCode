#include <iostream>
#include <cmath>

int main() {
    double num = 5.75;

    std::cout << "Original: " << num << "\n";
    std::cout << "Rounded: " << std::round(num) << "\n";
    std::cout << "Ceil: " << std::ceil(num) << "\n";
    std::cout << "Floor: " << std::floor(num) << "\n";

    return 0;
}
