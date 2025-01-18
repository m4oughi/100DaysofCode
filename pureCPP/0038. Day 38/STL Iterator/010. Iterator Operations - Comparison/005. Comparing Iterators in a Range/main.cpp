#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    auto start = numbers.begin() + 1; // Start from the second element
    auto end = numbers.end() - 1;    // End at the second last element

    std::cout << "Partial range iteration: ";
    for (auto it = start; it != end; ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
