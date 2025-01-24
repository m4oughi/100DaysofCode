#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> set1 = {1, 2, 3};
    std::vector<int> set2 = {4, 5, 6};
    std::vector<int> result;

    std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(result));

    if (result.empty()) {
        std::cout << "No common elements.\n";
    } else {
        std::cout << "Intersection: ";
        for (int num : result) {
            std::cout << num << " ";
        }
    }

    return 0;
}
