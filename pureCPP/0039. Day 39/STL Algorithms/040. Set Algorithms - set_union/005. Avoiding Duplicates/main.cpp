#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> set1 = {1, 2, 2, 3};
    std::vector<int> set2 = {3, 4, 4, 5};
    std::vector<int> result;

    std::set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(result));

    std::cout << "Union (no duplicates): ";
    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}
