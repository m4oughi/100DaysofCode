#include <iostream>
#include <cmath>
#include <numbers>

int main() {
    double power = 3.0;
    double result = power * std::numbers::ln10;

    std::cout << "ln(10) * 3: " << result << "\n"; // Output: 6.90776...
    return 0;
}
