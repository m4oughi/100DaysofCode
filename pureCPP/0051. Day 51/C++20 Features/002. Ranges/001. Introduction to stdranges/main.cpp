#include <iostream>
#include <ranges>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    for (auto it = std::ranges::begin(vec); it != std::ranges::end(vec); ++it) {
        std::cout << *it << " ";
    }
    std::cout << '\n';
}
