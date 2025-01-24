#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 5};

    auto result = std::minmax_element(vec.begin(), vec.end());
    int range = *result.second - *result.first;

    std::cout << "Minimum element: " << *result.first << "\n";
    std::cout << "Maximum element: " << *result.second << "\n";
    std::cout << "Range: " << range << "\n";

    return 0;
}
