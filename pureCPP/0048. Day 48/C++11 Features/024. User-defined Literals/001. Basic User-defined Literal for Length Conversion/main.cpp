#include <iostream>

constexpr long double operator"" _cm(long double x) {
    return x / 100.0;  // Convert cm to meters
}

int main() {
    long double length = 150.0_cm;
    std::cout << "150 cm in meters: " << length << "m\n";
    return 0;
}
