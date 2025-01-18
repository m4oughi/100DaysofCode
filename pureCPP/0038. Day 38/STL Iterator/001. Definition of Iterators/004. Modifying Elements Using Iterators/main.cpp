#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40};

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        *it += 10; // Modify each element
    }

    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
