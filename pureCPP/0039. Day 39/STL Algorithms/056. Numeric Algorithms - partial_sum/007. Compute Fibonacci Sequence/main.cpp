#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> fibonacci(10, 1); // Initialize first two values as 1
    std::partial_sum(fibonacci.begin(), fibonacci.end() - 2, fibonacci.begin() + 2);

    std::cout << "Fibonacci sequence: ";
    for (int num : fibonacci) std::cout << num << " ";
    // Output: Fibonacci sequence: 1 1 2 3 5 8 13 21 34 55
    return 0;
}
