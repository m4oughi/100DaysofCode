#include <iostream>
#include <set>

int main() {
    std::multiset<int> numbers = {10, 20, 20, 20, 30};

    auto range = numbers.equal_range(20);

    std::cout << "All occurrences of 20: ";
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << *it << " ";
    }
    return 0;
}