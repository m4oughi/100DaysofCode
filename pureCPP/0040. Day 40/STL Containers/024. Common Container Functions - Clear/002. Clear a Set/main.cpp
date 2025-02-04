#include <iostream>
#include <set>

int main() {
    std::set<int> mySet = {10, 20, 30};

    std::cout << "Before clear, size: " << mySet.size() << std::endl;

    // Clear the set
    mySet.clear();

    std::cout << "After clear, size: " << mySet.size() << std::endl;  // Output: After clear, size: 0

    return 0;
}
