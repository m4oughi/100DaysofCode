#include <iostream>
#include <vector>
#include <chrono>

int main() {
    const size_t size = 1000000;
    std::vector<int> data(size, 1);

    // Simulate a computation-intensive task
    auto start = std::chrono::high_resolution_clock::now();
    for (size_t i = 0; i < data.size(); ++i) {
        data[i] *= 2;  // Directly modify elements; contiguous memory improves cache performance
    }
    auto end = std::chrono::high_resolution_clock::now();

    // Measure time taken
    std::chrono::duration<double> diff = end - start;
    std::cout << "Time taken: " << diff.count() << " seconds" << std::endl;

    return 0;
}
