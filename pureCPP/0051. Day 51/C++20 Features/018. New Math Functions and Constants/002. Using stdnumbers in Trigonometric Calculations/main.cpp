#include <iostream>
#include <cmath>
#include <numbers>

int main() {
    double angle = std::numbers::pi / 4; // 45 degrees

    std::cout << "sin(45°): " << std::sin(angle) << "\n";
    std::cout << "cos(45°): " << std::cos(angle) << "\n";
    std::cout << "tan(45°): " << std::tan(angle) << "\n";

    return 0;
}
