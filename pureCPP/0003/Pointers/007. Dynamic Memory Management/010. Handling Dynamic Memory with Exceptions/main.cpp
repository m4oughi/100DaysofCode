#include <iostream>
#include <memory>

int main() {
    try {
        // Dynamically allocate a large array that might throw std::bad_alloc
        std::unique_ptr<int[]> arr(new int[1000000000]);

        // Initialize the array
        for (int i = 0; i < 1000000000; ++i) {
            arr[i] = i;
        }

        std::cout << "Array successfully allocated and initialized." << std::endl;
    } catch (const std::bad_alloc& e) {
        std::cerr << "Memory allocation failed: " << e.what() << std::endl;
    }

    return 0;
}
