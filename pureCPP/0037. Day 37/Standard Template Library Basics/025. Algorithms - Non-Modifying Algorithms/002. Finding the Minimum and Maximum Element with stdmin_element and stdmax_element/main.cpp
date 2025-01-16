#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 20, 5, 30, 15};

    auto minIt = std::min_element(vec.begin(), vec.end());
    auto maxIt = std::max_element(vec.begin(), vec.end());

    std::cout << "Minimum element: " << *minIt << "\n";
    std::cout << "Maximum element: " << *maxIt << "\n";

    return 0;
}
