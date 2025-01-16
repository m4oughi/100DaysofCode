#include <iostream>
#include <unordered_set>
#include <vector>

int main() {
    std::unordered_set<int> set1 = {1, 2, 3, 4};
    std::unordered_set<int> set2 = {3, 4, 5, 6};
    std::vector<int> intersection;

    for (int num : set1) {
        if (set2.find(num) != set2.end()) {
            intersection.push_back(num);
        }
    }

    std::cout << "Intersection: ";
    for (int num : intersection) {
        std::cout << num << " ";
    }
    return 0;
}
