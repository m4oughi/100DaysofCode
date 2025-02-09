#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> us = {5, 10, 15, 20};

    std::cout << "Size of the unordered set: " << us.size() << std::endl;

    us.insert(25);
    std::cout << "Size after inserting 25: " << us.size() << std::endl;

    return 0;
}
