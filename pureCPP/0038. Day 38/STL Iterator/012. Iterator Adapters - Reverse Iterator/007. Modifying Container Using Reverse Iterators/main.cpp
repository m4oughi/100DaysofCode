#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        *it += 5; // Increment each element by 5
    }

    std::cout << "Modified vector: ";
    for (auto num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
