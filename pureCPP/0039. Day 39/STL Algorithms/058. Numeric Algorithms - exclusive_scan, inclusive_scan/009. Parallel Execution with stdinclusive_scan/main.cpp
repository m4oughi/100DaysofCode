#include <iostream>
#include <vector>
#include <numeric>
#include <execution>
#include <chrono>

int main() {
    const int size = 1000000;
    std::vector<int> data(size, 1);
    std::vector<int> result(size);

    auto start = std::chrono::high_resolution_clock::now();
    std::inclusive_scan(std::execution::par, data.begin(), data.end(), result.begin());
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Inclusive Scan completed.\n";
    std::cout << "Time taken: "
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
              << " ms\n";
    // Output: Time taken will vary based on system

    return 0;
}
