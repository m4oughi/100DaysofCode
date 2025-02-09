#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> us = {10, 20, 30, 40};

    std::cout << "Before erasing 20: ";
    for (int num : us) std::cout << num << " ";
    std::cout << std::endl;

    us.erase(20);

    std::cout << "After erasing 20: ";
    for (int num : us) std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}
