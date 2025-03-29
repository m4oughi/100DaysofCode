#include <iostream>
#include <ranges>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    auto squared = vec | std::views::transform([](int x) {
        std::cout << "Computing square of " << x << '\n';
        return x * x;
    });

    std::cout << "Nothing is computed yet!\n";
    
    for (int n : squared) {
        std::cout << "Result: " << n << '\n';
    }
}
