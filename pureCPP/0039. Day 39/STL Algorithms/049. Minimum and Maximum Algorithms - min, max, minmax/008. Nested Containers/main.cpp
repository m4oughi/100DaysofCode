#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main() {
    std::vector<std::vector<int>> vec = {{1, 2, 3}, {10, 20}, {4, 5, 6, 7}};

    auto sum = [](const std::vector<int>& v) {
        return std::accumulate(v.begin(), v.end(), 0);
    };

    auto minSum = *std::min_element(vec.begin(), vec.end(), [&](const auto& a, const auto& b) {
        return sum(a) < sum(b);
    });
    auto maxSum = *std::max_element(vec.begin(), vec.end(), [&](const auto& a, const auto& b) {
        return sum(a) < sum(b);
    });

    std::cout << "Minimum sum: " << sum(minSum) << "\n";
    std::cout << "Maximum sum: " << sum(maxSum) << "\n";

    return 0;
}
