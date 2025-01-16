#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> set1 = {1, 3, 5, 7};
    std::vector<int> set2 = {3, 5, 9};
    std::vector<int> unionSet;

    std::set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(unionSet));

    for (int num : unionSet) {
        std::cout << num << " ";
    }
    return 0;
}
