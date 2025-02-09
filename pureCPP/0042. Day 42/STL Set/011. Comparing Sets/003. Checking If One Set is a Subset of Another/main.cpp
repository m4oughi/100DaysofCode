#include <iostream>
#include <set>
#include <algorithm>

bool isSubset(const std::set<int>& smallSet, const std::set<int>& bigSet) {
    return std::includes(bigSet.begin(), bigSet.end(), smallSet.begin(), smallSet.end());
}

int main() {
    std::set<int> set1 = {1, 2, 3};
    std::set<int> set2 = {1, 2, 3, 4, 5};

    if (isSubset(set1, set2)) {
        std::cout << "Set1 is a subset of Set2." << std::endl;
    } else {
        std::cout << "Set1 is not a subset of Set2." << std::endl;
    }

    return 0;
}
