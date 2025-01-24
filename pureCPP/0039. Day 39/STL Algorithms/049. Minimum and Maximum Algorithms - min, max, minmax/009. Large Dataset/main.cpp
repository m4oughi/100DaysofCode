#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main() {
    std::vector<int> vec(1000000);
    std::generate(vec.begin(), vec.end(), [] { return rand() % 1000000; });

    auto minElem = *std::min_element(vec.begin(), vec.end());
    auto maxElem = *std::max_element(vec.begin(), vec.end());

    std::cout << "Minimum: " << minElem << "\n";
    std::cout << "Maximum: " << maxElem << "\n";

    return 0;
}
