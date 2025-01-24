#include <iostream>
#include <vector>
#include <numeric>

struct Accumulator {
    int sum;
    bool include_next;
};

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<int> exclusive_result(numbers.size());

    Accumulator initial = {0, true};
    std::exclusive_scan(numbers.begin(), numbers.end(), exclusive_result.begin(), initial,
        [&](const Accumulator& acc, int val) -> Accumulator {
            if (acc.include_next) {
                return Accumulator{acc.sum + val, val % 2 == 0}; // Include next only if current is even
            } else {
                return Accumulator{acc.sum, false};
            }
        });

    std::cout << "Exclusive Scan with Conditional Logic:\n";
    for (int num : exclusive_result) {
        std::cout << num << " ";
    }
    // Output: 0 1 3 3 7

    return 0;
}
