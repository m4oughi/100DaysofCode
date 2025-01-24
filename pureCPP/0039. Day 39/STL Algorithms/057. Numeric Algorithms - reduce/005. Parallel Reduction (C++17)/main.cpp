#include <iostream>
#include <vector>
#include <numeric>
#include <execution>

int main() {
    std::vector<int> vec(100000, 1); // Vector of 100,000 elements, all 1

    int sum = std::reduce(std::execution::par, vec.begin(), vec.end());

    std::cout << "Parallel sum: " << sum << std::endl;
    // Output: Parallel sum: 100000
    return 0;
}
