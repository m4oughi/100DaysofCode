#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 20, 15, 5, 25};

    auto minElem = *std::min_element(vec.begin(), vec.end(), [](int a, int b) {
        return a > b; // Reverse comparison
    });
    auto maxElem = *std::max_element(vec.begin(), vec.end(), [](int a, int b) {
        return a > b;
    });

    std::cout << "Minimum (reverse): " << minElem << "\n";
    std::cout << "Maximum (reverse): " << maxElem << "\n";

    return 0;
}
