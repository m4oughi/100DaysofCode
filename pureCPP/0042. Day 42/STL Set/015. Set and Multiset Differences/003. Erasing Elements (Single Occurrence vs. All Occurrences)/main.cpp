#include <iostream>
#include <set>

int main() {
    std::multiset<int> ms = {1, 2, 2, 3, 4, 2};

    std::cout << "Before erasing 2: ";
    for (int num : ms) std::cout << num << " ";

    ms.erase(ms.find(2));  // Erases only one occurrence of 2

    std::cout << "\nAfter erasing one occurrence of 2: ";
    for (int num : ms) std::cout << num << " ";

    ms.erase(2);  // Erases all occurrences of 2

    std::cout << "\nAfter erasing all occurrences of 2: ";
    for (int num : ms) std::cout << num << " ";

    return 0;
}
