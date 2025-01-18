#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::cout << "Using range-based loop with std::begin() and std::end(): ";
    for (auto it = std::begin(numbers); it != std::end(numbers); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
