#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7};

    std::reverse(numbers.rbegin() + 2, numbers.rend() - 2);

    std::cout << "Partially reversed vector: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
