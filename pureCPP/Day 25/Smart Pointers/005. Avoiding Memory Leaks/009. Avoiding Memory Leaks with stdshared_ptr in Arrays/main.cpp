#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int[]> arrayPtr(new int[5]);  // Shared pointer managing an array

    for (int i = 0; i < 5; ++i) {
        arrayPtr[i] = i * 10;
    }

    for (int i = 0; i < 5; ++i) {
        std::cout << "Array element " << i << ": " << arrayPtr[i] << std::endl;
    }

    // Memory is automatically deallocated when arrayPtr goes out of scope
    return 0;
}
