#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        *it *= 3; // Multiply each element by 3
    }

    std::cout << "Modified vector: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
