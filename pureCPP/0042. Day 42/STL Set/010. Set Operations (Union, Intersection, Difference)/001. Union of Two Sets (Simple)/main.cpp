#include <iostream>
#include <set>

int main() {
    std::set<int> set1 = {1, 2, 3, 4};
    std::set<int> set2 = {3, 4, 5, 6};

    std::set<int> unionSet = set1;

    for (int num : set2) {
        unionSet.insert(num);  // Insert elements from set2
    }

    std::cout << "Union: ";
    for (int num : unionSet) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
