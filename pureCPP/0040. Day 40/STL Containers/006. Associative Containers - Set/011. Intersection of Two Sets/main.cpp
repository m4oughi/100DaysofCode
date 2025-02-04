#include <iostream>
#include <set>
#include <algorithm>

int main() {
    std::set<int> set1 = {1, 2, 3};
    std::set<int> set2 = {2, 3, 4};

    std::set<int> intersectionSet;

    std::set_intersection(
        set1.begin(), set1.end(),
        set2.begin(), set2.end(),
        std::inserter(intersectionSet, intersectionSet.begin()));

    for (int i : intersectionSet) {
        std::cout << i << " ";
    }

    return 0;
}
