#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> stock_prices = {100, 102, 105, 110, 120};
    std::vector<int> slopes(stock_prices.size());

    std::adjacent_difference(stock_prices.begin(), stock_prices.end(), slopes.begin());

    std::cout << "Price trends: ";
    for (size_t i = 1; i < slopes.size(); ++i) { // Skip the first element
        std::cout << (slopes[i] > 0 ? "Up " : "Down ");
    }
    // Output: Price trends: Up Up Up Up
    return 0;
}
