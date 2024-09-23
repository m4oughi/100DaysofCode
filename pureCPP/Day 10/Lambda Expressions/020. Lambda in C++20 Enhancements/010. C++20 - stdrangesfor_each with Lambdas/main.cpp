#include <iostream>
#include <vector>
#include <ranges>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // C++20 ranges library with lambdas
    std::ranges::for_each(numbers, [](int& n) {
        n *= 2;
    });

    for (const auto& n : numbers) {
        std::cout << n << " "; // Outputs: 2 4 6 8 10
    }
    return 0;
}
