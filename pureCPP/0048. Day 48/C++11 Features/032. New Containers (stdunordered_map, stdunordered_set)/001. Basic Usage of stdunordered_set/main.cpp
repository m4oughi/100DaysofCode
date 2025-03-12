#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> uset = {10, 20, 30, 40};

    // Insert a new element
    uset.insert(50);

    // Check existence
    if (uset.find(20) != uset.end()) {
        std::cout << "20 exists in the unordered_set\n";
    }

    // Iterate over elements
    for (int num : uset) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
