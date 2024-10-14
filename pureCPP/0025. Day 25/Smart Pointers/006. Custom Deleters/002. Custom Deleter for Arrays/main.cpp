#include <iostream>
#include <memory>

void arrayDeleter(int* arr) {
    std::cout << "Custom deleter for array called. Deleting array..." << std::endl;
    delete[] arr;
}

int main() {
    std::shared_ptr<int> arr(new int[5], arrayDeleter);  // Custom deleter for array cleanup

    for (int i = 0; i < 5; ++i) {
        arr.get()[i] = i * 10;
    }

    for (int i = 0; i < 5; ++i) {
        std::cout << "Array element " << i << ": " << arr.get()[i] << std::endl;
    }

    // Array will be automatically deallocated using the custom deleter
    return 0;
}
