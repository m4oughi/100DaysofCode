#include <iostream>
#include <vector>
#include <numeric>
#include <execution>

int main() {
    std::vector<int> data(100000, 1);  // Large vector with 100,000 elements, all set to 1

    // Parallel reduction to calculate the sum
    int sum = std::reduce(std::execution::par, data.begin(), data.end(), 0);

    std::cout << "Sum of elements (parallel reduction): " << sum << std::endl;

    return 0;
}
