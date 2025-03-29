#include <iostream>
#include <vector>
#include <ranges>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    auto reversed = numbers | std::views::reverse;

    for (int num : reversed)
        std::cout << num << " ";

    return 0;
}
