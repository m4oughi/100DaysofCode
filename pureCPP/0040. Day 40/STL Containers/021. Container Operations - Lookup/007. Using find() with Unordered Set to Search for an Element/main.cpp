#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> mySet = {10, 20, 30, 40};

    // Searching for element 20
    auto it = mySet.find(20);

    if (it != mySet.end()) {
        std::cout << "Element found: " << *it << std::endl; // Element found: 20
    } else {
        std::cout << "Element not found." << std::endl;
    }

    return 0;
}
