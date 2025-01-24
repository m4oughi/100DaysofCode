#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> population = {1000, 1100, 1210, 1331, 1464};
    std::vector<double> growth_rate(population.size());

    std::adjacent_difference(population.begin(), population.end(), growth_rate.begin(),
        [](int current, int previous) { return (static_cast<double>(current) - previous) / previous * 100.0; });

    std::cout << "Yearly growth rates (%): ";
    for (size_t i = 1; i < growth_rate.size(); ++i) { // Skip the first element
        std::cout << growth_rate[i] << "% ";
    }
    // Output: Yearly growth rates (%): 10% 10% 10% 10%
    return 0;
}
