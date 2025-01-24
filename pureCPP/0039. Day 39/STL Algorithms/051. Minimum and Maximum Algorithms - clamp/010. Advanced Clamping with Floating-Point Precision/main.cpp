#include <iostream>
#include <algorithm>
#include <cmath>

int main() {
    double value = -1.23456;
    double lower = -1.0;
    double upper = 1.0;

    double clampedValue = std::clamp(value, lower, upper);
    std::cout << "Clamped floating-point value: " << clampedValue << "\n"; // Output: -1.0

    return 0;
}
