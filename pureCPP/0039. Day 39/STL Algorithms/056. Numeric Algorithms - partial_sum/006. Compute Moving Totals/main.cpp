#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> daily_sales = {5, 10, 15, 20, 25};
    std::vector<int> cumulative_sales(daily_sales.size());

    std::partial_sum(daily_sales.begin(), daily_sales.end(), cumulative_sales.begin());

    std::cout << "Cumulative sales: ";
    for (int num : cumulative_sales) std::cout << num << " ";
    // Output: Cumulative sales: 5 15 30 50 75
    return 0;
}
