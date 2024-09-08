#include <iostream>
#include <array>

int main() {
    const std::array<int, 4> arr = {1, 2, 3, 4};

    for (int i : arr) {
        std::cout << i << " "; // Prints 1 2 3 4
    }
}
