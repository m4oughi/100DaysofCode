#include <iostream>
#include <array>

constexpr int initValue(int index) {
    return index * 2;
}

int main() {
    constexpr std::array<int, 5> arr = {initValue(0), initValue(1), initValue(2), initValue(3), initValue(4)};
    for (auto val : arr) {
        std::cout << val << " "; // Prints 0 2 4 6 8
    }
    return 0;
}