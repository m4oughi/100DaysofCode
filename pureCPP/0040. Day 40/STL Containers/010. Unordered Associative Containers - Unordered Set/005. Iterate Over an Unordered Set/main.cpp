#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<std::string> uset = {"apple", "banana", "cherry"};

    for (auto it = uset.begin(); it != uset.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
