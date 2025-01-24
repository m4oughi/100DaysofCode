#include <iostream>
#include <algorithm>

int main() {
    int value, lower, upper;
    std::cout << "Enter value: ";
    std::cin >> value;
    std::cout << "Enter lower and upper bounds: ";
    std::cin >> lower >> upper;

    if (lower > upper) {
        std::swap(lower, upper); // Ensure bounds are in correct order
    }

    int clampedValue = std::clamp(value, lower, upper);
    std::cout << "Clamped value: " << clampedValue << "\n";

    return 0;
}
