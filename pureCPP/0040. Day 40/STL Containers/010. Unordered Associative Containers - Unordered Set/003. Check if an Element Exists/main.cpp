#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> uset = {1, 2, 3, 4, 5};

    if (uset.find(3) != uset.end()) {
        std::cout << "Element 3 found!\n";
    } else {
        std::cout << "Element 3 not found!\n";
    }

    if (uset.count(6)) {
        std::cout << "Element 6 exists!\n";
    } else {
        std::cout << "Element 6 does not exist!\n";
    }

    return 0;
}
