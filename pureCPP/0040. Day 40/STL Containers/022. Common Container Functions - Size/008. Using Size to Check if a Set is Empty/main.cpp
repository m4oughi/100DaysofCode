#include <iostream>
#include <set>

int main() {
    std::set<int> mySet = {10, 20, 30};

    // Check if the set is empty
    if (mySet.size() == 0) {
        std::cout << "Set is empty." << std::endl;
    } else {
        std::cout << "Set is not empty, size: " << mySet.size() << std::endl;  // Output: 3
    }

    return 0;
}
