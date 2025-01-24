#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::pair<int, int>> pairs = {{1, 5}, {3, 2}, {4, 6}, {2, 8}};

    auto result = std::minmax_element(pairs.begin(), pairs.end(), [](auto a, auto b) {
        return a.first < b.first; // Compare based on the first element of the pair
    });

    std::cout << "Minimum pair: (" << result.first->first << ", " << result.first->second << ")\n";
    std::cout << "Maximum pair: (" << result.second->first << ", " << result.second->second << ")\n";

    return 0;
}
