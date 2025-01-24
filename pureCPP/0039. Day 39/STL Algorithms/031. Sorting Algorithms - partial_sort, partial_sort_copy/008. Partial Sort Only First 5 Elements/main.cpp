#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {20, 5, 15, 8, 12, 1, 25, 7, 18, 30};

    std::partial_sort(numbers.begin(), numbers.begin() + 5, numbers.end());

    std::cout << "Partially sorted first 5 elements: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << numbers[i] << " ";
    }
    return 0;
}
