#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<double> vec = {10.0, 20.0, 30.0, 40.0};
    std::vector<double> result(vec.size());

    std::partial_sum(vec.begin(), vec.end(), result.begin());

    std::cout << "Running averages: ";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << result[i] / (i + 1) << " ";
    }
    // Output: Running averages: 10 15 20 25
    return 0;
}
