#include <iostream>
#include <vector>
#include <algorithm>

bool comparePairs(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.second < b.second; // Sort by the second element in ascending order
}

int main() {
    std::vector<std::pair<int, int>> vec = {{1, 3}, {2, 1}, {3, 2}};
    std::sort(vec.begin(), vec.end(), comparePairs);

    for (const auto& p : vec) {
        std::cout << "{" << p.first << ", " << p.second << "} ";
    }
    return 0;
}
