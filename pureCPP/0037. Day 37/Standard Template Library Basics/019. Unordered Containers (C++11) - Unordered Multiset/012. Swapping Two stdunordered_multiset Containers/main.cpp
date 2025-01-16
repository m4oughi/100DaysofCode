#include <iostream>
#include <unordered_multiset>

int main() {
    std::unordered_multiset<int> set1 = {1, 2, 2};
    std::unordered_multiset<int> set2 = {3, 4, 4};

    set1.swap(set2);

    std::cout << "Set1: ";
    for (int num : set1) std::cout << num << " ";

    std::cout << "\nSet2: ";
    for (int num : set2) std::cout << num << " ";
    return 0;
}
