#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::vector<int>> set1 = {{1, 2}, {3, 4}, {5, 6}};
    std::vector<std::vector<int>> set2 = {{3, 4}, {5, 6}, {7, 8}};
    std::vector<std::vector<int>> result;

    std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(result),
                          [](const std::vector<int>& a, const std::vector<int>& b) { return a < b; });

    std::cout << "Intersection of nested containers: ";
    for (const auto& vec : result) {
        std::cout << "{";
        for (int num : vec) {
            std::cout << num << " ";
        }
        std::cout << "} ";
    }

    return 0;
}
