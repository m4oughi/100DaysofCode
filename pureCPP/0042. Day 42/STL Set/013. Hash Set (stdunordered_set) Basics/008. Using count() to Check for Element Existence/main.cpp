#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> us = {1, 2, 3, 4, 5};

    std::cout << "Count of 3: " << us.count(3) << std::endl;  // 1
    std::cout << "Count of 10: " << us.count(10) << std::endl; // 0

    return 0;
}
