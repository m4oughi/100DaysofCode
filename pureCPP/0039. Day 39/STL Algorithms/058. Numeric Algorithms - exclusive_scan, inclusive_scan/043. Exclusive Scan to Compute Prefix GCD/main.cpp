#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

struct Accumulator {
    int gcd;
};

int main() {
    std::vector<int> numbers = {24, 36, 48, 60};
    std::vector<Accumulator> exclusive_result(numbers.size());

    std::exclusive_scan(numbers.begin(), numbers.end(), exclusive_result.begin(),
                       Accumulator{0},
                       [&](const Accumulator& acc, int val) -> Accumulator {
                           if (acc.gcd == 0) return Accumulator{val};
                           return Accumulator{std::gcd(acc.gcd, val)};
                       });

    std::cout << "Exclusive Scan for Prefix GCD:\n";
    for (const auto& acc : exclusive_result) {
        std::cout << "GCD: " << acc.gcd << "\n";
    }
    /*
    Output:
    GCD: 0
    GCD: 24
    GCD: 12
    GCD: 12
    */

    return 0;
}
