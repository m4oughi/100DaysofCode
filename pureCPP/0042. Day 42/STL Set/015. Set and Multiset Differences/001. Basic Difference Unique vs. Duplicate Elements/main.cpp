#include <iostream>
#include <set>

int main() {
    std::set<int> s = {1, 2, 2, 3, 4};  // No duplicates allowed
    std::multiset<int> ms = {1, 2, 2, 3, 4};  // Allows duplicates

    std::cout << "Set: ";
    for (int num : s) std::cout << num << " ";

    std::cout << "\nMultiset: ";
    for (int num : ms) std::cout << num << " ";

    return 0;
}
