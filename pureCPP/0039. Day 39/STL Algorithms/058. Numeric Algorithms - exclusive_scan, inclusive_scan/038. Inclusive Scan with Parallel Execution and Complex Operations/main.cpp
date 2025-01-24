#include <iostream>
#include <vector>
#include <numeric>
#include <execution>
#include <chrono>

struct RunningTotals {
    long long sum;
    long long product;
};

int main() {
    std::vector<int> numbers(1000000, 2); // Large dataset
    std::vector<RunningTotals> inclusive_result(numbers.size());

    auto start = std::chrono::high_resolution_clock::now();
    std::inclusive_scan(std::execution::par, numbers.begin(), numbers.end(), inclusive_result.begin(),
        [&](int a, int b) -> RunningTotals {
            return RunningTotals{a.sum + b, a.product * b};
        },
        RunningTotals{0, 1}
    );
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Inclusive Scan with Parallel Execution and Complex Operations completed.\n";
    std::cout << "Time taken: "
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
              << " ms\n";
    // Output: Time taken will vary based on system

    // Verify a few elements
    std::cout << "First 5 inclusive results:\n";
    for(int i = 0; i < 5 && i < inclusive_result.size(); ++i) {
        std::cout << "Sum: " << inclusive_result[i].sum
                  << ", Product: " << inclusive_result[i].product << "\n";
    }
    /*
    Output:
    Sum: 2, Product: 2
    Sum: 4, Product: 4
    Sum: 6, Product: 8
    Sum: 8, Product: 16
    Sum: 10, Product: 32
    */

    return 0;
}
