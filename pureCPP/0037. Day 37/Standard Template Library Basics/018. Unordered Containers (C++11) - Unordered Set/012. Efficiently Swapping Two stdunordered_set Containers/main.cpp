#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> set1 = {1, 2, 3};
    std::unordered_set<int> set2 = {4, 5, 6};

    set1.swap(set2);

    std::cout << "Set1: ";
    for (int num : set1) std::cout << num << " ";

    std::cout << "\nSet2: ";
    for (int num : set2) std::cout << num << " ";
    return 0;
}
