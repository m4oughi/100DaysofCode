#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> values = {1, 2, 3, 4};
    std::vector<int> weights = {2, 4, 6, 8};

    int weighted_sum = std::inner_product(values.begin(), values.end(), weights.begin(), 0);

    std::cout << "Weighted sum: " << weighted_sum << "\n"; // Output: 60
    return 0;
}
