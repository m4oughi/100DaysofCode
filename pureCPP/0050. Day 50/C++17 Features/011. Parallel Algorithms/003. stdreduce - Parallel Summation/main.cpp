#include <iostream>
#include <vector>
#include <numeric>
#include <execution>

int main() {
    std::vector<int> data(100, 1);  // 100 elements, each 1

    int sum = std::reduce(std::execution::par, data.begin(), data.end());

    std::cout << "Sum: " << sum << '\n';

    return 0;
}
