#include <iostream>
#include <set>
#include <algorithm>

int main() {
    std::set<int> set1 = {1, 2, 3, 4};
    std::set<int> set2 = {3, 4, 5, 6};

    std::set<int> intersection;
    std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(),
                          std::inserter(intersection, intersection.begin()));

    for (int num : intersection) {
        std::cout << num << " ";
    }
    return 0;
}
