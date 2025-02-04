#include <iostream>
#include <set>

int main() {
    std::set<int> mySet = {10, 20, 30};

    std::cout << "Set size before clear: " << mySet.size() << "\n"; // 3

    mySet.clear();  // Remove all elements from the set

    std::cout << "Set size after clear: " << mySet.size() << "\n"; // 0

    return 0;
}
