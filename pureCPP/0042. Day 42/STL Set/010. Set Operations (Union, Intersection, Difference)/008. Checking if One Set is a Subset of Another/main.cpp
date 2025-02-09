#include <iostream>
#include <set>
#include <algorithm>

bool isSubset(const std::set<int>& set1, const std::set<int>& set2) {
    return std::includes(set2.begin(), set2.end(), set1.begin(), set1.end());
}

int main() {
    std::set<int> set1 = {3, 4};
    std::set<int> set2 = {1, 2, 3, 4, 5};

    if (isSubset(set1, set2)) {
        std::cout << "Set1 is a subset of Set2" << std::endl;
    } else {
        std::cout << "Set1 is not a subset of Set2" << std::endl;
    }

    return 0;
}
