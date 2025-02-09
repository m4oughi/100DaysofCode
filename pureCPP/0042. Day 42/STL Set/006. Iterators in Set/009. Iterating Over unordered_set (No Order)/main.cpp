#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> uset = {50, 20, 10, 40};

    std::cout << "Unordered set elements: ";
    for (auto it = uset.begin(); it != uset.end(); ++it) {
        std::cout << *it << " ";
    }
    return 0;
}
