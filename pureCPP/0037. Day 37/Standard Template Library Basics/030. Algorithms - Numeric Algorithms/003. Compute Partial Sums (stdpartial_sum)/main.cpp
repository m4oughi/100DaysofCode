#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4};
    std::vector<int> partialSums(numbers.size());

    std::partial_sum(numbers.begin(), numbers.end(), partialSums.begin());

    std::cout << "Partial sums: ";
    for (int n : partialSums) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    return 0;
}
