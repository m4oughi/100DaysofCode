#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};

    auto newEnd = std::unique(numbers.begin(), numbers.end(), [](int a, int b) {
        return a == b;
    });

    numbers.erase(newEnd, numbers.end());

    for (int n : numbers) {
        std::cout << n << " ";
    }
    // Outputs: 1 2 3 4

    return 0;
}
