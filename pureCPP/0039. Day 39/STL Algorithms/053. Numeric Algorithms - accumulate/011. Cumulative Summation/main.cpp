#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<int> cumulative(numbers.size());

    std::partial_sum(numbers.begin(), numbers.end(), cumulative.begin());

    std::cout << "Cumulative sums: ";
    for (int val : cumulative) {
        std::cout << val << " ";
    }
    std::cout << "\n"; // Output: 1 3 6 10 15
    return 0;
}
