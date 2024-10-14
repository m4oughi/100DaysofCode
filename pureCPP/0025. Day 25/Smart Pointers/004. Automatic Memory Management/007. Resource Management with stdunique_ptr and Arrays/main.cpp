#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int[]> arrayPtr = std::make_unique<int[]>(5);  // Unique pointer managing an array

    for (int i = 0; i < 5; ++i) {
        arrayPtr[i] = i * 10;  // Assign values
    }

    for (int i = 0; i < 5; ++i) {
        std::cout << "Array element " << i << ": " << arrayPtr[i] << std::endl;
    }

    // No need to manually delete the array, it will be deleted automatically when arrayPtr goes out of scope
    return 0;
}
