#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> uset;

    if (uset.empty()) {
        std::cout << "The unordered set is empty.\n";
    }

    uset.insert(100);
    
    if (!uset.empty()) {
        std::cout << "Now the unordered set contains elements.\n";
    }

    return 0;
}
