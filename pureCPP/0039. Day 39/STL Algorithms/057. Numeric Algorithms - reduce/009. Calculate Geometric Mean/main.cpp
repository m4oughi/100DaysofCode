#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

int main() {
    std::vector<double> vec = {2.0, 4.0, 8.0};

    double product = std::reduce(vec.begin(), vec.end(), 1.0, std::multiplies<>());
    double geometric_mean = std::pow(product, 1.0 / vec.size());

    std::cout << "Geometric mean: " << geometric_mean << std::endl;
    // Output: Geometric mean: 4
    return 0;
}
