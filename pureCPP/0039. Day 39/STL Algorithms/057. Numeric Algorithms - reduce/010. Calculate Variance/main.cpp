#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

int main() {
    std::vector<double> data = {10.0, 20.0, 30.0, 40.0};
    double mean = std::reduce(data.begin(), data.end(), 0.0) / data.size();

    double variance = std::reduce(data.begin(), data.end(), 0.0, 
                                  [mean](double accum, double x) {
                                      return accum + (x - mean) * (x - mean);
                                  }) / data.size();

    std::cout << "Variance: " << variance << std::endl;
    // Output: Variance: 125
    return 0;
}
