#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main() {
    std::vector<int> data(1000000);
    std::generate(data.begin(), data.end(), [] { return rand() % 1000000; });

    auto minElem = std::min_element(data.begin(), data.end());
    auto maxElem = std::max_element(data.begin(), data.end());

    std::cout << "Minimum element: " << *minElem << "\n";
    std::cout << "Maximum element: " << *maxElem << "\n";

    return 0;
}
