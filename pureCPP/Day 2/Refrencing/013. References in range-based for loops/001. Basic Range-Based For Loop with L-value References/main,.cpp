#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    for (auto& num : numbers) {  // auto& deduces that num is an l-value reference
        num *= 2;  // Modify each element in the vector
    }

    for (const auto& num : numbers) {
        std::cout << num << " ";  // Output: 2 4 6 8 10
    }

    return 0;
}