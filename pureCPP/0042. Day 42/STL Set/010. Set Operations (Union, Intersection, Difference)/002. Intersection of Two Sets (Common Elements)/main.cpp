#include <iostream>
#include <set>

int main() {
    std::set<int> set1 = {1, 2, 3, 4};
    std::set<int> set2 = {3, 4, 5, 6};

    std::set<int> intersectionSet;

    for (int num : set1) {
        if (set2.find(num) != set2.end()) {
            intersectionSet.insert(num);
        }
    }

    std::cout << "Intersection: ";
    for (int num : intersectionSet) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
