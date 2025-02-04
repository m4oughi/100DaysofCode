#include <iostream>
#include <set>

int main() {
    std::multiset<int> ms = {10, 20, 20, 30, 30, 30};

    auto range = ms.equal_range(30);

    std::cout << "Elements equal to 30: ";
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
