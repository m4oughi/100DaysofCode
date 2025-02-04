#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_multiset<std::string> ums = {"apple", "banana", "cherry", "banana"};

    for (auto it = ums.begin(); it != ums.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
