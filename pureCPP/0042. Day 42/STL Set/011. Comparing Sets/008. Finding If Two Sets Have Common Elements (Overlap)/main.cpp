#include <iostream>
#include <set>
#include <algorithm>

bool hasCommonElements(const std::set<int>& set1, const std::set<int>& set2) {
    for (int num : set1) {
        if (set2.find(num) != set2.end()) {
            return true;
        }
    }
    return false;
}

int main() {
    std::set<int> set1 = {1, 2, 3};
    std::set<int> set2 = {3, 4, 5};

    if (hasCommonElements(set1, set2)) {
        std::cout << "The sets have common elements." << std::endl;
    } else {
        std::cout << "The sets have no common elements." << std::endl;
    }

    return 0;
}
