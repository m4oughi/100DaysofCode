#include <iostream>
#include <set>
#include <algorithm>

int main() {
    std::multiset<int> set1 = {1, 2, 2, 3};
    std::multiset<int> set2 = {2, 2, 3, 4};

    std::multiset<int> intersection;
    std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(),
                          std::inserter(intersection, intersection.begin()));

    for (int num : intersection) {
        std::cout << num << " ";
    }
    return 0;
}
