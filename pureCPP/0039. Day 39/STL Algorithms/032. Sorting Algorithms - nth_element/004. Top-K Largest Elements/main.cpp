#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 5, 20, 15, 25, 8, 30};

    std::nth_element(numbers.begin(), numbers.begin() + 3, numbers.end(), std::greater<int>());
    std::sort(numbers.begin(), numbers.begin() + 3, std::greater<int>());

    std::cout << "Top 3 largest elements: ";
    for (int i = 0; i < 3; ++i) {
        std::cout << numbers[i] << " ";
    }
    return 0;
}
