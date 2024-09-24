#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    for (int* it = arr.data(); it != arr.data() + arr.size(); ++it) {
        *it *= 2;  // Double each element
    }

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 2 4 6 8 10
    }

    return 0;
}