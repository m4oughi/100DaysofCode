#include <iostream>
#include <vector>
#include <algorithm>

bool customComparator(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.second < b.second; // Sort by second element
}

int main() {
    std::vector<std::pair<int, int>> vec = {{1, 5}, {2, 3}, {3, 4}};

    std::sort(vec.begin(), vec.end(), customComparator);

    for (const auto& p : vec) {
        std::cout << "(" << p.first << ", " << p.second << ") ";
    }

    return 0;
}
