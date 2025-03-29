#include <iostream>
#include <ranges>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8};

    auto result = numbers 
        | std::views::filter([](int n) { return n % 2 == 0; }) 
        | std::views::transform([](int n) { return n * n; }) 
        | std::views::reverse 
        | std::views::take(2);

    for (int num : result)
        std::cout << num << " ";

    return 0;
}
