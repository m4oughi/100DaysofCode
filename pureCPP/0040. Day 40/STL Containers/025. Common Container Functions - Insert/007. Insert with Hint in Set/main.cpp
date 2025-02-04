#include <iostream>
#include <set>

int main() {
    std::set<int> mySet = {10, 20, 30};

    // Hint is passed to optimize insertion
    auto it = mySet.find(20);
    mySet.insert(it, 15);  // Inserting 15 near the hint position

    // Output the set after insertion
    std::cout << "Set after insert with hint: ";
    for (int val : mySet) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
