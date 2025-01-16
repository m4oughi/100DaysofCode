#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> set1 = {1, 3, 5};
    std::vector<int> set2 = {2, 3, 5};
    std::vector<int> result;

    std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(result));

    std::cout << "Intersection: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
