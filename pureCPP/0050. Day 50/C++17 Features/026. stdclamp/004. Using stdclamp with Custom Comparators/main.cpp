#include <iostream>
#include <algorithm>

struct CustomComparator {
    bool operator()(int a, int b) const {
        return a > b;  // Reverse order (Descending)
    }
};

int main() {
    int value = 12;
    int minVal = 5, maxVal = 10;

    int clampedValue = std::clamp(value, minVal, maxVal, CustomComparator());
    std::cout << "Clamped Value: " << clampedValue << "\n"; // Output: 10 (due to reversed comparator)

    return 0;
}
