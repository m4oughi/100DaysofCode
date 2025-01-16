#include <iostream>
#include <unordered_multiset>

int main() {
    std::unordered_multiset<int> set1 = {1, 2, 3};
    std::unordered_multiset<int> set2 = {3, 4, 5};

    std::unordered_multiset<int> union_set = set1;
    union_set.insert(set2.begin(), set2.end());

    std::cout << "Union of sets: ";
    for (int num : union_set) {
        std::cout << num << " ";
    }
    return 0;
}
