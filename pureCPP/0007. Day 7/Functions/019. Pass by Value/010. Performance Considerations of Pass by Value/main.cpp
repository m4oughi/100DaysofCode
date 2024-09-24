#include <iostream>
#include <chrono>
#include <vector>

void processLargeVector(std::vector<int> vec) {
    for (int i = 0; i < vec.size(); ++i) {
        vec[i] *= 2;
    }
}

int main() {
    std::vector<int> largeVector(1000000, 1);  // Large vector with 1 million elements
    
    auto start = std::chrono::high_resolution_clock::now();
    processLargeVector(largeVector);  // Passing large data by value (not efficient)
    auto end = std::chrono::high_resolution_clock::now();
    
    std::chrono::duration<double> duration = end - start;
    std::cout << "Time taken: " << duration.count() << " seconds" << std::endl;

    return 0;
}
