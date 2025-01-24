#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int product = std::accumulate(numbers.begin(), numbers.end(), 1, std::multiplies<>());

    std::cout << "Product: " << product << "\n"; // Output: 120
    return 0;
}
