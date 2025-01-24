#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <execution>
#include <chrono>

struct RunningMin {
    int current_min;
};

int main() {
    std::vector<int> numbers = {5, 3, 6, 2, 8, 1, 4};
    std::vector<RunningMin> inclusive_result(numbers.size());

    auto start = std::chrono::high_resolution_clock::now();
    std::inclusive_scan(std::execution::par, numbers.begin(), numbers.end(), inclusive_result.begin(),
        [&](int a, int b) -> RunningMin {
            return RunningMin{std::min(a, b)};
        },
        RunningMin{INT32_MAX}
    );
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Inclusive Scan for Parallel Prefix Minimum completed.\n";
    std::cout << "Time taken: "
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
              << " ms\n";

    std::cout << "Running Minimums: ";
    for (const auto& rm : inclusive_result) {
        std::cout << rm.current_min << " ";
    }
    // Output: 5 3 3 2 2 1 1

    return 0;
}
