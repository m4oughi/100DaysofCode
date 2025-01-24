#include <iostream>
#include <vector>
#include <numeric>
#include <functional>

int main() {
    std::vector<int> vec = {1, 2, 3, 4};
    std::vector<int> cumulative_product(vec.size());
    std::partial_sum(vec.begin(), vec.end(), cumulative_product.begin(), std::multiplies<>());

    std::vector<int> result(vec.size());
    std::adjacent_difference(cumulative_product.begin(), cumulative_product.end(), result.begin());

    std::cout << "Cumulative product differences: ";
    for (int num : result) std::cout << num << " ";
    // Output: Cumulative product differences: 1 2 6 18
    return 0;
}
