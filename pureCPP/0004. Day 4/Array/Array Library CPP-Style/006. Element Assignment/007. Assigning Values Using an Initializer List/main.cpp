#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    arr = {10, 20, 30, 40, 50};  // Reassign using an initializer list

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 10 20 30 40 50
    }

    return 0;
}