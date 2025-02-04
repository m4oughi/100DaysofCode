#include <iostream>
#include <set>

int main() {
    std::set<int> mySet = {5, 15, 25, 35};

    std::cout << "Set elements: ";
    for (auto it = mySet.begin(); it != mySet.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
