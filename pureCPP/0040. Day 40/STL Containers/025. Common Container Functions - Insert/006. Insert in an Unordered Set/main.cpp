#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> myUnorderedSet = {10, 20, 30};

    // Insert new elements
    myUnorderedSet.insert(40);
    myUnorderedSet.insert(20);  // Duplicate, won't be inserted

    // Output the unordered set
    std::cout << "Unordered Set after insert: ";
    for (int val : myUnorderedSet) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
