#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4};

    std::cout << "Reverse order: ";
    for (auto it = std::rbegin(numbers); it != std::rend(numbers); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
