#include <iostream>
#include <vector>
#include <numeric>
#include <execution>

int main() {
    std::vector<int> data = {1, 2, 3, 4, 5};

    int sum_of_squares = std::transform_reduce(
        std::execution::par, data.begin(), data.end(), 0,
        std::plus<>(), [](int x) { return x * x; });

    std::cout << "Sum of squares: " << sum_of_squares << '\n';

    return 0;
}
