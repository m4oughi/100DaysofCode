#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> us = {1, 2, 3, 4, 5};

    if (us.find(3) != us.end()) {
        std::cout << "Element 3 exists in the unordered set." << std::endl;
    } else {
        std::cout << "Element 3 is not found." << std::endl;
    }

    return 0;
}
