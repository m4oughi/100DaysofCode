#include <iostream>
#include <memory>

int main() {
    {
        std::unique_ptr<int[]> arrayPtr = std::make_unique<int[]>(5);
        for (int i = 0; i < 5; ++i) {
            arrayPtr[i] = i * 10;
            std::cout << "Array element " << i << ": " << arrayPtr[i] << std::endl;
        }
    }  // Array memory is automatically deallocated when `arrayPtr` goes out of scope.
}
