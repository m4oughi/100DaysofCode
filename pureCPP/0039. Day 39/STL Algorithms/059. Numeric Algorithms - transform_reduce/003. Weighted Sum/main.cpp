#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> values{10, 20, 30};
    std::vector<float> weights{0.2f, 0.5f, 0.3f};

    float weighted_sum = std::transform_reduce(values.begin(), values.end(), weights.begin(), 0.0f, std::plus<>(),
                                               [](int value, float weight) {
                                                   return value * weight;
                                               });

    std::cout << "Weighted sum: " << weighted_sum << '\n'; // Output: 20
}
