#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

int main() {
    std::vector<int> readings = {100, 105, 95, 110, 100};
    std::vector<int> changes(readings.size());

    std::adjacent_difference(readings.begin(), readings.end(), changes.begin());

    std::cout << "Sensor changes: ";
    for (size_t i = 1; i < changes.size(); ++i) { // Skip the first element
        std::cout << changes[i] << " ";
    }
    // Output: Sensor changes: 5 -10 15 -10
    return 0;
}
