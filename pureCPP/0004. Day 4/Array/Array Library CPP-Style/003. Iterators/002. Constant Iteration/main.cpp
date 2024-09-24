#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};

    for (auto it = arr.cbegin(); it != arr.cend(); ++it) {
        std::cout << *it << " ";  // Output: 10 20 30 40 50
    }

    return 0;
}