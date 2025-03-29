#include <array>
#include <iostream>

constexpr std::array<int, 3> arr = {1, 2, 3};

int main() {
    for (int i : arr) {
        std::cout << i << " ";
    }
}
