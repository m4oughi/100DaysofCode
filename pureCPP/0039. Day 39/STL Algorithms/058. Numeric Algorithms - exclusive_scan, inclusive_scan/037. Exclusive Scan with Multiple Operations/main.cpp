#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

struct Stats {
    int sum;
    int max;
};

int main() {
    std::vector<int> numbers = {3, 1, 4, 1, 5, 9, 2};
    std::vector<Stats> exclusive_result(numbers.size());

    std::exclusive_scan(numbers.begin(), numbers.end(), exclusive_result.begin(),
                       Stats{0, INT32_MIN},
                       [&](const Stats& acc, int val) -> Stats {
                           return Stats{
                               acc.sum + val,
                               std::max(acc.max, val)
                           };
                       });

    std::cout << "Exclusive Scan with Multiple Operations:\n";
    for (const auto& stats : exclusive_result) {
        std::cout << "Sum: " << stats.sum << ", Max: " << stats.max << "\n";
    }
    /*
    Output:
    Sum: 0, Max: -2147483648
    Sum: 3, Max: 3
    Sum: 4, Max: 3
    Sum: 8, Max: 4
    Sum: 9, Max: 4
    Sum: 14, Max: 5
    Sum: 23, Max: 9
    */

    return 0;
}
