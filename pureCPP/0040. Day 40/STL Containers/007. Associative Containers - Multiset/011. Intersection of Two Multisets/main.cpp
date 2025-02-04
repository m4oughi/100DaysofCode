#include <iostream>
#include <set>
#include <algorithm>

int main() {
    std::multiset<int> ms1 = {10, 20, 20, 30};
    std::multiset<int> ms2 = {20, 30, 30, 40};

    std::multiset<int> intersectionSet;

    std::set_intersection(
        ms1.begin(), ms1.end(),
        ms2.begin(), ms2.end(),
        std::inserter(intersectionSet, intersectionSet.begin()));

    for (int i : intersectionSet) {
        std::cout << i << " ";
    }

    return 0;
}
