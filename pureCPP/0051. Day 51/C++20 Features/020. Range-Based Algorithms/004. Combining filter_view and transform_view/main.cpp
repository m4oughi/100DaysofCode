#include <iostream>
#include <vector>
#include <ranges>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6};

    auto odd_squares = numbers 
        | std::views::filter([](int n) { return n % 2 != 0; }) 
        | std::views::transform([](int n) { return n * n; });

    for (int num : odd_squares)
        std::cout << num << " ";

    return 0;
}
