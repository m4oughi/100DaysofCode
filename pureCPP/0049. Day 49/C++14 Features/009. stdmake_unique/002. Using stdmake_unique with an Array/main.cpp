#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int[]> arr = std::make_unique<int[]>(5);
    
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 2; // Assigning values
    }

    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " "; // Output: 0 2 4 6 8
    }
    std::cout << std::endl;

    return 0;
}
