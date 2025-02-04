#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_multiset<int> ums = {5, 10, 15, 10, 20};

    auto it = ums.find(10);
    if (it != ums.end()) {
        std::cout << "Element 10 found.\n";
    } else {
        std::cout << "Element 10 not found.\n";
    }

    return 0;
}
