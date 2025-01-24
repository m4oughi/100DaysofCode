#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>

int main() {
    std::vector<double> prices = {19.99, 5.49, 3.50, 12.99};
    std::vector<double> exclusive_result(prices.size());

    std::exclusive_scan(prices.begin(), prices.end(), exclusive_result.begin(), 0.0);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Exclusive Scan (Running Total): ";
    for (double price : exclusive_result) {
        std::cout << price << " ";
    }
    // Output: 0.00 19.99 25.48 28.98

    return 0;
}
