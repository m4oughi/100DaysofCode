#include <iostream>
#include <chrono>
#include <vector>

void processByValue(std::vector<int> vec) {  // Copy of vector
    // Process vector
}

void processByReference(const std::vector<int>& vec) {  // Reference to vector
    // Process vector
}

int main() {
    std::vector<int> largeVector(1000000, 1);  // Large vector

    auto start = std::chrono::high_resolution_clock::now();
    processByValue(largeVector);  // Copy
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "By value: "
              << std::chrono::duration<double>(end - start).count() << " seconds\n";

    start = std::chrono::high_resolution_clock::now();
    processByReference(largeVector);  // Reference
    end = std::chrono::high_resolution_clock::now();
    std::cout << "By reference: "
              << std::chrono::duration<double>(end - start).count() << " seconds\n";

    return 0;
}
