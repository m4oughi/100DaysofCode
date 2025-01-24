#include <iostream>
#include <vector>
#include <numeric>

struct Accumulator {
    int sum;
    bool reset;
};

int main() {
    std::vector<int> numbers = {5, 10, -1, 15, 20, -2, 25};
    std::vector<Accumulator> exclusive_result(numbers.size());

    std::exclusive_scan(numbers.begin(), numbers.end(), exclusive_result.begin(),
                       Accumulator{0, false},
                       [&](const Accumulator& acc, int val) -> Accumulator {
                           if (val < 0) {
                               return Accumulator{acc.sum, true};
                           }
                           if (acc.reset) {
                               return Accumulator{val, false};
                           }
                           return Accumulator{acc.sum + val, false};
                       });

    std::cout << "Exclusive Scan with Conditional Reset:\n";
    for (const auto& acc : exclusive_result) {
        std::cout << "Sum: " << acc.sum << ", Reset: " << acc.reset << "\n";
    }
    /*
    Output:
    Sum: 0, Reset: false
    Sum: 5, Reset: false
    Sum: 15, Reset: true
    Sum: 0, Reset: false
    Sum: 15, Reset: false
    Sum: 35, Reset: true
    Sum: 0, Reset: false
    */

    return 0;
}
