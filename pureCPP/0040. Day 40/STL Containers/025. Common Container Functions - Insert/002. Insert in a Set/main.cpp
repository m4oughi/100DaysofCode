#include <iostream>
#include <set>

int main() {
    std::set<int> mySet = {5, 10, 15};

    // Insert an element into the set
    mySet.insert(20);
    
    // Try inserting a duplicate value
    mySet.insert(10);  // This will not be inserted because it's a duplicate.

    // Output the set after insertion
    std::cout << "Set after insert: ";
    for (int val : mySet) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
