#include <iostream>
#include <ranges>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};

    auto processed = vec 
                    | std::views::filter([](int x) { return x % 2 == 0; })
                    | std::views::transform([](int x) { return x * x; });

    for (int n : processed) {
        std::cout << n << " ";
    }
    std::cout << '\n';
}
