#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::pair<int, char>> pairs = {{2, 'b'}, {1, 'a'}, {3, 'c'}, {2, 'd'}};

    std::sort(pairs.begin(), pairs.end());

    std::cout << "Pairs sorted by first element: ";
    for (const auto& p : pairs) {
        std::cout << "(" << p.first << ", " << p.second << ") ";
    }
    return 0;
}
