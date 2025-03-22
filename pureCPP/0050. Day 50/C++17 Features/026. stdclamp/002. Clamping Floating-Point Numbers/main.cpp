#include <iostream>
#include <algorithm>

int main() {
    double temperature = 42.7;
    double minTemp = 30.0, maxTemp = 40.0;

    double clampedTemp = std::clamp(temperature, minTemp, maxTemp);
    std::cout << "Clamped Temperature: " << clampedTemp << "\n"; // Output: 40.0

    return 0;
}
