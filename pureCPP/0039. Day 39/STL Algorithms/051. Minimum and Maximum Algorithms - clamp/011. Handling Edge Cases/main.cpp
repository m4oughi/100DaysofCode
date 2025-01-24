#include <iostream>
#include <algorithm>

int main() {
    int value = 15;
    int lower = 20;
    int upper = 10;

    // Ensure bounds are valid
    if (lower > upper) {
        std::cout << "Invalid bounds. Swapping values.\n";
        std::swap(lower, upper);
    }

    int clampedValue = std::clamp(value, lower, upper);
    std::cout << "Clamped value: " << clampedValue << "\n"; // Output: 15

    return 0;
}
