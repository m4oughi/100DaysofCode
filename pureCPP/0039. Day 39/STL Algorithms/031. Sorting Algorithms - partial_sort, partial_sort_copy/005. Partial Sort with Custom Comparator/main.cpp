#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {7, 3, 9, 1, 4, 8};

    std::partial_sort(numbers.begin(), numbers.begin() + 3, numbers.end(), std::greater<int>());

    std::cout << "Top 3 largest numbers: ";
    for (int i = 0; i < 3; ++i) {
        std::cout << numbers[i] << " ";
    }
    return 0;
}
