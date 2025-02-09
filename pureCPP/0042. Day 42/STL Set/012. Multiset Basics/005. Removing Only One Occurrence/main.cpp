#include <iostream>
#include <set>

int main() {
    std::multiset<int> ms = {5, 10, 10, 20};

    std::cout << "Before erasing one 10: ";
    for (int num : ms) std::cout << num << " ";
    std::cout << std::endl;

    auto it = ms.find(10);  // Finds the first occurrence
    if (it != ms.end()) {
        ms.erase(it);  // Erase only one occurrence
    }

    std::cout << "After erasing one 10: ";
    for (int num : ms) std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}
