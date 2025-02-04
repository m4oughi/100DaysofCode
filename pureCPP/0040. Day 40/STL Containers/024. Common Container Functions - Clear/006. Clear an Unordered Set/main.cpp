#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> myUnorderedSet = {5, 10, 15};

    std::cout << "Before clear, size: " << myUnorderedSet.size() << std::endl;

    // Clear the unordered set
    myUnorderedSet.clear();

    std::cout << "After clear, size: " << myUnorderedSet.size() << std::endl;  // Output: After clear, size: 0

    return 0;
}
