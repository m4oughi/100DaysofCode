#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4};
    std::vector<int> inclusiveSums(numbers.size());

    std::inclusive_scan(numbers.begin(), numbers.end(), inclusiveSums.begin());

    std::cout << "Inclusive scan: ";
    for (int n : inclusiveSums) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    return 0;
}
