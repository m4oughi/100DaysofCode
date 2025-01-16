#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::pair<int, int>> vec = {{1, 2}, {3, 1}, {2, 3}, {1, 3}};

    std::stable_sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
        return a.second < b.second; // Sort by the second element
    });

    std::cout << "Stable sorted by second element: ";
    for (const auto& pair : vec) {
        std::cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    std::cout << "\n";

    return 0;
}
