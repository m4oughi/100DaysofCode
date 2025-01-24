#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<double> stock_prices = {100, 102, 105, 110};
    std::vector<double> percentage_change(stock_prices.size());

    std::partial_sum(stock_prices.begin(), stock_prices.end(), percentage_change.begin(),
                     [](double previous, double current) {
                         return previous + ((current - previous) / previous) * 100;
                     });

    std::cout << "Cumulative percentage change: ";
    for (double num : percentage_change) std::cout << num << " ";
    // Output: Cumulative percentage change: 100 102 105 110
    return 0;
}
