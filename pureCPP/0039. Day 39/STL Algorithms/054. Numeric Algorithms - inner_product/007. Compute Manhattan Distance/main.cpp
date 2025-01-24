#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

int main() {
    std::vector<int> point1 = {1, 2, 3};
    std::vector<int> point2 = {4, 0, -1};

    int manhattan_distance = std::inner_product(point1.begin(), point1.end(), point2.begin(), 0,
        std::plus<>(),                // Accumulate absolute differences
        [](int x, int y) { return std::abs(x - y); });

    std::cout << "Manhattan distance: " << manhattan_distance << "\n"; // Output: 9
    return 0;
}
