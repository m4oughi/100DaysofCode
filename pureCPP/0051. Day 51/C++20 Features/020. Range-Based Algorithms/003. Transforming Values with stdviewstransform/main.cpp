#include <iostream>
#include <vector>
#include <ranges>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4};

    auto squared = numbers | std::views::transform([](int n) { return n * n; });

    for (int num : squared)
        std::cout << num << " ";

    return 0;
}
