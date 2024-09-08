#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};

    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";  // Output: 10 20 30 40 50
    }

    return 0;
}