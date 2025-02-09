#include <iostream>
#include <set>
#include <algorithm>

bool areDisjoint(const std::set<int>& set1, const std::set<int>& set2) {
    return std::none_of(set1.begin(), set1.end(), [&](int num) {
        return set2.find(num) != set2.end();
    });
}

int main() {
    std::set<int> set1 = {1, 2, 3};
    std::set<int> set2 = {4, 5, 6};

    if (areDisjoint(set1, set2)) {
        std::cout << "The sets are disjoint (no common elements)." << std::endl;
    } else {
        std::cout << "The sets have common elements." << std::endl;
    }

    return 0;
}
