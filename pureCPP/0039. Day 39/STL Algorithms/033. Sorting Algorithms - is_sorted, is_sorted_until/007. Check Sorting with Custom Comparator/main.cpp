#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::pair<int, int>> pairs = {{1, 3}, {2, 5}, {3, 7}, {4, 6}};

    if (std::is_sorted(pairs.begin(), pairs.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    })) {
        std::cout << "The list of pairs is sorted by the second element.\n";
    } else {
        std::cout << "The list of pairs is not sorted by the second element.\n";
    }
    return 0;
}
