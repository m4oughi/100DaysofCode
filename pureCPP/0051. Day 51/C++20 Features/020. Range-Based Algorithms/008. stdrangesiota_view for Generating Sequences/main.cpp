#include <iostream>
#include <ranges>

int main() {
    auto numbers = std::views::iota(1, 6);  // Generates 1 to 5

    for (int num : numbers)
        std::cout << num << " ";

    return 0;
}
