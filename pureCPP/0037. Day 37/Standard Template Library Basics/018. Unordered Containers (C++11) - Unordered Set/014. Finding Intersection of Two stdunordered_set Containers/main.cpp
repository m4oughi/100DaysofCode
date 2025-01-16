#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> set1 = {1, 2, 3};
    std::unordered_set<int> set2 = {2, 3, 4};

    std::unordered_set<int> intersection_set;
    for (int num : set1) {
        if (set2.count(num)) {
            intersection_set.insert(num);
        }
    }

    std::cout << "Intersection of sets: ";
    for (int num : intersection_set) {
        std::cout << num << " ";
    }
    return 0;
}
