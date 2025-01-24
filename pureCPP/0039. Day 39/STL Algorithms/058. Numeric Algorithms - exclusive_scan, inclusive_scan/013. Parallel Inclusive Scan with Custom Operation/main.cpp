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
    std::inclusive_scan(std::execution::par, data.begin(), data.end(), result.begin(),
                       [](int a, int b) { return a + b * 2; }); // Custom operation
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Inclusive Scan with Custom Operation completed.\n";
    std::cout << "Time taken: "
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
              << " ms\n";

    // Optionally verify a few elements
    std::cout << "First 5 elements: ";
    for(int i = 0; i < 5; ++i) {
        std::cout << result[i] << " "; // Should follow the custom operation
    }
    std::cout << "\n";

    return 0;
}
