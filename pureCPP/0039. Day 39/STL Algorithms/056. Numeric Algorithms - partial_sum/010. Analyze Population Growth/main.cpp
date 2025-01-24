#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<double> growth_rates = {0.05, 0.04, 0.06, 0.03};
    std::vector<double> population(5, 1000); // Starting population

    std::partial_sum(growth_rates.begin(), growth_rates.end(), population.begin() + 1,
                     [](double current_population, double growth_rate) {
                         return current_population * (1 + growth_rate);
                     });

    std::cout << "Yearly populations: ";
    for (double pop : population) std::cout << pop << " ";
    // Output: Yearly populations: 1000 1050 1092 1157.52 1191.25
    return 0;
}
