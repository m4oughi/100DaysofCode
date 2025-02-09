#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> us = {5, 1, 3, 2, 4};

    std::cout << "Unordered Set elements: ";
    for (int num : us) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
