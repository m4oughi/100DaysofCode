#include <vector>
#include <iostream>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    for (const auto& num : numbers) {  // const auto& deduces that num is a const l-value reference
        std::cout << num << " ";  // Output: 10 20 30 40 50
    }
}
