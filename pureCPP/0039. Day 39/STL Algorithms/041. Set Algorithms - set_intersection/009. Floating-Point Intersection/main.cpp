#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<float> set1 = {1.1, 2.2, 3.3};
    std::vector<float> set2 = {2.2, 3.3, 4.4};
    std::vector<float> result;

    std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(result));

    std::cout << "Intersection: ";
    for (float num : result) {
        std::cout << num << " ";
    }

    return 0;
}
