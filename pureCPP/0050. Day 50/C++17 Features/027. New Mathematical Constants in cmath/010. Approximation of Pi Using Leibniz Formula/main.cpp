#include <iostream>
#include <numbers>

int main() {
    double sum = 0.0;
    int terms = 10000; // More terms = better approximation

    for (int i = 0; i < terms; ++i) {
        sum += (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1);
    }

    double approximated_pi = 4 * sum;
    std::cout << "Approximated Pi: " << approximated_pi << "\n";
    std::cout << "Actual Pi: " << std::numbers::pi << "\n";
    return 0;
}
