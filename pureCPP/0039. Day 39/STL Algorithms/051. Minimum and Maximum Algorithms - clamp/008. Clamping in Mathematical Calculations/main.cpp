#include <iostream>
#include <algorithm>

int main() {
    int base = 50;
    int delta = 30;  // Calculated change
    int lower = 0;
    int upper = 100;

    int newValue = std::clamp(base + delta, lower, upper);
    std::cout << "Clamped result: " << newValue << "\n"; // Output: 80

    delta = 70; // Change that exceeds the upper limit
    newValue = std::clamp(base + delta, lower, upper);
    std::cout << "Clamped result: " << newValue << "\n"; // Output: 100

    return 0;
}
