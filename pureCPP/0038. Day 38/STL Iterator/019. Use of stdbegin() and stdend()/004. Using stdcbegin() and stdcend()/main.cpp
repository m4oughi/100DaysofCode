#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {100, 200, 300};

    std::cout << "Using const iterators: ";
    for (auto it = std::cbegin(numbers); it != std::cend(numbers); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
