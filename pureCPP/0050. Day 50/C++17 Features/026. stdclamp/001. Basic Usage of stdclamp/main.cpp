#include <iostream>
#include <algorithm>  // for std::clamp

int main() {
    int x = 15;
    int minVal = 10, maxVal = 20;

    int clampedValue = std::clamp(x, minVal, maxVal);
    std::cout << "Clamped Value: " << clampedValue << "\n"; // Output: 15 (unchanged)

    x = 25;
    clampedValue = std::clamp(x, minVal, maxVal);
    std::cout << "Clamped Value: " << clampedValue << "\n"; // Output: 20 (clamped to maxVal)

    x = 5;
    clampedValue = std::clamp(x, minVal, maxVal);
    std::cout << "Clamped Value: " << clampedValue << "\n"; // Output: 10 (clamped to minVal)

    return 0;
}
