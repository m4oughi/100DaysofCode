#include <iostream>
#include <ranges>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};

    auto evenNumbers = vec | std::views::filter([](int x) { return x % 2 == 0; });

    for (int n : evenNumbers) {
        std::cout << n << " ";
    }
    std::cout << '\n';
}
