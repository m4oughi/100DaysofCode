#include <iostream>
#include <vector>
#include <numeric>
#include <execution>
#include <chrono>

int main() {
    const int size = 1000000;
    std::vector<int> data(size, 2);
    std::vector<int> inclusive_result(size);

    auto start = std::chrono::high_resolution_clock::now();
    std::inclusive_scan(std::execution::par, data.begin(), data.end(), inclusive_result.begin(),
                       std::multiplies<>());
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Inclusive Scan with Parallel Prefix Multiplication completed.\n";
    std::cout << "Time taken: "
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
              << " ms\n";
    // Output: Time taken will vary based on system

    // Verify a few elements
    std::cout << "First 5 prefix products: ";
    for(int i = 0; i < 5 && i < inclusive_result.size(); ++i) {
        std::cout << inclusive_result[i] << " ";
    }
    // Output: 2 4 8 16 32

    return 0;
}
