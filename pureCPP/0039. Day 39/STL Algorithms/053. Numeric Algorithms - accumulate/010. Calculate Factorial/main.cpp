#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int n = 5;
    std::vector<int> numbers(n);
    std::iota(numbers.begin(), numbers.end(), 1);

    int factorial = std::accumulate(numbers.begin(), numbers.end(), 1, std::multiplies<>());

    std::cout << "Factorial of " << n << ": " << factorial << "\n"; // Output: 120
    return 0;
}
