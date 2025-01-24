#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> values = {10, 20, 30};
    std::vector<int> weights = {1, 2, 3};

    int total_weight = std::accumulate(weights.begin(), weights.end(), 0);
    double weighted_average = static_cast<double>(
        std::inner_product(values.begin(), values.end(), weights.begin(), 0)) / total_weight;

    std::cout << "Weighted average: " << weighted_average << "\n"; // Output: 23.3333
    return 0;
}
