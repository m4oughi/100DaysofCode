#include <iostream>
#include <set>

struct PairCompare {
    bool operator()(const std::pair<int, int>& a, const std::pair<int, int>& b) const {
        return a.second < b.second; // Sort based on second element of the pair
    }
};

int main() {
    std::set<std::pair<int, int>, PairCompare> s = {{1, 30}, {2, 10}, {3, 20}};

    std::cout << "Pairs sorted by second value: ";
    for (const auto& p : s) {
        std::cout << "(" << p.first << ", " << p.second << ") ";
    }
    std::cout << std::endl;

    return 0;
}
