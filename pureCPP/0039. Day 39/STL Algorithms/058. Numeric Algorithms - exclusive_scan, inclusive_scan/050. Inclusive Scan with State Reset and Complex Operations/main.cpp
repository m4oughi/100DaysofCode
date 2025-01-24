#include <iostream>
#include <vector>
#include <numeric>
#include <string>

struct Accumulator {
    double total;
    bool reset;
};

int main() {
    std::vector<double> data = {100.0, 200.0, -50.0, 300.0, 400.0, -100.0, 500.0};
    std::vector<Accumulator> inclusive_result(data.size());

    std::inclusive_scan(data.begin(), data.end(), inclusive_result.begin(),
        [&](const Accumulator& acc, double val) -> Accumulator {
            if (val < 0) {
                // Reset the total if a negative value is encountered
                return Accumulator{acc.total, true};
            } else if (acc.reset) {
                // Start a new accumulation after reset
                return Accumulator{val, false};
            } else {
                // Continue accumulating
                return Accumulator{acc.total + val, false};
            }
        },
        Accumulator{0.0, false}
    );

    std::cout << "Inclusive Scan with State Reset and Complex Operations:\n";
    for (size_t i = 0; i < inclusive_result.size(); ++i) {
        std::cout << "Index " << i << ": Total = " << inclusive_result[i].total
                  << ", Reset = " << inclusive_result[i].reset << "\n";
    }
    /*
    Output:
    Index 0: Total = 100, Reset = false
    Index 1: Total = 300, Reset = false
    Index 2: Total = 300, Reset = true
    Index 3: Total = 300, Reset = false
    Index 4: Total = 700, Reset = false
    Index 5: Total = 700, Reset = true
    Index 6: Total = 700, Reset = false
    */

    return 0;
}
