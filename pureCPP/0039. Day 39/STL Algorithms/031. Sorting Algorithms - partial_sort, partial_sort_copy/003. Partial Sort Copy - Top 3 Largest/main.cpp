#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 5, 2, 8, 12, 1, 6};
    std::vector<int> topNumbers(3);

    std::partial_sort_copy(numbers.begin(), numbers.end(), topNumbers.begin(), topNumbers.end(), std::greater<int>());

    std::cout << "Top 3 largest numbers: ";
    for (int num : topNumbers) {
        std::cout << num << " ";
    }
    return 0;
}
