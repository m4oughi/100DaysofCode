#include <iostream>
#include <algorithm>

int main() {
    int value = -15;
    int lower = -20;
    int upper = -10;

    auto result = std::clamp(value, lower, upper, [](int a, int b) {
        return std::abs(a) < std::abs(b); // Compare based on absolute values
    });

    std::cout << "Clamped value (absolute): " << result << "\n"; // Output: -15

    return 0;
}
