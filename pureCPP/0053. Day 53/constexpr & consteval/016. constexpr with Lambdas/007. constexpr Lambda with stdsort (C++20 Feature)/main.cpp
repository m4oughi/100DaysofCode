#include <iostream>
#include <array>
#include <algorithm>

int main() {
    constexpr auto compare = [](int a, int b) { return a < b; };

    constexpr std::array<int, 5> numbers = {5, 2, 4, 1, 3};
    std::array<int, 5> sorted_numbers = numbers;
    
    std::sort(sorted_numbers.begin(), sorted_numbers.end(), compare);

    for (int num : sorted_numbers)
        std::cout << num << " ";

    std::cout << '\n';
}
