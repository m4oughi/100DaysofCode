#include <iostream>
#include <set>

int main() {
    std::set<int> mySet = {10, 20, 30};

    // Check if the set is empty
    if (mySet.empty()) {
        std::cout << "Set is empty." << std::endl;
    } else {
        std::cout << "Set is not empty." << std::endl;  // Output: Set is not empty.
    }

    return 0;
}
