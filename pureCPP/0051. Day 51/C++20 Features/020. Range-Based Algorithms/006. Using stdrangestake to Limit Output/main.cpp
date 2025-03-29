#include <iostream>
#include <vector>
#include <ranges>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    auto first_three = numbers | std::views::take(3);

    for (int num : first_three)
        std::cout << num << " ";

    return 0;
}
