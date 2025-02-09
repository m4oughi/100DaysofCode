#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> us = {10, 20, 30, 40, 50};

    std::cout << "Unordered Set elements: ";
    for (auto it = us.begin(); it != us.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
