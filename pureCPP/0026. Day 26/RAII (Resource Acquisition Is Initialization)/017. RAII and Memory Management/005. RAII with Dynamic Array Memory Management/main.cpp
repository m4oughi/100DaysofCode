#include <iostream>
#include <memory>

void arrayMemoryManagement() {
    std::unique_ptr<int[]> arr = std::make_unique<int[]>(5); // Allocates dynamic array
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 10;
    }

    for (int i = 0; i < 5; ++i) {
        std::cout << "Array element " << i << ": " << arr[i] << std::endl;
    }
    // Array memory is automatically deallocated when arr goes out of scope
}

int main() {
    arrayMemoryManagement();
    std::cout << "Array memory automatically managed with RAII." << std::endl;
    return 0;
}
