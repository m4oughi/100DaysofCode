#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> values = {5, 15, 30, -2, 25};
    int minVal = 10, maxVal = 20;

    for (int &val : values) {
        val = std::clamp(val, minVal, maxVal);
    }

    std::cout << "Clamped Values: ";
    for (int val : values) {
        std::cout << val << " "; // Output: 10 15 20 10 20
    }

    return 0;
}
