#include <iostream>
#include <vector>
#include <ranges>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8};

    auto even_numbers = numbers | std::views::filter([](int n) { return n % 2 == 0; });

    for (int num : even_numbers)
        std::cout << num << " ";

    return 0;
}
