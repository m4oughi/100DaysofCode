#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {3, -5, 2, -8, 6};

    auto minElem = *std::min_element(vec.begin(), vec.end(), [](int a, int b) {
        return std::abs(a) < std::abs(b); // Compare based on absolute value
    });

    auto maxElem = *std::max_element(vec.begin(), vec.end(), [](int a, int b) {
        return std::abs(a) < std::abs(b); // Compare based on absolute value
    });

    std::cout << "Minimum element (absolute): " << minElem << "\n";
    std::cout << "Maximum element (absolute): " << maxElem << "\n";

    return 0;
}
