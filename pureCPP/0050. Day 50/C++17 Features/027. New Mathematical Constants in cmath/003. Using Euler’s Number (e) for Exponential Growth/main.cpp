#include <iostream>
#include <cmath>
#include <numbers>

int main() {
    double rate = 0.05;
    double time = 10;
    double growth = std::pow(std::numbers::e, rate * time);

    std::cout << "Exponential Growth Factor: " << growth << "\n"; // Output: 1.648...
    return 0;
}
