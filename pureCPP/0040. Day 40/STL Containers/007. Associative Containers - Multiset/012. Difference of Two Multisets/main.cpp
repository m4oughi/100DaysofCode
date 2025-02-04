#include <iostream>
#include <set>
#include <algorithm>

int main() {
    std::multiset<int> ms1 = {10, 20, 20, 30};
    std::multiset<int> ms2 = {20, 30, 30, 40};

    std::multiset<int> differenceSet;

    std::set_difference(
        ms1.begin(), ms1.end(),
        ms2.begin(), ms2.end(),
        std::inserter(differenceSet, differenceSet.begin()));

    for (int i : differenceSet) {
        std::cout << i << " ";
    }

    return 0;
}
