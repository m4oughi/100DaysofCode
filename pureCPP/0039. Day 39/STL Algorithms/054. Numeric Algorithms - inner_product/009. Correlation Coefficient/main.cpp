#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

int main() {
    std::vector<double> x = {1.0, 2.0, 3.0};
    std::vector<double> y = {2.0, 4.0, 6.0};

    double mean_x = std::accumulate(x.begin(), x.end(), 0.0) / x.size();
    double mean_y = std::accumulate(y.begin(), y.end(), 0.0) / y.size();

    double numerator = std::inner_product(x.begin(), x.end(), y.begin(), 0.0,
        std::plus<>(),
        [mean_x, mean_y](double a, double b) { return (a - mean_x) * (b - mean_y); });

    double denominator = std::sqrt(std::inner_product(x.begin(), x.end(), x.begin(), 0.0,
        std::plus<>(),
        [mean_x](double a, double) { return std::pow(a - mean_x, 2); }) *
        std::inner_product(y.begin(), y.end(), y.begin(), 0.0,
        std::plus<>(),
        [mean_y](double a, double) { return std::pow(a - mean_y, 2); }));

    double correlation = numerator / denominator;

    std::cout << "Correlation coefficient: " << correlation << "\n"; // Output: 1
    return 0;
}
