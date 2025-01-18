#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> numbers = {100, 200, 300, 400, 500};

    auto rbegin = std::make_reverse_iterator(numbers.end());
    auto rend = std::make_reverse_iterator(numbers.begin());

    std::cout << "Reversed vector using make_reverse_iterator: ";
    for (auto it = rbegin; it != rend; ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
