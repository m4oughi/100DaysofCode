#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_multiset<int> ums = {1, 2, 2, 3, 3, 3};

    auto range = ums.equal_range(3);

    std::cout << "All occurrences of 3:\n";
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
