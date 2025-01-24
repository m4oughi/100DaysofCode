#include <iostream>
#include <algorithm>

int main() {
    int value = 15;
    int lower = 10;
    int upper = 20;

    int result = std::clamp(value, lower, upper);
    std::cout << "Clamped value: " << result << "\n"; // Output: 15

    return 0;
}
