#include <iostream>
#include <set>
#include <algorithm>

bool isProperSubset(const std::set<int>& smallSet, const std::set<int>& bigSet) {
    return isSubset(smallSet, bigSet) && (smallSet.size() < bigSet.size());
}

int main() {
    std::set<int> set1 = {1, 2};
    std::set<int> set2 = {1, 2, 3};

    if (isProperSubset(set1, set2)) {
        std::cout << "Set1 is a proper subset of Set2." << std::endl;
    } else {
        std::cout << "Set1 is not a proper subset of Set2." << std::endl;
    }

    return 0;
}
