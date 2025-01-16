#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::pair<int, int>> vec = {{1, 5}, {2, 3}, {1, 3}, {2, 5}};

    std::sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
        if (a.first == b.first)
            return a.second < b.second; // Secondary sort by second element
        return a.first < b.first; // Primary sort by first element
    });

    std::cout << "Sorted by first, then second: ";
    for (const auto& pair : vec) {
        std::cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    std::cout << "\n";

    return 0;
}
