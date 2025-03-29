#include <iostream>
#include <ranges>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    auto firstThree = vec | std::views::take(3);

    for (int n : firstThree) {
        std::cout << n << " ";
    }
    std::cout << '\n';
}
