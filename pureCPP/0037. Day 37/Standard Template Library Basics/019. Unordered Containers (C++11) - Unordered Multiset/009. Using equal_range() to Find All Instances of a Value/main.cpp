#include <iostream>
#include <unordered_multiset>

int main() {
    std::unordered_multiset<int> numbers = {1, 2, 3, 3, 4, 5};

    auto range = numbers.equal_range(3);
    std::cout << "All occurrences of 3: ";
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << *it << " ";
    }
    return 0;
}
