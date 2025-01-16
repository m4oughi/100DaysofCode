#include <iostream>
#include <unordered_multiset>

int main() {
    std::unordered_multiset<int> set1 = {1, 2, 3, 3};
    std::unordered_multiset<int> set2 = {2, 3, 4, 3};

    std::unordered_multiset<int> intersection_set;
    for (int num : set1) {
        if (set2.count(num) > 0) {
            intersection_set.insert(num);
            set2.erase(set2.find(num));  // Erase one occurrence to handle duplicates
        }
    }

    std::cout << "Intersection of sets: ";
    for (int num : intersection_set) {
        std::cout << num << " ";
    }
    return 0;
}
