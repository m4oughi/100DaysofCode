#include <iostream>
#include <vector>

void processLargeVector(const std::vector<int>& vec) {
    std::cout << "Vector size: " << vec.size() << std::endl;
    // Function can read from vec but cannot modify it
}

int main() {
    std::vector<int> largeVector(1000000, 1);  // Large vector
    processLargeVector(largeVector);  // Pass by reference for efficiency
    return 0;
}
