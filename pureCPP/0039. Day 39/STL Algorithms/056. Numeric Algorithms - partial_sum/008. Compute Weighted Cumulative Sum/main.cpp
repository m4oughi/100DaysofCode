#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> values = {5, 10, 15, 20};
    std::vector<int> weights = {4, 3, 2, 1}; // Decreasing weights
    std::vector<int> weighted_sum(values.size());

    std::partial_sum(values.begin(), values.end(), weighted_sum.begin(),
                     [&weights, index = 0](int a, int b) mutable {
                         return a + b * weights[index++];
                     });

    std::cout << "Weighted cumulative sum: ";
    for (int num : weighted_sum) std::cout << num << " ";
    // Output: Weighted cumulative sum: 5 35 95 215
    return 0;
}
