#include <iostream>
#include <algorithm>

int main() {
    int value1 = 5;  // Below range
    int value2 = 25; // Above range
    int lower = 10;
    int upper = 20;

    std::cout << "Clamped value1: " << std::clamp(value1, lower, upper) << "\n"; // Output: 10
    std::cout << "Clamped value2: " << std::clamp(value2, lower, upper) << "\n"; // Output: 20

    return 0;
}
