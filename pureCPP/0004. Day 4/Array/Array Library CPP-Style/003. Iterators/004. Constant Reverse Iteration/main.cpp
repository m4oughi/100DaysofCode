#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};

    for (auto it = arr.crbegin(); it != arr.crend(); ++it) {
        std::cout << *it << " ";  // Output: 50 40 30 20 10
    }

    return 0;
}