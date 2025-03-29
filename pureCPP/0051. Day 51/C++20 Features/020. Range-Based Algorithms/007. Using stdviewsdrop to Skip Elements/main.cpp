#include <iostream>
#include <vector>
#include <ranges>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    auto skipped = numbers | std::views::drop(2);

    for (int num : skipped)
        std::cout << num << " ";

    return 0;
}
