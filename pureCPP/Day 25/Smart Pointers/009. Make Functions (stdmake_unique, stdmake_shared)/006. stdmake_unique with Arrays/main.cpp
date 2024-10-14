#include <iostream>
#include <memory>

int main() {
    auto uniquePtr = std::make_unique<int[]>(5);  // Create unique_ptr for array of 5 ints
    for (int i = 0; i < 5; ++i) {
        uniquePtr[i] = i * 10;
        std::cout << "Array value: " << uniquePtr[i] << std::endl;
    }

    return 0;
}
