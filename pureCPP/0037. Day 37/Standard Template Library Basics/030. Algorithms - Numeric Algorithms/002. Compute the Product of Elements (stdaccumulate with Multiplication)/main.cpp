#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4};

    int product = std::accumulate(numbers.begin(), numbers.end(), 1, std::multiplies<int>());

    std::cout << "Product of elements: " << product << "\n";

    return 0;
}
