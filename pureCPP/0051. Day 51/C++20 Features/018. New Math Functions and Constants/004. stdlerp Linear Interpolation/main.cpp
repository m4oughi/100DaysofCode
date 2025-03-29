#include <iostream>
#include <cmath>

int main() {
    double a = 10.0, b = 20.0;
    double t = 0.25; // 25% interpolation

    double result = std::lerp(a, b, t);
    std::cout << "Interpolated value: " << result << "\n";

    return 0;
}
