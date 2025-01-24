#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 5, 2, 8, 12, 1, 6};

    std::partial_sort(numbers.begin(), numbers.begin() + 3, numbers.end());

    std::cout << "Top 3 smallest numbers: ";
    for (int i = 0; i < 3; ++i) {
        std::cout << numbers[i] << " ";
    }
    return 0;
}
