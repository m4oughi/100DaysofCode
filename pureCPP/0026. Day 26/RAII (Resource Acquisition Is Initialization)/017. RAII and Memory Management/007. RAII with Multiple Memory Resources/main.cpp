#include <iostream>
#include <memory>

void multipleMemoryResources() {
    std::unique_ptr<int> intPtr1 = std::make_unique<int>(100);  // First resource
    std::unique_ptr<int> intPtr2 = std::make_unique<int>(200);  // Second resource
    std::unique_ptr<int[]> arrayPtr = std::make_unique<int[]>(3); // Third resource

    arrayPtr[0] = 10;
    arrayPtr[1] = 20;
    arrayPtr[2] = 30;

    std::cout << "First value: " << *intPtr1 << std::endl;
    std::cout << "Second value: " << *intPtr2 << std::endl;

    for (int i = 0; i < 3; ++i) {
        std::cout << "Array element " << i << ": " << arrayPtr[i] << std::endl;
    }
    // All memory is automatically deallocated when intPtr1, intPtr2, and arrayPtr go out of scope
}

int main() {
    multipleMemoryResources();
    std::cout << "Multiple memory resources automatically managed with RAII." << std::endl;
    return 0;
}
