#include <iostream>
#include <set>

int main() {
    std::set<int> set1 = {1, 2, 3, 4, 5};
    std::set<int> set2 = {3, 4, 6};

    std::set<int> differenceSet;

    for (int num : set1) {
        if (set2.find(num) == set2.end()) {
            differenceSet.insert(num);
        }
    }

    std::cout << "Difference (Set1 - Set2): ";
    for (int num : differenceSet) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
