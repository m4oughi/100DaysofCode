#include <iostream>
#include <ranges>

int main() {
    auto numbers = std::views::iota(1, 6); // Generates [1,2,3,4,5]

    for (int n : numbers) {
        std::cout << n << " ";
    }
    std::cout << '\n';
}
