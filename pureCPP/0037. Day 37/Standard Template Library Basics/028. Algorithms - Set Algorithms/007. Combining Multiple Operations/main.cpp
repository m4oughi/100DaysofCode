#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> set1 = {1, 2, 3, 4, 5};
    std::vector<int> set2 = {3, 4, 5, 6, 7};

    // Union
    std::vector<int> unionSet;
    std::set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(unionSet));

    // Intersection
    std::vector<int> intersectionSet;
    std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(intersectionSet));

    // Difference
    std::vector<int> differenceSet;
    std::set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(differenceSet));

    std::cout << "Union: ";
    for (int num : unionSet) std::cout << num << " ";
    std::cout << "\nIntersection: ";
    for (int num : intersectionSet) std::cout << num << " ";
    std::cout << "\nDifference: ";
    for (int num : differenceSet) std::cout << num << " ";
    std::cout << "\n";

    return 0;
}
