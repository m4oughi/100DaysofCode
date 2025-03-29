#include <iostream>
#include <ranges>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    auto reversed = vec | std::views::reverse;

    for (int n : reversed) {
        std::cout << n << " ";
    }
    std::cout << '\n';
}
