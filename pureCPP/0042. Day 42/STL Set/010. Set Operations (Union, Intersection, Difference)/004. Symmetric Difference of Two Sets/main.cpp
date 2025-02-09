#include <iostream>
#include <set>

int main() {
    std::set<int> set1 = {1, 2, 3, 4};
    std::set<int> set2 = {3, 4, 5, 6};

    std::set<int> symDifferenceSet;

    for (int num : set1) {
        if (set2.find(num) == set2.end()) {
            symDifferenceSet.insert(num);
        }
    }

    for (int num : set2) {
        if (set1.find(num) == set1.end()) {
            symDifferenceSet.insert(num);
        }
    }

    std::cout << "Symmetric Difference: ";
    for (int num : symDifferenceSet) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
