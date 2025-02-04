#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_multiset<int> ums;

    if (ums.empty()) {
        std::cout << "The unordered multiset is empty.\n";
    }

    ums.insert(100);

    if (!ums.empty()) {
        std::cout << "Now the unordered multiset contains elements.\n";
    }

    return 0;
}
