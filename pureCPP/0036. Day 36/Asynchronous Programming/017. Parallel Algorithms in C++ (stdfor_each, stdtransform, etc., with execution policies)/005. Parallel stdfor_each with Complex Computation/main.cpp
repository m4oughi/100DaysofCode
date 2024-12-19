#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>
#include <numeric>

// Function to compute factorial
int factorial(int n) {
    return std::accumulate(1, n + 1, 1, std::multiplies<int>());
}

int main() {
    std::vector<int> data = {5, 7, 10, 12, 15};

    // Parallel for_each to calculate factorial of each element
    std::for_each(std::execution::par, data.begin(), data.end(), [](int& n) {
        n = factorial(n);
    });

    std::cout << "Factorials computed in parallel: ";
    for (int n : data) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}
