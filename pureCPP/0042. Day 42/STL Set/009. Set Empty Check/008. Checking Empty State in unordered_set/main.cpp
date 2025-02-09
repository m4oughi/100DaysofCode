#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> uset;

    if (uset.empty()) {
        std::cout << "Unordered set is empty!" << std::endl;
    }

    uset.insert(10);
    uset.insert(20);

    if (!uset.empty()) {
        std::cout << "Unordered set is no longer empty!" << std::endl;
    }

    return 0;
}
