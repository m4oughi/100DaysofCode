#include <iostream>
#include <algorithm>

int main() {
    double value = 7.5;
    double lower = 10.0;
    double upper = 20.0;

    double result = std::clamp(value, lower, upper);
    std::cout << "Clamped floating-point value: " << result << "\n"; // Output: 10.0

    return 0;
}
