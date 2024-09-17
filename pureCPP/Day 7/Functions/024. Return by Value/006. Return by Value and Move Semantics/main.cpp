#include <iostream>
#include <vector>
#include <utility>

std::vector<int> createLargeVector(int size) {
    std::vector<int> largeVector(size);
    for (int i = 0; i < size; ++i) {
        largeVector[i] = i;
    }
    return largeVector;  // Return by value
}

int main() {
    std::vector<int> vec = createLargeVector(1000);  // Move semantics apply here
    std::cout << "Vector size: " << vec.size() << std::endl;  // Output: Vector size: 1000
    return 0;
}
