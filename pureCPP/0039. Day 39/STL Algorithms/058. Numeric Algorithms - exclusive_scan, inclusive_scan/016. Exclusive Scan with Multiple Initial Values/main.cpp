#include <iostream>
#include <vector>
#include <numeric>
#include <tuple>

struct RunningTotal {
    int sum;
    int count;
};

int main() {
    std::vector<int> numbers = {5, 10, 15, 20};
    std::vector<RunningTotal> exclusive_result(numbers.size());

    std::exclusive_scan(numbers.begin(), numbers.end(), exclusive_result.begin(),
                       RunningTotal{0, 0},
                       [&](const RunningTotal& acc, int val) -> RunningTotal {
                           return RunningTotal{acc.sum + val, acc.count + 1};
                       });

    std::cout << "Exclusive Scan with Multiple Initial Values:\n";
    for (const auto& rt : exclusive_result) {
        std::cout << "Sum: " << rt.sum << ", Count: " << rt.count << "\n";
    }
    /*
    Output:
    Sum: 0, Count: 0
    Sum: 5, Count: 1
    Sum: 15, Count: 2
    Sum: 30, Count: 3
    */

    return 0;
}
