#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8};

    auto newEnd = std::remove_if(numbers.begin(), numbers.end(), [](int n) {
        return n % 2 != 0;
    });

    numbers.erase(newEnd, numbers.end());

    for (int n : numbers) {
        std::cout << n << " ";
    }
    // Outputs: 2 4 6 8

    return 0;
}
