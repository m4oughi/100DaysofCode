#include <iostream>
#include <set>
#include <utility>

int main() {
    std::multiset<std::pair<int, int>> ms;

    ms.insert({1, 2});
    ms.insert({2, 3});
    ms.insert({1, 2}); // Duplicate allowed

    for (const auto& p : ms) {
        std::cout << "(" << p.first << ", " << p.second << ") ";
    }

    return 0;
}
