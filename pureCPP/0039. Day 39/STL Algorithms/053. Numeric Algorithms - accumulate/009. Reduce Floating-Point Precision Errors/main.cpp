#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<double> values = {0.1, 0.2, 0.3, 0.4};
    double sum = std::accumulate(values.begin(), values.end(), 0.0);

    std::cout << "Accurate floating-point sum: " << sum << "\n"; // Output: 1
    return 0;
}
