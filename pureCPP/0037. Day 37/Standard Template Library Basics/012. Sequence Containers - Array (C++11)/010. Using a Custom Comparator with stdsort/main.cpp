#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 5> numbers = {5, 3, 4, 1, 2};

    std::sort(numbers.begin(), numbers.end(), std::greater<int>()); // Descending order

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
