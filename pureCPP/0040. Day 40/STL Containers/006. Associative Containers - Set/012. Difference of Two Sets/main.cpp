#include <iostream>
#include <set>
#include <algorithm>

int main() {
    std::set<int> set1 = {1, 2, 3};
    std::set<int> set2 = {3, 4, 5};

    std::set<int> differenceSet;

    std::set_difference(
        set1.begin(), set1.end(),
        set2.begin(), set2.end(),
        std::inserter(differenceSet, differenceSet.begin()));

    for (int i : differenceSet) {
        std::cout << i << " ";
    }

    return 0;
}
