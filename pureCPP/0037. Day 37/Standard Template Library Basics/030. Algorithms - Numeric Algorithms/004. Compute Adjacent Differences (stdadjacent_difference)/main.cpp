#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40};
    std::vector<int> differences(numbers.size());

    std::adjacent_difference(numbers.begin(), numbers.end(), differences.begin());

    std::cout << "Adjacent differences: ";
    for (int n : differences) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    return 0;
}
