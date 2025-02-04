#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> myUnorderedSet = {5, 10, 15};

    // Check if the unordered set is empty
    if (myUnorderedSet.empty()) {
        std::cout << "Unordered set is empty." << std::endl;
    } else {
        std::cout << "Unordered set is not empty." << std::endl;  // Output: Unordered set is not empty.
    }

    return 0;
}
