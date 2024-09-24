#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30};

    // Directly modifying a temporary is not possible with range-based for loops.
    // However, we can use move semantics to demonstrate handling r-value references.
    std::vector<int> numbers2 = {40, 50, 60};
    auto numbers3 = std::move(numbers2);  // Move semantics

    for (auto& num : numbers3) {  // auto& deduces that num is an l-value reference
        num += 10;  // Modify each element
    }

    for (const auto& num : numbers3) {
        std::cout << num << " ";  // Output: 50 60 70
    }
}
