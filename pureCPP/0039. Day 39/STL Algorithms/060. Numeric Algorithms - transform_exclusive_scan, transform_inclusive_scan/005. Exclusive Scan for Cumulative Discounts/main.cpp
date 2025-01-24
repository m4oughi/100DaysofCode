#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> prices{100, 200, 300, 400};
    std::vector<double> result(prices.size());

    std::transform_exclusive_scan(prices.begin(), prices.end(), result.begin(), 0.0, std::plus<>(), [](int price) {
        return price * 0.9; // Apply 10% discount
    });

    std::cout << "Cumulative discounts: ";
    for (double price : result) std::cout << price << " ";
    // Output: 0 90 270 540
}
