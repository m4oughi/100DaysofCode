#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec = {10, 20, 30};
    std::vector<int> weights = {1, 2, 3};

    int weighted_sum = std::reduce(vec.begin(), vec.end(), 0, 
                                   [&weights, idx = 0](int sum, int val) mutable {
                                       return sum + val * weights[idx++];
                                   });

    std::cout << "Weighted sum: " << weighted_sum << std::endl;
    // Output: Weighted sum: 140
    return 0;
}
