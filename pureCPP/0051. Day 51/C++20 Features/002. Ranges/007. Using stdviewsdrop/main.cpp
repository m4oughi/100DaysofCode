#include <iostream>
#include <ranges>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    auto withoutFirstTwo = vec | std::views::drop(2);

    for (int n : withoutFirstTwo) {
        std::cout << n << " ";
    }
    std::cout << '\n';
}
