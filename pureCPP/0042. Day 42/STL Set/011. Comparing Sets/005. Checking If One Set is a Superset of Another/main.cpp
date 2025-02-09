#include <iostream>
#include <set>
#include <algorithm>

bool isSuperset(const std::set<int>& bigSet, const std::set<int>& smallSet) {
    return std::includes(bigSet.begin(), bigSet.end(), smallSet.begin(), smallSet.end());
}

int main() {
    std::set<int> set1 = {1, 2, 3, 4, 5};
    std::set<int> set2 = {2, 3};

    if (isSuperset(set1, set2)) {
        std::cout << "Set1 is a superset of Set2." << std::endl;
    } else {
        std::cout << "Set1 is not a superset of Set2." << std::endl;
    }

    return 0;
}
