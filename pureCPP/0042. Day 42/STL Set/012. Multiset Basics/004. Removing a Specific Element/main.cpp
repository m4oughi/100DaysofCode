#include <iostream>
#include <set>

int main() {
    std::multiset<int> ms = {10, 20, 20, 30, 30, 30};

    std::cout << "Before removing 20: ";
    for (int num : ms) std::cout << num << " ";
    std::cout << std::endl;

    ms.erase(20);  // Removes all occurrences of 20

    std::cout << "After removing 20: ";
    for (int num : ms) std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}
