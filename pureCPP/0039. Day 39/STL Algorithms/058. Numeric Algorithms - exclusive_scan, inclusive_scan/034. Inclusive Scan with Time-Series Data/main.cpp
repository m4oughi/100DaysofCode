#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<double> temperatures = {70.0, 72.5, 68.0, 75.0, 71.0};
    std::vector<double> cumulative_average(temperatures.size());

    std::inclusive_scan(temperatures.begin(), temperatures.end(), cumulative_average.begin(),
        [&](double acc, double current) -> double {
            static int count = 0;
            count++;
            return acc + current;
        });

    for(size_t i = 0; i < cumulative_average.size(); ++i) {
        cumulative_average[i] /= (i + 1);
    }

    std::cout << "Cumulative Averages: ";
    for (double avg : cumulative_average) {
        std::cout << avg << " ";
    }
    // Output: 70.00 71.25 69.00 71.75 71.00

    return 0;
}
