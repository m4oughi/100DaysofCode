#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4};
    std::vector<int> exclusiveSums(numbers.size());

    std::exclusive_scan(numbers.begin(), numbers.end(), exclusiveSums.begin(), 0);

    std::cout << "Exclusive scan: ";
    for (int n : exclusiveSums) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    return 0;
}
