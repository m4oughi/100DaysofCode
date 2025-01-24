#include <iostream>
#include <tuple>
#include <algorithm>

int main() {
    auto [minValue, maxValue] = std::minmax({15, 10, 25, 5, 30});

    std::cout << "Minimum: " << minValue << "\n";
    std::cout << "Maximum: " << maxValue << "\n";

    return 0;
}
