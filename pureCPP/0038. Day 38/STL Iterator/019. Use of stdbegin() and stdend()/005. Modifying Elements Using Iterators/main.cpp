#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30};

    for (auto it = std::begin(numbers); it != std::end(numbers); ++it) {
        *it *= 2; // Doubling each element
    }

    std::cout << "Modified vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
