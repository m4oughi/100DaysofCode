#include <iostream>
#include <set>
#include <utility>

int main() {
    std::set<std::pair<int, int>> s;

    s.insert({1, 2});
    s.insert({2, 3});
    s.insert({1, 2}); // Duplicate, will not be added

    for (const auto& p : s) {
        std::cout << "(" << p.first << ", " << p.second << ") ";
    }

    return 0;
}
